/**
 * DOAU1 - Recompiled code chunk 17
 * Functions: 250 (0x000A0005 - 0x000A71E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000A0005
 * Original: 0x000A0005 - 0x000A000A (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0005: ;
    eax = MEM32(0x935844);

    g_seh_ebp = ebp; sub_000A000A(); return; /* fallthrough 0x000A000A */

}

/**
 * sub_000A000A
 * Original: 0x000A000A - 0x000A000B (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A000A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A000A: ;
    PUSH32(esp, eax);

    g_seh_ebp = ebp; sub_000A000B(); return; /* fallthrough 0x000A000B */

}

/**
 * sub_000A000B
 * Original: 0x000A000B - 0x000A000F (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A000B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A000B: ;
    ecx = edi + 0x14;
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_000A000F(); return; /* fallthrough 0x000A000F */

}

/**
 * sub_000A000F
 * Original: 0x000A000F - 0x000A004B (60 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A000F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A000F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0015u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A0015: ;
    edx = MEM32(0x935844);
    PUSH32(esp, edx);
    MEM32(esi + 0x14) = eax;
    eax = edi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0029u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A0029: ;
    ecx = MEM32(0x935844);
    PUSH32(esp, ecx);
    edx = edi + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000A003Du); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A003D: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    MEM8(esi) = 3;
    g_seh_ebp = ebp; sub_0009FFA2(); return; /* tail jmp 0x0009FFA2 */

}

/**
 * sub_000A0046
 * Original: 0x000A0046 - 0x000A004B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0046(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0046: ;
    g_seh_ebp = ebp; sub_0009FFA2(); return; /* tail jmp 0x0009FFA2 */

}

/**
 * sub_000A004B
 * Original: 0x000A004B - 0x000A006B (32 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A004B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A004B: ;
    eax = MEM32(ebp);
    MEM32(esi + 0x10) = eax;
    ecx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    MEM8(esi) = 3;
    g_seh_ebp = ebp; sub_0009FFA2(); return; /* tail jmp 0x0009FFA2 */

}

/**
 * sub_000A0063
 * Original: 0x000A0063 - 0x000A006B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0063(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0063: ;
    MEM8(esi) = 3;
    g_seh_ebp = ebp; sub_0009FFA2(); return; /* tail jmp 0x0009FFA2 */

}

/**
 * sub_000A006B
 * Original: 0x000A006B - 0x000A009B (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A006B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A006B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x106 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A009A; /* jne: not equal / not zero */

loc_000A0072: ;
    SET_LO16(edx, MEM16(edi + 0x14));
    ecx = MEM32(0x9357F4);
    MEM16(esi + 0x14) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x16));
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(esi + 0x16) = LO16(eax);
    MEM8(esi) = 4;
    PUSH32(esp, 0x000A0097u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_000A0097: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A009A: ;
    POP32(esp, ebx);

    g_seh_ebp = ebp; sub_000A009B(); return; /* fallthrough 0x000A009B */

}

/**
 * sub_000A0070
 * Original: 0x000A0070 - 0x000A00B0 (64 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0070: ;
    if (_flags /* jne: not equal / not zero */) goto loc_000A009A;

loc_000A0072: ;
    SET_LO16(edx, MEM16(edi + 0x14));
    ecx = MEM32(0x9357F4);
    MEM16(esi + 0x14) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x16));
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM16(esi + 0x16) = LO16(eax);
    MEM8(esi) = 4;
    PUSH32(esp, 0x000A0097u); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_000A0097: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A009A: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A009B
 * Original: 0x000A009B - 0x000A00B0 (21 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A009B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A009B: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A009C
 * Original: 0x000A009C - 0x000A00B0 (20 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A009C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A009C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A00B0
 * Original: 0x000A00B0 - 0x000A029E (494 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A00B0(void)
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

loc_000A00B0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x80);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 8) = ecx;
    ebx = MEM32(0x935088);
    MEM32(esp + 0x18) = 0x3F800000;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x84);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x30) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x68) = eax;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0xC);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    SET_LO8(eax, MEM8(esi + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    MEM32(esp + 0x34) = 0x3F800000;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x50) = 0x3F800000;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEM32(esp + 0x6C) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_000A019A; /* jne: not equal / not zero */

loc_000A0182: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000A0195u); RECOMP_ABI_CALL(0x0009D870u, sub_0009D870); /* call 0x0009D870 */

loc_000A0195: ;
    goto loc_000A0222;

loc_000A019A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A020A; /* jne: not equal / not zero */

loc_000A019E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280364)); /* fmul dword ptr [0x280364] */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280360)); /* fmul dword ptr [0x280360] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edi;
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280364)); /* fmul dword ptr [0x280364] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x74) = ecx;
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280360)); /* fmul dword ptr [0x280360] */
    MEMF(esp + 0x5C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000A0222;

loc_000A020A: ;
    ecx = MEM32(esi);
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A021Fu); RECOMP_ABI_CALL(0x0009F540u, sub_0009F540); /* call 0x0009F540 */

loc_000A021F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0222: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A023A; /* je: equal / zero */

loc_000A0229: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 5;

loc_000A023A: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A0258u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0258: ;
    ecx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0265u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0265: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0270u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0270: ;
    PUSH32(esp, 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000A0280u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A0280: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A029A; /* je: equal / zero */

loc_000A0289: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 2;

loc_000A029A: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A02A0
 * Original: 0x000A02A0 - 0x000A042F (399 bytes, 113 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A02A0(void)
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

loc_000A02A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A02B1u); RECOMP_ABI_CALL(0x0009EF60u, sub_0009EF60); /* call 0x0009EF60 */

loc_000A02B1: ;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0xA);
    MEM32(esp + 0x24) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 8);
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 6);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edx + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx);
    MEM32(ecx + 0x38) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2EF280)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 0x3C) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(edx + 0xC);
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x48) = esi;
    MEM32(ecx + 0x64) = esi;
    esi = ZX16(MEM16(eax + 0xA));
    eax = ZX16(MEM16(eax + 8));
    MEM32(esp + 0x20) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x1A);
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    edx = (uint32_t)(int32_t)SMEM16(edx + 0x18);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 4) = esi;
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = edx;
    esi = eax + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEM32(esp + 0x10) = esi;
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    edx = MEM32(ecx + 0x14);
    MEM32(ecx + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / g_fp_stack[(g_fp_top + 3) & 7]); /* fdiv st(3) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    eax = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    MEMF(ecx + 0x50) = (float)fp_top(); /* fst */
    MEM32(ecx + 0x68) = eax;
    MEMF(ecx + 0x6C) = (float)fp_top(); /* fst */
    PUSH32(esp, 0x1C);
    fp_push(MEMF(0x2F27D4)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x14)); /* fadd dword ptr [ecx + 0x14] */
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F27D0)); /* fadd dword ptr [0x2f27d0] */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2F27D4)); /* fsub dword ptr [0x2f27d4] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2F27D0)); /* fadd dword ptr [0x2f27d0] */
    MEMF(ecx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2F27D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x2F27D0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2F27D4)); /* fsub dword ptr [0x2f27d4] */
    MEMF(ecx + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x2F27D0)); /* fsub dword ptr [0x2f27d0] */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A042Au); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A042A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0430
 * Original: 0x000A0430 - 0x000A04C6 (150 bytes, 46 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A0430(void)
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

loc_000A0430: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    SET_LO8(edx, MEM8(esi + 9));
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    eax = eax * 4 + 0x923D68;
    if (CMP_EQ(_fa, _fb)) goto loc_000A0459; /* je: equal / zero */

loc_000A0453: ;
    SET_LO16(eax, MEM16(eax + 6));
    goto loc_000A045D;

loc_000A0459: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 4);

loc_000A045D: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x10) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2F) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM32(esp + 0x38) = 0x3F800000;
    PUSH32(esp, 0x000A0498u); RECOMP_ABI_CALL(0x0009ECA0u, sub_0009ECA0); /* call 0x0009ECA0 */

loc_000A0498: ;
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x2C);
    MEM32(esp + 0x40) = eax;
    SET_LO16(eax, MEM16(edi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0604(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_000A04C6(); return; /* fallthrough 0x000A04C6 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A04C6
 * Original: 0x000A04C6 - 0x000A0604 (318 bytes, 98 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A04C6(void)
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

loc_000A04C6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0604(); return; } /* je: equal / zero */

loc_000A04D0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x20 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A04ED; /* jne: not equal / not zero */

loc_000A04D6: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A04ED; /* je: equal / zero */

loc_000A04DB: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    goto loc_000A05B2;

loc_000A04ED: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x17F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x17F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A04F8; /* jae: above or equal (unsigned >=) */

loc_000A04F3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0527; /* jne: not equal / not zero */

loc_000A04F8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF61) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF61 (16-bit) */
    fp_push(MEMF(0x22C0D0)); /* fld float */
    if (CMP_B(_fa, _fb)) goto loc_000A0512; /* jb: below (unsigned <) */

loc_000A0504: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF9F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF9F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A0512; /* ja: above (unsigned >) */

loc_000A050A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x22C0D8)); /* fld float */

loc_000A0512: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    goto loc_000A05B6;

loc_000A0527: ;
    _fa = (uint32_t)(MEM8(esi + 9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0556; /* je: equal / zero */

loc_000A052C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0532u); RECOMP_ABI_CALL(0x001520A0u, sub_001520A0); /* call 0x001520A0 */

loc_000A0532: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0556; /* je: equal / zero */

loc_000A0539: ;
    edx = MEM32(esi);
    eax = MEM32(edx * 4 + 0x2EF298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0556; /* je: equal / zero */

loc_000A0546: ;
    ecx = ZX8(MEM8(esp + 0x1D));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A0554u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A0552u); } /* indirect call */
    }

loc_000A0554: ;
    goto loc_000A056B;

loc_000A0556: ;
    ecx = ZX8(MEM8(esp + 0x1D));
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x2EF290); PUSH32(esp, 0x000A056Bu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A0564u); } /* indirect call */
    }

loc_000A056B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0574u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A0574: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    SET_LO8(eax, MEM8(esi + 0xA));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000A05BE; /* je: equal / zero */

loc_000A059E: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A05A7u); RECOMP_ABI_CALL(0x0009C8D0u, sub_0009C8D0); /* call 0x0009C8D0 */

loc_000A05A7: ;
    MEM32(esp + 0x1C) = eax;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A05B2: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */

loc_000A05B6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A05BE: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM8(esp + 0x2C) = LO8(ebx);
    PUSH32(esp, 0x000A05D6u); RECOMP_ABI_CALL(0x0009ECA0u, sub_0009ECA0); /* call 0x0009ECA0 */

loc_000A05D6: ;
    edi = eax;
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x2C);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x24) = eax;
    SET_LO16(eax, MEM16(edi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_000A04C6; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000A0604(); return; /* fallthrough 0x000A0604 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0604
 * Original: 0x000A0604 - 0x000A0652 (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0604(void)
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

loc_000A0604: ;
    fp_push((double)SMEM32(0x930F08)); /* fild */
    ecx = LO16(ebp);
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(esp + 0x18)); /* fimul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A0632u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A0632: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_000A0660
 * Original: 0x000A0660 - 0x000A06CC (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0660: ;
    eax = MEM32(0x935028);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x935020) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x935020 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A0698; /* ja: above (unsigned >) */

loc_000A066C: ;
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x935028) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000A0690; /* jl: less (signed <) */

loc_000A068C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A06A1; /* jl: less (signed <) */

loc_000A0690: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(9) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 9 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A069B; /* jle: less or equal (signed <=) */

loc_000A0694: ;
    SET_LO8(eax, 9);
    goto loc_000A06A1;

loc_000A0698: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000A069B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A06A1; /* jge: greater or equal (signed >=) */

loc_000A069F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000A06A1: ;
    eax = SX8(LO8(eax));
    edx = MEM32(eax * 4 + 0x9357F8);
    MEM32(edx) = ecx;
    MEM32(eax * 4 + 0x9357F8) = ecx;
    ecx = ZX16(MEM16(esi + 2));
    eax = MEM32(0x93560C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x93560C) = eax;
    edx = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A06D0
 * Original: 0x000A06D0 - 0x000A0740 (112 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A06D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A06D0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x935088);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000A06F1u); RECOMP_ABI_CALL(0x0009C5F0u, sub_0009C5F0); /* call 0x0009C5F0 */

loc_000A06F1: ;
    eax = 0x931020;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x84) = 0;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x6C) = 0x3F800000;
    MEM32(esp + 0x88) = 0x3F800000;
    MEM32(esp + 0x24) = eax;

    g_seh_ebp = ebp; sub_000A0740(); return; /* fallthrough 0x000A0740 */

}

/**
 * sub_000A0740
 * Original: 0x000A0740 - 0x000A0750 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0740: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0BAE(); return; } /* je: equal / zero */

loc_000A074E: ;
    edi = edi;

    g_seh_ebp = ebp; sub_000A0750(); return; /* fallthrough 0x000A0750 */

}

/**
 * sub_000A0750
 * Original: 0x000A0750 - 0x000A0B8F (1087 bytes, 307 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0750(void)
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

loc_000A0750: ;
    ecx = MEM32(esp + 0x20);
    esi = MEM32(ecx + 4);
    eax = ZX8(MEM8(esi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0B8F(); return; } /* ja: above (unsigned >) */

loc_000A0763: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA0E78); /* switch: 6 entries, 5 targets */
    if (_jt == 0x000A076Au) goto loc_000A076A;
    if (_jt == 0x000A0A22u) goto loc_000A0A22;
    if (_jt == 0x000A0A8Du) goto loc_000A0A8D;
    if (_jt == 0x000A0AD8u) goto loc_000A0AD8;
    if (_jt == 0x000A0B36u) goto loc_000A0B36;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A076A: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edi = esi + 0x1C;
    PUSH32(esp, 0x000A0776u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A0776: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A079C; /* je: equal / zero */

loc_000A0784: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0792u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0792: ;
    ebx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A079C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A07CB; /* je: equal / zero */

loc_000A07A3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A07A9u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_000A07A9: ;
    ebp = eax;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A07B9u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A07B9: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A07C4u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A07C4: ;
    ebp = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x14);

loc_000A07CB: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0865; /* jne: not equal / not zero */

loc_000A07D6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A0865: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    ecx = MEM32(edi);
    MEM32(esp + 0x38) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A0892; /* je: equal / zero */

loc_000A0871: ;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(edi);
    MEM32(esp + 0x8C) = edx;
    goto loc_000A08A1;

loc_000A0892: ;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x8C) = ecx;

loc_000A08A1: ;
    SET_LO8(ecx, MEM8(esi + 1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A09F5; /* je: equal / zero */

loc_000A08B0: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x10)); /* fiadd dword ptr [esp + 0x10] */
    MEMF(0x935AE8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x10)); /* fiadd dword ptr [esp + 0x10] */
    MEMF(0x935AEC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(0x935AF0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xC);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(0x935AF4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xC));
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x935AE8);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A095Fu); RECOMP_ABI_CALL(0x0009F450u, sub_0009F450); /* call 0x0009F450 */

loc_000A095F: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x24) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x44) - fp_top()); /* fsubr dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xC);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x64) - fp_top()); /* fsubr dword ptr [esp + 0x64] */
    PUSH32(esp, 0x1C);
    ecx = esp + 0x2C;
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 4);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 6);
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A09F0u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A09F0: ;
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

loc_000A09F5: ;
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A0Au); RECOMP_ABI_CALL(0x0009F380u, sub_0009F380); /* call 0x0009F380 */

loc_000A0A0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000A0A1Du); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A0A1D: ;
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

loc_000A0A22: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0A2Bu); RECOMP_ABI_CALL(0x0009EF60u, sub_0009EF60); /* call 0x0009EF60 */

loc_000A0A2B: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A4C; /* je: equal / zero */

loc_000A0A37: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0A46u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0A46: ;
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0A4C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A75; /* je: equal / zero */

loc_000A0A52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A58u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_000A0A58: ;
    ebp = eax;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0A68u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0A68: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0A73u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0A73: ;
    ebp = MEM32(edi);

loc_000A0A75: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A85u); RECOMP_ABI_CALL(0x000A02A0u, sub_000A02A0); /* call 0x000A02A0 */

loc_000A0A85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

loc_000A0A8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0ABE; /* je: equal / zero */

loc_000A0A91: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0AA3u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0AA3: ;
    ebx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0AB2u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0AB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0ABBu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0ABB: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A0ABE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0AD0u); RECOMP_ABI_CALL(0x0009E900u, sub_0009E900); /* call 0x0009E900 */

loc_000A0AD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

loc_000A0AD8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0B21; /* je: equal / zero */

loc_000A0ADD: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x000A0AECu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0AEC: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x000A0B05u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x000A0B18u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0B18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0B21u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0B21: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0B2Eu); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_000A0B2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

loc_000A0B36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0B7F; /* je: equal / zero */

loc_000A0B3B: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x000A0B4Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B4A: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x000A0B63u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x000A0B76u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0B76: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0B7Fu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0B7F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0B8Cu); RECOMP_ABI_CALL(0x0009EBE0u, sub_0009EBE0); /* call 0x0009EBE0 */

loc_000A0B8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

    g_seh_ebp = ebp; sub_000A0B8F(); return; /* fallthrough 0x000A0B8F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A076A
 * Original: 0x000A076A - 0x000A0BD0 (1126 bytes, 206 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A076A(void)
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

loc_000A076A: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    edi = esi + 0x1C;
    PUSH32(esp, 0x000A0776u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A0776: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A079C; /* je: equal / zero */

loc_000A0784: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0792u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0792: ;
    ebx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A079C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A07CB; /* je: equal / zero */

loc_000A07A3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A07A9u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_000A07A9: ;
    ebp = eax;
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A07B9u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A07B9: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A07C4u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A07C4: ;
    ebp = MEM32(esi + 0x14);
    eax = MEM32(esp + 0x14);

loc_000A07CB: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0865; /* jne: not equal / not zero */

loc_000A07D6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A0865: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    ecx = MEM32(edi);
    MEM32(esp + 0x38) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A0892; /* je: equal / zero */

loc_000A0871: ;
    edx = MEM32(edi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x70) = ecx;
    edx = MEM32(edi);
    MEM32(esp + 0x8C) = edx;
    goto loc_000A08A1;

loc_000A0892: ;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x8C) = ecx;

loc_000A08A1: ;
    SET_LO8(ecx, MEM8(esi + 1));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A09F5; /* je: equal / zero */

loc_000A08B0: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x10)); /* fiadd dword ptr [esp + 0x10] */
    MEMF(0x935AE8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(esp + 0x10)); /* fiadd dword ptr [esp + 0x10] */
    MEMF(0x935AEC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(0x935AF0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xC);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(0x935AF4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xC));
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x935AE8);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A095Fu); RECOMP_ABI_CALL(0x0009F450u, sub_0009F450); /* call 0x0009F450 */

loc_000A095F: ;
    edx = (uint32_t)(int32_t)SMEM16(edi);
    MEM32(esp + 0x24) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    eax = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x44) - fp_top()); /* fsubr dword ptr [esp + 0x44] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 4);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xC);
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x64) - fp_top()); /* fsubr dword ptr [esp + 0x64] */
    PUSH32(esp, 0x1C);
    ecx = esp + 0x2C;
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 4);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 6);
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A09F0u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A09F0: ;
    goto loc_000A0B95;

loc_000A09F5: ;
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xC));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A0Au); RECOMP_ABI_CALL(0x0009F380u, sub_0009F380); /* call 0x0009F380 */

loc_000A0A0A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x1C);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000A0A1Du); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A0A1D: ;
    goto loc_000A0B95;

loc_000A0B95: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0A22
 * Original: 0x000A0A22 - 0x000A0BD0 (430 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0A22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0A22: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0A2Bu); RECOMP_ABI_CALL(0x0009EF60u, sub_0009EF60); /* call 0x0009EF60 */

loc_000A0A2B: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A4C; /* je: equal / zero */

loc_000A0A37: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0A46u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0A46: ;
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0A4C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0A75; /* je: equal / zero */

loc_000A0A52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A58u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_000A0A58: ;
    ebp = eax;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0A68u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0A68: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0A73u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0A73: ;
    ebp = MEM32(edi);

loc_000A0A75: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0A85u); RECOMP_ABI_CALL(0x000A02A0u, sub_000A02A0); /* call 0x000A02A0 */

loc_000A0A85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A0B95;

loc_000A0B95: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0A8D
 * Original: 0x000A0A8D - 0x000A0BD0 (323 bytes, 45 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0A8D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0A8D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0ABE; /* je: equal / zero */

loc_000A0A91: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0AA3u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0AA3: ;
    ebx = MEM32(esi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0AB2u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0AB2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0ABBu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0ABB: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A0ABE: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0AD0u); RECOMP_ABI_CALL(0x0009E900u, sub_0009E900); /* call 0x0009E900 */

loc_000A0AD0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A0B95;

loc_000A0B95: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0AD8
 * Original: 0x000A0AD8 - 0x000A0BD0 (248 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0AD8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0AD8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0B21; /* je: equal / zero */

loc_000A0ADD: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x000A0AECu); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0AEC: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x000A0B05u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B05: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x000A0B18u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0B18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0B21u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0B21: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A0B2Eu); RECOMP_ABI_CALL(0x0009EA00u, sub_0009EA00); /* call 0x0009EA00 */

loc_000A0B2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000A0B95;

loc_000A0B95: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0B36
 * Original: 0x000A0B36 - 0x000A0BD0 (154 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0B36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0B36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0B7F; /* je: equal / zero */

loc_000A0B3B: ;
    edx = 0x302;
    ecx = 0x40344;
    PUSH32(esp, 0x000A0B4Au); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B4A: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x180CA8) = 0x302;
    PUSH32(esp, 0x000A0B63u); RECOMP_ABI_CALL(0x00160D00u, sub_00160D00); /* call 0x00160D00 */

loc_000A0B63: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x180CAC) = 0x303;
    PUSH32(esp, 0x000A0B76u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0B76: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0B7Fu); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0B7F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0B8Cu); RECOMP_ABI_CALL(0x0009EBE0u, sub_0009EBE0); /* call 0x0009EBE0 */

loc_000A0B8C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0B8F
 * Original: 0x000A0B8F - 0x000A0B95 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0B8F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0B8F: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_000A0B95(); return; /* fallthrough 0x000A0B95 */

}

/**
 * sub_000A0B95
 * Original: 0x000A0B95 - 0x000A0BAE (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0B95(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0B95: ;
    eax = MEM32(esp + 0x20);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = ZX8(MEM8(esi));
    MEM32(esp + 0x20) = eax;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0750(); return; } /* jne: not equal / not zero */

loc_000A0BAA: ;
    eax = MEM32(esp + 0x24);

    g_seh_ebp = ebp; sub_000A0BAE(); return; /* fallthrough 0x000A0BAE */

}

/**
 * sub_000A0BAE
 * Original: 0x000A0BAE - 0x000A0BD0 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0BAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0BAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930FD8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930FD8 (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_000A0740(); return; } /* jge: greater or equal (signed >=) */

loc_000A0BC0: ;
    PUSH32(esp, 0x000A0BC5u); RECOMP_ABI_CALL(0x0009FA90u, sub_0009FA90); /* call 0x0009FA90 */

loc_000A0BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A0BD0
 * Original: 0x000A0BD0 - 0x000A0BDC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0BD0: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x000A0BD7u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A0BD4u); } /* indirect call */
    }

loc_000A0BD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000A0B8F(); return; /* tail jmp 0x000A0B8F */

}

/**
 * sub_000A0BDC
 * Original: 0x000A0BDC - 0x000A0DB7 (475 bytes, 118 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0BDC(void)
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

loc_000A0BDC: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0BEEu); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0BEE: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0BFCu); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A0BFC: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A0C07u); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A0C07: ;
    SET_LO8(eax, MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0C1F; /* je: equal / zero */

loc_000A0C0E: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 5;

loc_000A0C1F: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1A);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    MEM32(esp + 0x10) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x10) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x60) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2EF280)); /* fadd dword ptr [0x2ef280] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x48) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x1C);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x8C) = eax;
    SET_LO16(eax, MEM16(esi + 0x24));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0CE5; /* jne: not equal / not zero */

loc_000A0CCD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000A0CE0u); RECOMP_ABI_CALL(0x0009D870u, sub_0009D870); /* call 0x0009D870 */

loc_000A0CE0: ;
    goto loc_000A0D86;

loc_000A0CE5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0D6D; /* jne: not equal / not zero */

loc_000A0CEF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1A);
    MEM32(esp + 0x10) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280364)); /* fmul dword ptr [0x280364] */
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x98) = edx;
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280360)); /* fmul dword ptr [0x280360] */
    MEMF(esp + 0x40) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x98)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280364)); /* fmul dword ptr [0x280364] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x58);
    MEM32(esp + 0x90) = eax;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280360)); /* fmul dword ptr [0x280360] */
    MEMF(esp + 0x78) = (float)fp_top(); /* fst */
    MEMF(esp + 0x94) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000A0D86;

loc_000A0D6D: ;
    eax = MEM32(esi + 4);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A0D83u); RECOMP_ABI_CALL(0x0009F540u, sub_0009F540); /* call 0x0009F540 */

loc_000A0D83: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0D86: ;
    PUSH32(esp, 0x1C);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000A0D96u); RECOMP_ABI_CALL(0x00166270u, sub_00166270); /* call 0x00166270 */

loc_000A0D96: ;
    SET_LO8(eax, MEM8(esi + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A0B8F(); return; } /* je: equal / zero */

loc_000A0DA1: ;
    MEM32(0x1809A8) = MEM32(0x1809A8) | 1;
    _fa = (uint32_t)(MEM32(0x1809A8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x1809C0) = 2;
    g_seh_ebp = ebp; sub_000A0B8F(); return; /* tail jmp 0x000A0B8F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0DB7
 * Original: 0x000A0DB7 - 0x000A0E52 (155 bytes, 39 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0DB7(void)
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

loc_000A0DB7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 4);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    ecx = 0x935A58;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0x24) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0);
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x30) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28035C)); /* fmul dword ptr [0x28035c] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A0E1Fu); RECOMP_ABI_CALL(0x0009F970u, sub_0009F970); /* call 0x0009F970 */

loc_000A0E1F: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    ecx = esi + 0xC;
    PUSH32(esp, ecx);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x935A58);
    MEM32(0x935A68) = eax;
    MEM32(0x935A8C) = eax;
    MEM32(0x935AB0) = eax;
    MEM32(0x935AD4) = eax;
    PUSH32(esp, 0x000A0E4Au); RECOMP_ABI_CALL(0x0009E6A0u, sub_0009E6A0); /* call 0x0009E6A0 */

loc_000A0E4A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000A0B8F(); return; /* tail jmp 0x000A0B8F */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A0E52
 * Original: 0x000A0E52 - 0x000A0E76 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0E52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A0E52: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A0E6E; /* je: equal / zero */

loc_000A0E59: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A0E68u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A0E68: ;
    ebx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A0E6E: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_000A0B95(); return; /* tail jmp 0x000A0B95 */

}

/**
 * sub_000A0FC0
 * Original: 0x000A0FC0 - 0x000A1015 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A0FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A0FC0: ;
    ecx = ZX8(MEM8(0x935610));
    PUSH32(esp, esi);
    esi = MEM32(0x93560C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax >> 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = ecx + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A0FF5; /* ja: above (unsigned >) */

loc_000A0FF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A0FFA; /* jne: not equal / not zero */

loc_000A0FF5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A0FFA: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1003u); RECOMP_ABI_CALL(0x0009F1B0u, sub_0009F1B0); /* call 0x0009F1B0 */

loc_000A1003: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A100Fu); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A100F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1020
 * Original: 0x000A1020 - 0x000A105C (60 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1020: ;
    PUSH32(esp, esi);
    esi = MEM32(0x93560C);
    eax = esi + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1035; /* ja: above (unsigned >) */

loc_000A1031: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1039; /* jne: not equal / not zero */

loc_000A1035: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A1039: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A104Au); RECOMP_ABI_CALL(0x0009C780u, sub_0009C780); /* call 0x0009C780 */

loc_000A104A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x10));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1056u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A1056: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1060
 * Original: 0x000A1060 - 0x000A1126 (198 bytes, 52 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1060: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x94);
    ecx = MEM32(esp + 0x90);
    PUSH32(esp, esi);
    esi = MEM32(0x935088);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x74) = 0x3F800000;
    MEM32(esp + 0x90) = 0x3F800000;
    PUSH32(esp, 0x000A10CEu); RECOMP_ABI_CALL(0x0009C780u, sub_0009C780); /* call 0x0009C780 */

loc_000A10CE: ;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A10D8u); RECOMP_ABI_CALL(0x0009EF60u, sub_0009EF60); /* call 0x0009EF60 */

loc_000A10D8: ;
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A10E0u); RECOMP_ABI_CALL(0x0009BA50u, sub_0009BA50); /* call 0x0009BA50 */

loc_000A10E0: ;
    edx = MEM32(esp + 0x28);
    edi = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A10F2u); RECOMP_ABI_CALL(0x0009CB70u, sub_0009CB70); /* call 0x0009CB70 */

loc_000A10F2: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A1100u); RECOMP_ABI_CALL(0x00164E20u, sub_00164E20); /* call 0x00164E20 */

loc_000A1100: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A110Au); RECOMP_ABI_CALL(0x00164C40u, sub_00164C40); /* call 0x00164C40 */

loc_000A110A: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A111Au); RECOMP_ABI_CALL(0x000A02A0u, sub_000A02A0); /* call 0x000A02A0 */

loc_000A111A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1130
 * Original: 0x000A1130 - 0x000A116D (61 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1130: ;
    eax = MEM32(0x93560C);
    ecx = eax + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1144; /* ja: above (unsigned >) */

loc_000A1140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1147; /* jne: not equal / not zero */

loc_000A1144: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000A1147: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM8(eax) = 7;
    MEM16(eax + 2) = 0xC;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x000A1169u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A1169: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1170
 * Original: 0x000A1170 - 0x000A11F6 (134 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1170: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1183; /* jne: not equal / not zero */

loc_000A117F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A1183: ;
    ecx = ZX8(MEM8(0x935610));
    eax = eax >> 0x1A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(0x93560C);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A11B1; /* ja: above (unsigned >) */

loc_000A11AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A11B6; /* jne: not equal / not zero */

loc_000A11B1: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000A11B6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x930DAC);
    PUSH32(esp, 0x000A11C1u); RECOMP_ABI_CALL(0x0009EF90u, sub_0009EF90); /* call 0x0009EF90 */

loc_000A11C1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x930DAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A11CEu); RECOMP_ABI_CALL(0x0009F1B0u, sub_0009F1B0); /* call 0x0009F1B0 */

loc_000A11CE: ;
    SET_LO8(eax, MEM8(0x935852));
    SET_LO8(ecx, MEM8(0x935851));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 0x10));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A11F0u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A11F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A1200
 * Original: 0x000A1200 - 0x000A122E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1200: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x10), 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A122D; /* je: equal / zero */

loc_000A120D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x930DAC);
    PUSH32(esp, 0x000A1218u); RECOMP_ABI_CALL(0x0009EF90u, sub_0009EF90); /* call 0x0009EF90 */

loc_000A1218: ;
    eax = MEM32(0x9357F4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x930DAC);
    PUSH32(esp, 0x000A122Au); RECOMP_ABI_CALL(0x0009FC10u, sub_0009FC10); /* call 0x0009FC10 */

loc_000A122A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A122D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A1230
 * Original: 0x000A1230 - 0x000A1294 (100 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1230: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) + LO16(ebx);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xE) = MEM16(esi + 0xE) + LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    MEM8(esi + 0x1E) = LO8(eax);
    MEM8(esi + 0x1D) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(eax);
    _fa = (uint32_t)(MEM8(esp + 0x20)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x20), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A127B; /* jne: not equal / not zero */

loc_000A125D: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1268u); RECOMP_ABI_CALL(0x000A1020u, sub_000A1020); /* call 0x000A1020 */

loc_000A1268: ;
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) - LO16(ebx);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xE) = MEM16(esi + 0xE) - LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A127B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A1281u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A1281: ;
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) - LO16(ebx);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xE) = MEM16(esi + 0xE) - LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A12A0
 * Original: 0x000A12A0 - 0x000A12E5 (69 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A12A0(void)
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

loc_000A12A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A12B0u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000A12B0: ;
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A12DF; /* jne: not equal / not zero */

loc_000A12C6: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A12DF; /* jne: not equal / not zero */

loc_000A12D6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A12DF: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A12F0
 * Original: 0x000A12F0 - 0x000A13A6 (182 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A12F0(void)
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

loc_000A12F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF61) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF61 (16-bit) */
    MEM32(esp) = 0x3F800000;
    if (CMP_B(_fa, _fb)) goto loc_000A1312; /* jb: below (unsigned <) */

loc_000A1305: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF9F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF9F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1312; /* ja: above (unsigned >) */

loc_000A130B: ;
    MEM32(esp) = 0x3F000000;

loc_000A1312: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(ebx + 0x13));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000A1335; /* jne: not equal / not zero */

loc_000A1324: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A1335; /* jae: above or equal (unsigned >=) */

loc_000A132A: ;
    edx = ZX16(LO16(eax));
    SET_LO16(eax, MEM16(edx * 2 + 0x2EF2C0));

loc_000A1335: ;
    esi = MEM32(esp + 0x14);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1343u); RECOMP_ABI_CALL(0x0009CF50u, sub_0009CF50); /* call 0x0009CF50 */

loc_000A1343: ;
    fp_push(MEMF(esi)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A134Du); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A134D: ;
    MEM16(esi + 0x30) = LO16(eax);
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x10), 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A138F; /* je: equal / zero */

loc_000A135A: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A1365u); RECOMP_ABI_CALL(0x000A1060u, sub_000A1060); /* call 0x000A1060 */

loc_000A1365: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;

loc_000A136D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x38)); /* fmul dword ptr [esi + 0x38] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(0x930F08)); /* fiadd dword ptr [0x930f08] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A138F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A139Au); RECOMP_ABI_CALL(0x000A1020u, sub_000A1020); /* call 0x000A1020 */

loc_000A139A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A136D; /* jne: not equal / not zero */

loc_000A13A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A13B0
 * Original: 0x000A13B0 - 0x000A13BE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A13B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A13B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A13BAu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A13BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A13C0
 * Original: 0x000A13C0 - 0x000A16FC (828 bytes, 240 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A13C0(void)
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

loc_000A13C0: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_000A13D9; /* je: equal / zero */

loc_000A13D0: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A13EC; /* je: equal / zero */

loc_000A13D9: ;
    edx = MEM32(esp + 0x18);
    eax = edx;
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x104;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A1407; /* je: equal / zero */

loc_000A13E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A13FD; /* je: equal / zero */

loc_000A13E9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A13F3; /* je: equal / zero */

loc_000A13EC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A13F3: ;
    MEM32(esp + 8) = 0x18;
    goto loc_000A140F;

loc_000A13FD: ;
    MEM32(esp + 8) = 0x20;
    goto loc_000A140F;

loc_000A1407: ;
    MEM32(esp + 8) = 0x14;

loc_000A140F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x93560C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1427; /* ja: above (unsigned >) */

loc_000A1423: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A142F; /* jne: not equal / not zero */

loc_000A1427: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A142F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO16(eax, MEM16(edi + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = esi + 4;
    MEM16(ebp) = LO16(eax);
    SET_LO16(ebx, MEM16(edi + 6));
    eax = esi + 6;
    MEM16(eax) = LO16(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000A15BE; /* je: equal / zero */

loc_000A144E: ;
    ecx = MEM32(0x93583C);
    eax = MEM32(0x935838);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(0x935854) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x93583E));
    _fb = (uint32_t)(MEM16(0x93583A)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + MEM16(0x93583A));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x106 (32-bit) */
    MEM16(0x935856) = LO16(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000A14F9; /* jne: not equal / not zero */

loc_000A147F: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xC), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A14F9; /* je: equal / zero */

loc_000A1488: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    edx = (uint32_t)(int32_t)SMEM16(edi + 8);
    ebx = ebx << 5;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = ebx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935848)); /* fmul dword ptr [0x935848] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A14C4u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A14C4: ;
    MEM16(esi + 8) = LO16(eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x93584C)); /* fmul dword ptr [0x93584c] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A14F5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A14F5: ;
    fp_pop(); /* fstp st(0) */
    goto loc_000A154F;

loc_000A14F9: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 8);
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935848)); /* fmul dword ptr [0x935848] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A1522u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1522: ;
    MEM16(esi + 8) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0xA);
    MEM32(esp + 0x18) = edx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x93584C)); /* fmul dword ptr [0x93584c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A154Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A154F: ;
    MEM16(esi + 0xA) = LO16(eax);
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ebx = edi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A1569u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A1569: ;
    MEM32(esi + 0x10) = eax;
    SET_LO8(edx, MEM8(0x935852));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, MEM8(0x935851));
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edi + 0xC));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xE), 1 (8-bit) */
    MEM8(esp + 0x18) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_000A159E; /* je: equal / zero */

loc_000A1593: ;
    SET_LO8(eax, MEM8(0x935850));
    MEM8(esp + 0x10) = LO8(eax);
    goto loc_000A15A5;

loc_000A159E: ;
    SET_LO8(ecx, MEM8(edi + 0xD));
    MEM8(esp + 0x10) = LO8(ecx);

loc_000A15A5: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x935838);
    PUSH32(esp, edx);
    eax = esi + 6;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A15B9u); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_000A15B9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A15F4;

loc_000A15BE: ;
    SET_LO16(ecx, MEM16(edi + 8));
    MEM16(esi + 8) = LO16(ecx);
    SET_LO16(edx, MEM16(edi + 0xA));
    MEM16(esi + 0xA) = LO16(edx);
    ecx = MEM32(edi + 0x10);
    ebx = edi + 0x10;
    MEM32(esi + 0x10) = ecx;
    SET_LO8(edx, MEM8(edi + 0xD));
    SET_LO8(ecx, MEM8(edi + 0xC));
    MEM8(esp + 0x10) = LO8(edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0x000A15F1u); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_000A15F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A15F4: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), 0x106 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A160A; /* je: equal / zero */

loc_000A15FE: ;
    eax = MEM32(edi + 0xC);
    eax = eax >> 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;

loc_000A160A: ;
    edx = MEM32(esp + 0x10);
    SET_LO16(ecx, MEM16(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    MEM16(esi + 2) = LO16(ecx);
    PUSH32(esp, 0x000A161Eu); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_000A161E: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x104) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x104 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1634; /* jne: not equal / not zero */

loc_000A162C: ;
    MEM8(esi) = 2;
    goto loc_000A16E6;

loc_000A1634: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x105) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x105 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A16CC; /* jne: not equal / not zero */

loc_000A163F: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A16B0; /* je: equal / zero */

loc_000A1647: ;
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A165Au); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A165A: ;
    MEM32(esi + 0x10) = eax;
    edx = MEM32(0x935844);
    eax = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1673u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A1673: ;
    MEM32(esi + 0x14) = eax;
    edx = MEM32(0x935844);
    eax = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A168Cu); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A168C: ;
    MEM32(esi + 0x18) = eax;
    edx = MEM32(0x935844);
    eax = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A16A5u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A16A5: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    MEM8(esi) = 3;
    goto loc_000A16E6;

loc_000A16B0: ;
    ecx = MEM32(ebx);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(edi + 0x14);
    MEM32(esi + 0x14) = edx;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = ecx;
    MEM8(esi) = 3;
    goto loc_000A16E6;

loc_000A16CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x106 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A16E6; /* jne: not equal / not zero */

loc_000A16D3: ;
    SET_LO16(edx, MEM16(edi + 0x14));
    MEM16(esi + 0x14) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x16));
    MEM16(esi + 0x16) = LO16(eax);
    MEM8(esi) = 4;

loc_000A16E6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A16F1u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A16F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
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
 * sub_000A1700
 * Original: 0x000A1700 - 0x000A1740 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1700: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x93560C);
    eax = esi + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1716; /* ja: above (unsigned >) */

loc_000A1712: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A171B; /* jne: not equal / not zero */

loc_000A1716: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A171B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A172Bu); RECOMP_ABI_CALL(0x0009E4E0u, sub_0009E4E0); /* call 0x0009E4E0 */

loc_000A172B: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A173Au); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A173A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A175B
 * Original: 0x000A175B - 0x000A18DE (387 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A175B(void)
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

loc_000A175B: ;
    PUSH32(esp, ebx);
    MEM8(edi) = 8;
    MEM16(edi + 2) = 0x28;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    MEM32(edi + 4) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edi + 8) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0xC) = eax;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 1 (32-bit) */
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x10) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A1865; /* jne: not equal / not zero */

loc_000A178C: ;
    SET_LO8(eax, MEM8(esi + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A179F; /* je: equal / zero */

loc_000A1793: ;
    SET_LO8(edx, MEM8(0x935850));
    MEM8(esp + 0xC) = LO8(edx);
    goto loc_000A17A6;

loc_000A179F: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    MEM8(esp + 0xC) = LO8(eax);

loc_000A17A6: ;
    SET_LO16(ecx, MEM16(esi + 8));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0x935838);
    eax = edi + 0x16;
    ebx = edi + 0x14;
    PUSH32(esp, ebp);
    MEM16(ebx) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0xA));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM16(eax) = LO16(edx);
    PUSH32(esp, 0x000A17CCu); RECOMP_ABI_CALL(0x0009DCE0u, sub_0009DCE0); /* call 0x0009DCE0 */

loc_000A17CC: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935848)); /* fmul dword ptr [0x935848] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A17F5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A17F5: ;
    MEM16(edi + 0x18) = LO16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    MEM32(esp + 0x20) = ecx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x93584C)); /* fmul dword ptr [0x93584c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A1822u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1822: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    MEM16(edi + 0x1A) = LO16(eax);
    PUSH32(esp, 0x000A182Du); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_000A182D: ;
    edx = MEM32(0x935844);
    eax = MEM32(0x935840);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1843u); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A1843: ;
    MEM32(edi + 0x1C) = eax;
    SET_LO8(eax, MEM8(0x935852));
    SET_LO8(edx, MEM8(0x935851));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(esi + 0x20));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, ebp);
    goto loc_000A18AF;

loc_000A1865: ;
    SET_LO16(eax, MEM16(esi + 8));
    MEM16(edi + 0x14) = LO16(eax);
    SET_LO16(ecx, MEM16(esi + 0xA));
    ebx = edi + 0x14;
    eax = edi + 0x16;
    MEM16(eax) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0xC));
    MEM16(edi + 0x18) = LO16(edx);
    SET_LO16(ecx, MEM16(esi + 0xE));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi + 0x1A) = LO16(ecx);
    SET_LO8(edx, MEM8(esi + 0x21));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A1897u); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_000A1897: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x21));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A18A3u); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_000A18A3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x1C) = ecx;
    SET_LO8(edx, MEM8(esi + 0x20));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A18AF: ;
    eax = MEM32(esi + 0x14);
    MEM32(edi + 0x20) = eax;
    SET_LO16(ecx, ZX8(MEM8(esi + 0x22)));
    MEM8(esp + 0xC) = LO8(edx);
    eax = MEM32(esp + 0xC);
    MEM16(edi + 0x24) = LO16(ecx);
    SET_LO16(edx, ZX8(MEM8(esi + 0x24)));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM16(edi + 0x26) = LO16(edx);
    PUSH32(esp, 0x000A18D6u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A18D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A18E0
 * Original: 0x000A18E0 - 0x000A193E (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A18E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A18E0: ;
    eax = MEM32(0x93560C);
    ecx = eax + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A18F4; /* ja: above (unsigned >) */

loc_000A18F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A18F7; /* jne: not equal / not zero */

loc_000A18F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000A18F7: ;
    ecx = MEM32(esp + 4);
    MEM8(eax) = 9;
    MEM16(eax + 2) = 0x20;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 8);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000A0660(); return; /* tail jmp 0x000A0660 */

}

/**
 * sub_000A1940
 * Original: 0x000A1940 - 0x000A19C8 (136 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1940: ;
    eax = MEM32(0x93560C);
    ecx = eax + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A1954; /* ja: above (unsigned >) */

loc_000A1950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1957; /* jne: not equal / not zero */

loc_000A1954: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000A1957: ;
    ecx = MEM32(esp + 4);
    MEM8(eax) = 0xA;
    MEM16(eax + 2) = 0x28;
    SET_LO16(edx, MEM16(ecx));
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 4));
    MEM16(eax + 6) = LO16(edx);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    SET_LO16(edx, MEM16(ecx + 0x18));
    MEM16(eax + 0x18) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x1A));
    MEM16(eax + 0x1A) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x1C));
    MEM16(eax + 0x1C) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x1E));
    MEM16(eax + 0x1E) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x20));
    MEM16(eax + 0x20) = LO16(edx);
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = edx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A19C4u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A19C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A19D0
 * Original: 0x000A19D0 - 0x000A1B1E (334 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A19D0(void)
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

loc_000A19D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(0x93560C);
    eax = edi + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x930D88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x930D88 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A19E6; /* ja: above (unsigned >) */

loc_000A19E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A19EB; /* jne: not equal / not zero */

loc_000A19E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A19EB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1A33; /* jne: not equal / not zero */

loc_000A19F8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A1A1Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1A1E: ;
    MEM16(edi + 8) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    goto loc_000A1A8E;

loc_000A1A33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1A39u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A1A39: ;
    ebx = eax;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A1A6Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1A6F: ;
    MEM16(edi + 8) = LO16(eax);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */

loc_000A1A8E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A1AA5u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1AA5: ;
    MEM16(edi + 0xA) = LO16(eax);
    MEM8(edi) = 0xB;
    MEM16(edi + 2) = 0x18;
    SET_LO8(eax, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1ABD; /* je: equal / zero */

loc_000A1AB9: ;
    eax = MEM32(esi);
    goto loc_000A1AC0;

loc_000A1ABD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000A1AC0: ;
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ecx;
    SET_LO16(edx, MEM16(esi + 4));
    MEM16(edi + 4) = LO16(edx);
    SET_LO16(ecx, MEM16(esi + 6));
    ebx = edi + 4;
    eax = edi + 6;
    MEM16(eax) = LO16(ecx);
    edx = MEM32(0x9357F0);
    MEM32(edi + 0x14) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x9357F0) = 0;
    SET_LO8(ecx, MEM8(esi + 0x11));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A1AFEu); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_000A1AFE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x11));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A1B0Au); RECOMP_ABI_CALL(0x0009DD80u, sub_0009DD80); /* call 0x0009DD80 */

loc_000A1B0A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A1B16u); RECOMP_ABI_CALL(0x000A0660u, sub_000A0660); /* call 0x000A0660 */

loc_000A1B16: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A1B20
 * Original: 0x000A1B20 - 0x000A1BC4 (164 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A1B20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(0x935AF8) = ecx;
    SET_LO16(edx, MEM16(eax + 0xC));
    SET_LO16(edx, LO16(edx) << 4);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(0x935AFC) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0xE));
    SET_LO16(ecx, LO16(ecx) << 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    MEM16(0x935AFE) = LO16(ecx);
    SET_LO8(edx, MEM8(eax + 0x10));
    MEM8(0x935B08) = LO8(edx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x10), 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1B6B; /* je: equal / zero */

loc_000A1B5D: ;
    SET_LO8(ecx, MEM8(0x935850));
    MEM8(0x935B09) = LO8(ecx);
    goto loc_000A1B74;

loc_000A1B6B: ;
    SET_LO8(edx, MEM8(eax + 0x11));
    MEM8(0x935B09) = LO8(edx);

loc_000A1B74: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    MEM8(0x935B0A) = LO8(ecx);
    edx = MEM32(eax + 0x14);
    MEM32(0x935B0C) = edx;
    eax = MEM32(eax + 0x18);
    PUSH32(esp, 0x935AF8);
    MEM32(0x935B10) = eax;
    PUSH32(esp, 0x000A1B98u); RECOMP_ABI_CALL(0x0009E5E0u, sub_0009E5E0); /* call 0x0009E5E0 */

loc_000A1B98: ;
    SET_LO8(eax, MEM8(0x935B09));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0x30);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(eax, LO8(eax) & LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, ~LO8(edx));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) & LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x935B09) = LO8(eax);
    MEM32(esp + 4) = 0x935AF8;
    g_seh_ebp = ebp; sub_000A19D0(); return; /* tail jmp 0x000A19D0 */

}

/**
 * sub_000A1BD0
 * Original: 0x000A1BD0 - 0x000A1BE5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1BD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1BE1u); RECOMP_ABI_CALL(0x0009FC10u, sub_0009FC10); /* call 0x0009FC10 */

loc_000A1BE1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1BF0
 * Original: 0x000A1BF0 - 0x000A1C05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1BF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1BF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x105);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A1C01u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_000A1C01: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1C10
 * Original: 0x000A1C10 - 0x000A1C25 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A1C10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A1C21u); RECOMP_ABI_CALL(0x000A1130u, sub_000A1130); /* call 0x000A1130 */

loc_000A1C21: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A1C30
 * Original: 0x000A1C30 - 0x000A24BE (2190 bytes, 538 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A1C30(void)
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

loc_000A1C30: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x935844);
    ecx = MEM32(0x935840);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(0x93504C) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    MEM32(0x935050) = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ecx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = eax + eax * 2;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = ebp * 4 + 0x923D68;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A24B5; /* je: equal / zero */

loc_000A1C76: ;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24B5; /* je: equal / zero */

loc_000A1C7F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A24B5; /* je: equal / zero */

loc_000A1C8B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1CE0; /* je: equal / zero */

loc_000A1C94: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x93505C);
    PUSH32(esp, 0x000A1C9Fu); RECOMP_ABI_CALL(0x0009F100u, sub_0009F100); /* call 0x0009F100 */

loc_000A1C9F: ;
    edx = (uint32_t)(int32_t)SMEM16(0x935068);
    eax = (uint32_t)(int32_t)SMEM16(0x93506A);
    ecx = MEM32(0x935070);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(0x935074);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(esp + 0x2C) = eax;
    MEM32(0x935054) = ecx;
    MEM32(0x935058) = edx;
    MEMF(0x935038) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    goto loc_000A1D54;

loc_000A1CE0: ;
    eax = MEM32(esi + 0xC);
    MEM32(0x935078) = eax;
    SET_LO8(ecx, MEM8(esi + 0x12));
    MEM8(0x93506C) = LO8(ecx);
    edx = MEM32(esi + 0x18);
    MEM32(0x935054) = edx;
    eax = MEM32(esi + 0x1C);
    MEM32(0x935058) = eax;
    SET_LO16(ecx, MEM16(esi + 8));
    MEM16(0x935068) = LO16(ecx);
    SET_LO16(edx, MEM16(esi + 0xA));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(0x93506A) = LO16(edx);
    SET_LO8(eax, MEM8(esi + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x93506A);
    PUSH32(esp, 0x935068);
    PUSH32(esp, 0x000A1D2Du); RECOMP_ABI_CALL(0x0009DE20u, sub_0009DE20); /* call 0x0009DE20 */

loc_000A1D2D: ;
    ecx = (uint32_t)(int32_t)SMEM16(0x935068);
    edx = (uint32_t)(int32_t)SMEM16(0x93506A);
    MEM32(esp + 0x38) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(esp + 0x2C) = edx;
    MEMF(0x935038) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */

loc_000A1D54: ;
    ecx = MEM32(ebp);
    MEMF(0x93503C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x10));
    MEM8(0x93506D) = LO8(eax);
    eax = MEM32(0x93506C);
    ecx = ecx << 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0xF00000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x93506C) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x13));
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x93507C) = edx;
    eax = MEM32(esi + 0x10);
    eax = eax >> 0x1D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(0x935087) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000A1DB1; /* je: equal / zero */

loc_000A1D9B: ;
    SET_LO8(eax, MEM8(0x923D80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1DB1; /* je: equal / zero */

loc_000A1DA4: ;
    PUSH32(esp, 0x000A1DA9u); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_000A1DA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    goto loc_000A1DB9;

loc_000A1DB1: ;
    eax = MEM32(esi + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000A1DB9: ;
    ecx = MEM32(0x93507C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(0x935084) = LO8(eax);
    PUSH32(esp, 0x000A1DCBu); RECOMP_ABI_CALL(0x0009CCF0u, sub_0009CCF0); /* call 0x0009CCF0 */

loc_000A1DCB: ;
    edx = MEM32(0x935038);
    eax = ZX16(LO16(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x34) = eax;
    MEM32(0x935048) = edx;
    MEM32(0x935040) = 0;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x935058)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEMF(0x935044) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 4);
    fp_push(MEMF(0x9357C8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    MEM32(0x935080) = ecx;
    edx = MEM32(esi + 0x10);
    edx = edx >> 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x935085) = LO8(edx);
    eax = MEM32(esi + 0x10);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x935086) = LO8(eax);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A1E50; /* jp: parity */

loc_000A1E3E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEM32(esp + 0x10) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(0x9357C8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A1E50: ;
    fp_push(MEMF(0x9357C8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x22C0D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x22c0d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A1EA6; /* jne: not equal / not zero */

loc_000A1E63: ;
    edx = MEM32(0x9357C8);
    eax = MEM32(0x935054);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x93507C);
    PUSH32(esp, 0x000A1E7Au); RECOMP_ABI_CALL(0x000A12A0u, sub_000A12A0); /* call 0x000A12A0 */

loc_000A1E7A: ;
    MEMF(0x935054) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000A1EA6; /* jns: not sign (positive) */

loc_000A1E8A: ;
    fp_push(MEMF(0x935054)); /* fld float */
    ecx = MEM32(0x935054);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    MEM32(0x935058) = ecx;
    MEMF(0x935044) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A1EA6: ;
    _fa = (uint32_t)(MEM8(0x93506D)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x93506D), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A1ECF; /* je: equal / zero */

loc_000A1EAF: ;
    edx = MEM32(0x935054);
    PUSH32(esp, edx);
    PUSH32(esp, 0x93507C);
    PUSH32(esp, 0x000A1EC0u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000A1EC0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x935040) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A1ECF: ;
    eax = MEM32(0x93506C);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xC (8-bit) */
    edx = 1;
    MEM32(esp + 0x2C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000A1F07; /* je: equal / zero */

loc_000A1EE2: ;
    ecx = MEM32(esi + 4);
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A1F07; /* je: equal / zero */

loc_000A1EED: ;
    /* nop */

loc_000A1EF0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1EF7; /* jne: not equal / not zero */

loc_000A1EF6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A1EF7: ;
    SET_LO16(eax, MEM16(ecx + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1EF0; /* jne: not equal / not zero */

loc_000A1F03: ;
    MEM32(esp + 0x2C) = edx;

loc_000A1F07: ;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(0x93506D));
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935044)); /* fmul dword ptr [0x935044] */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x935040);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x93503C);
    PUSH32(esp, 0x935038);
    PUSH32(esp, 0x000A1F33u); RECOMP_ABI_CALL(0x0009F8C0u, sub_0009F8C0); /* call 0x0009F8C0 */

loc_000A1F33: ;
    fp_push(MEMF(0x93503C)); /* fld float */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A1F41u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A1F41: ;
    edx = MEM32(ebp);
    MEM16(0x93506A) = LO16(eax);
    MEM8(0x93506D) = 0;
    eax = MEM32(0x93506C);
    eax = eax & 0xFCF0FFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xF00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x93506C) = eax;
    eax = MEM32(0x935078);
    edi = MEM32(esi + 4);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x1B) = 0;
    MEM8(esp + 0x19) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    if (TEST_Z(_fa, _fb)) goto loc_000A1FAF; /* je: equal / zero */

loc_000A1FA1: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 6);
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    goto loc_000A1FBB;

loc_000A1FAF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    MEM32(esp + 0x2C) = ecx;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */

loc_000A1FBB: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935054)); /* fmul dword ptr [0x935054] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24A1; /* je: equal / zero */

loc_000A1FD5: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x93507C);
    MEM8(esp + 0x24) = 0;
    MEM32(0x935080) = edi;
    PUSH32(esp, 0x000A1FF4u); RECOMP_ABI_CALL(0x0009EF20u, sub_0009EF20); /* call 0x0009EF20 */

loc_000A1FF4: ;
    fp_push(MEMF(0x935054)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    edx = (uint32_t)(int32_t)SMEM8(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(0x935070) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(0x935058)); /* fld float */
    edi = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    MEM32(0x935078) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x935074) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x935038)); /* fadd dword ptr [0x935038] */
    MEMF(0x935038) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(edx, MEM16(edi));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24A1; /* je: equal / zero */

loc_000A204F: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x20 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A206B; /* jne: not equal / not zero */

loc_000A2055: ;
    SET_LO8(eax, MEM8(esi + 0x13));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A206B; /* je: equal / zero */

loc_000A205E: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x2C)); /* fmul dword ptr [esp + 0x2c] */
    goto loc_000A2488;

loc_000A206B: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xA (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A20DE; /* jne: not equal / not zero */

loc_000A2071: ;
    eax = MEM32(0x935054);
    ecx = MEM32(0x935048);
    PUSH32(esp, eax);
    edx = edi + 2;
    PUSH32(esp, 0x93507C);
    MEM32(0x935038) = ecx;
    MEM32(0x935080) = edx;
    PUSH32(esp, 0x000A2096u); RECOMP_ABI_CALL(0x000A0430u, sub_000A0430); /* call 0x000A0430 */

loc_000A2096: ;
    edx = MEM32(0x935044);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(0x935040) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = MEM32(0x935040);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x935B24);
    PUSH32(esp, 0x935038);
    PUSH32(esp, 0x000A20C4u); RECOMP_ABI_CALL(0x0009F8C0u, sub_0009F8C0); /* call 0x0009F8C0 */

loc_000A20C4: ;
    fp_push(MEMF(0x935044)); /* fld float */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A20D2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A20D2: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_000A2494;

loc_000A20DE: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x17F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x17F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A20F5; /* jae: above or equal (unsigned >=) */

loc_000A20E5: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2113; /* jne: not equal / not zero */

loc_000A20F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x935038);
    PUSH32(esp, 0x000A2101u); RECOMP_ABI_CALL(0x000A12F0u, sub_000A12F0); /* call 0x000A12F0 */

loc_000A2101: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24A1; /* je: equal / zero */

loc_000A210E: ;
    goto loc_000A2494;

loc_000A2113: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2149; /* je: equal / zero */

loc_000A2118: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A211Fu); RECOMP_ABI_CALL(0x0009CEC0u, sub_0009CEC0); /* call 0x0009CEC0 */

loc_000A211F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2149; /* je: equal / zero */

loc_000A2126: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x13));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx * 4 + 0x2EF298);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2149; /* je: equal / zero */

loc_000A2139: ;
    edx = ZX8(MEM8(esp + 0x19));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A2147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2145u); } /* indirect call */
    }

loc_000A2147: ;
    goto loc_000A2164;

loc_000A2149: ;
    eax = ZX8(MEM8(esp + 0x19));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x13));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edx * 4 + 0x2EF290); PUSH32(esp, 0x000A2164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A215Du); } /* indirect call */
    }

loc_000A2164: ;
    fp_push(MEMF(0x935038)); /* fld float */
    ebp = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x935060) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A218Cu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A218C: ;
    PUSH32(esp, ebp);
    MEM16(0x935068) = LO16(eax);
    PUSH32(esp, 0x000A2198u); RECOMP_ABI_CALL(0x0009EF40u, sub_0009EF40); /* call 0x0009EF40 */

loc_000A2198: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A22A9; /* je: equal / zero */

loc_000A21A3: ;
    fp_push(MEMF(0x935074)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280370)); /* fmul dword ptr [0x280370] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A21C6u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A21C6: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000A22A9; /* jns: not sign (positive) */

loc_000A21D8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A21DEu); RECOMP_ABI_CALL(0x0009A9D0u, sub_0009A9D0); /* call 0x0009A9D0 */

loc_000A21DE: ;
    edx = MEM32(0x935060);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935070)); /* fmul dword ptr [0x935070] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28036C)); /* fmul dword ptr [0x28036c] */
    MEMF(0x935B20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A2207u); RECOMP_ABI_CALL(0x00086070u, sub_00086070); /* call 0x00086070 */

loc_000A2207: ;
    ecx = MEM32(0x935074);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    eax = MEM32(0x935070);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x935B18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935074)); /* fmul dword ptr [0x935074] */
    MEM32(0x935B1C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x28036C)); /* fmul dword ptr [0x28036c] */
    MEMF(0x935B14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x935070)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C248)); /* fmul dword ptr [0x22c248] */
    MEMF(0x935070) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x935074)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C248)); /* fmul dword ptr [0x22c248] */
    MEMF(0x935074) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x935B20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A227Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A227E: ;
    fp_push(MEMF(0x935B14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x935068) = MEM16(0x935068) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x935068)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A22A2u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A22A2: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A22A9: ;
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x17F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x17F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A22BD; /* jae: above or equal (unsigned >=) */

loc_000A22B2: ;
    SET_LO8(edx, MEM8(esi + 0x13));
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A22C7; /* jne: not equal / not zero */

loc_000A22BD: ;
    _fb = (uint32_t)(0xFFFFFFF6u) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + 0xFFFFFFF6u;
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_000A22FE;

loc_000A22C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A22CDu); RECOMP_ABI_CALL(0x0009CF00u, sub_0009CF00); /* call 0x0009CF00 */

loc_000A22CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A22FE; /* je: equal / zero */

loc_000A22D4: ;
    fp_push(MEMF(0x935074)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280368)); /* fmul dword ptr [0x280368] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A22F7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A22F7: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A22FE: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A231D; /* je: equal / zero */

loc_000A2307: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93505C);
    PUSH32(esp, 0x000A2313u); RECOMP_ABI_CALL(0x000A1BD0u, sub_000A1BD0); /* call 0x000A1BD0 */

loc_000A2313: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 1;
    goto loc_000A2334;

loc_000A231D: ;
    PUSH32(esp, 0x93505C);
    PUSH32(esp, 0x000A2327u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A2327: ;
    ebx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A24A1; /* je: equal / zero */

loc_000A2334: ;
    ebp = MEM32(0x935060);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A2340u); RECOMP_ABI_CALL(0x0009EF40u, sub_0009EF40); /* call 0x0009EF40 */

loc_000A2340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A23DA; /* je: equal / zero */

loc_000A234B: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_000A23B0; /* jns: not sign (positive) */

loc_000A2352: ;
    fp_push(MEMF(0x935B20)); /* fld float */
    eax = MEM32(0x935B18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    ecx = MEM32(0x935B1C);
    MEM32(0x935070) = eax;
    MEM32(0x935074) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x000A2385u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A2385: ;
    fp_push(MEMF(0x935B14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x935068) = MEM16(0x935068) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x935068)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x000A23A9u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A23A9: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A23B0: ;
    fp_push(MEMF(0x935074)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280370)); /* fmul dword ptr [0x280370] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x000A23D3u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A23D3: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A23DA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A23E0u); RECOMP_ABI_CALL(0x0009A9D0u, sub_0009A9D0); /* call 0x0009A9D0 */

loc_000A23E0: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935070)); /* fmul dword ptr [0x935070] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(0x930F08)); /* fiadd dword ptr [0x930f08] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x935038)); /* fadd dword ptr [0x935038] */
    MEMF(0x935038) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO16(eax, MEM16(edi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x17F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x17F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A241D; /* jae: above or equal (unsigned >=) */

loc_000A2412: ;
    SET_LO8(edx, MEM8(esi + 0x13));
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2427; /* jne: not equal / not zero */

loc_000A241D: ;
    _fb = (uint32_t)(0xA) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + 0xA;
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    goto loc_000A245E;

loc_000A2427: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A242Du); RECOMP_ABI_CALL(0x0009CF00u, sub_0009CF00); /* call 0x0009CF00 */

loc_000A242D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A245E; /* je: equal / zero */

loc_000A2434: ;
    fp_push(MEMF(0x935074)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x280368)); /* fmul dword ptr [0x280368] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x231FAC)); /* fmul dword ptr [0x231fac] */
    PUSH32(esp, 0x000A2457u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A2457: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(0x93506A) = MEM16(0x93506A) + LO16(eax);
    _fa = (uint32_t)(MEM16(0x93506A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */

loc_000A245E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2494; /* je: equal / zero */

loc_000A2466: ;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A2473u); RECOMP_ABI_CALL(0x0009C8D0u, sub_0009C8D0); /* call 0x0009C8D0 */

loc_000A2473: ;
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x935070)); /* fmul dword ptr [0x935070] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */

loc_000A2488: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x935038)); /* fadd dword ptr [0x935038] */
    MEMF(0x935038) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A2494: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A1FD5; /* jne: not equal / not zero */

loc_000A24A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(0x9357C8) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A24B5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
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
 * sub_000A24C0
 * Original: 0x000A24C0 - 0x000A2658 (408 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A24C0(void)
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

loc_000A24C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x1C);
    MEM32(0x935B4C) = eax;
    MEM32(0x935B48) = 0x935B4C;
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) + LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xE) = MEM16(esi + 0xE) + LO16(ebx);
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    PUSH32(esp, esi);
    MEM8(esi + 0x1E) = 0;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1C) = 0;
    PUSH32(esp, 0x000A24FFu); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A24FF: ;
    _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) - LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    MEM16(esi + 0xE) = MEM16(esi + 0xE) - LO16(ebx);
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000A25BF; /* je: equal / zero */

loc_000A2515: ;
    SET_LO8(eax, MEM8(0x930F04));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A257E; /* je: equal / zero */

loc_000A251E: ;
    ecx = MEM32(esi + 4);
    MEM32(0x935B2C) = ecx;
    SET_LO16(edx, MEM16(esi + 0xC));
    MEM16(0x935B30) = LO16(edx);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(0x935B32) = LO16(eax);
    ecx = MEM32(esi + 0x1C);
    MEM32(0x935B38) = ecx;
    SET_LO8(edx, MEM8(esi + 0x10));
    MEM8(0x935B3C) = LO8(edx);
    MEM8(0x935B3D) = 0;
    MEM8(0x935B3E) = 1;
    eax = MEM32(esi + 0x14);
    MEM32(0x935B40) = eax;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x935B2C);
    MEM32(0x935B44) = ecx;
    PUSH32(esp, 0x000A2577u); RECOMP_ABI_CALL(0x000A19D0u, sub_000A19D0); /* call 0x000A19D0 */

loc_000A2577: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A25BF; /* je: equal / zero */

loc_000A257E: ;
    edx = ZX8(MEM8(esi + 0x1F));
    MEM32(esp + 0x14) = edx;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x1E) = 0x80;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM8(esi + 0x1D) = LO8(eax);
    MEM8(esi + 0x1C) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C194)); /* fmul dword ptr [0x22c194] */
    PUSH32(esp, 0x000A25A7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A25A7: ;
    PUSH32(esp, esi);
    MEM8(esi + 0x1F) = LO8(eax);
    PUSH32(esp, 0x000A25B0u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A25B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A25C6; /* jne: not equal / not zero */

loc_000A25B7: ;
    eax = MEM32(0x935B4C);
    MEM32(esi + 0x1C) = eax;

loc_000A25BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A25C6: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(0x935B48);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x935B28) = ecx;
    edx = ZX8(MEM8(eax + 3));
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239DBC)); /* fmul dword ptr [0x239dbc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A25FBu); RECOMP_ABI_CALL(0x0009DE90u, sub_0009DE90); /* call 0x0009DE90 */

loc_000A25FB: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(esi + 0x10);
    eax = eax & 0xFF5FFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x500000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x000A2617u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A2617: ;
    edi = eax;
    ebp = MEM32(edi + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(edi + 8) = ebp;
    PUSH32(esp, 0x000A2628u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A2628: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 8) = MEM32(edi + 8) + 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x935B28);
    ebx = MEM32(esi + 0x10);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    edx = edx & 0xF00000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(0x935B4C);
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2660
 * Original: 0x000A2660 - 0x000A270A (170 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2660(void)
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

loc_000A2660: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    fp_push(MEMF(esi + 0x14)); /* fld float */
    MEM32(esp + 4) = 0xFF000000u;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x236290)); /* fmul dword ptr [0x236290] */
    PUSH32(esp, 0x000A267Eu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A267E: ;
    fp_push(MEMF(esi)); /* fld float */
    MEM8(esp + 7) = LO8(eax);
    MEM16(esp + 0xA) = 0x104;
    MEM16(esp + 8) = 0x14;
    PUSH32(esp, 0x000A2697u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A2697: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0xC) = LO16(eax);
    PUSH32(esp, 0x000A26A7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A26A7: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0xE) = LO16(eax);
    PUSH32(esp, 0x000A26B7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A26B7: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x10) = LO16(eax);
    PUSH32(esp, 0x000A26C7u); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A26C7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 8));
    PUSH32(esp, 0);
    edx = esp + 0xC;
    PUSH32(esp, 0x104);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(esp + 0x1A) = LO16(eax);
    eax = MEM32(esp + 0xC);
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x40000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x000A26FDu); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_000A26FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
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
 * sub_000A2710
 * Original: 0x000A2710 - 0x000A2795 (133 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2710(void)
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

loc_000A2710: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A271D; /* jne: not equal / not zero */

loc_000A2718: ;
    eax = 0x2F27DC;

loc_000A271D: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000A2743; /* jne: not equal / not zero */

loc_000A272A: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 2);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A273Eu); RECOMP_ABI_CALL(0x000A24C0u, sub_000A24C0); /* call 0x000A24C0 */

loc_000A273E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A274C;

loc_000A2743: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2749u); RECOMP_ABI_CALL(0x000A0FC0u, sub_000A0FC0); /* call 0x000A0FC0 */

loc_000A2749: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A274C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2755u); RECOMP_ABI_CALL(0x0009B9F0u, sub_0009B9F0); /* call 0x0009B9F0 */

loc_000A2755: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C6EC)); /* fmul dword ptr [0x22c6ec] */
    fp_top() = RECOMP_FP_PC(fp_top() + (double)SMEM32(0x930F08)); /* fiadd dword ptr [0x930f08] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C1A8)); /* fmul dword ptr [0x22c1a8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x2363AC)); /* fadd dword ptr [0x2363ac] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    PUSH32(esp, 0x000A278Fu); RECOMP_ABI_CALL(0x001502D0u, sub_001502D0); /* call 0x001502D0 */

loc_000A278F: ;
    _fb = (uint32_t)(LO16(eax)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(esi + 0xC) = MEM16(esi + 0xC) + LO16(eax);
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A27A0
 * Original: 0x000A27A0 - 0x000A2998 (504 bytes, 155 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A27A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A27A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 1;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A27B7u); RECOMP_ABI_CALL(0x0009BA10u, sub_0009BA10); /* call 0x0009BA10 */

loc_000A27B7: ;
    esi = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x935608) = ebp;
    MEM32(0x935030) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000A27E0; /* jne: not equal / not zero */

loc_000A27D0: ;
    MEM32(esp + 0x18) = 0x2F27E0;
    goto loc_000A27E0;

    /* nop */

loc_000A27E0: ;
    eax = ZX16(MEM16(esi + 2));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A28E8; /* je: equal / zero */

loc_000A27ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2878; /* je: equal / zero */

loc_000A27F5: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x10), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2987; /* je: equal / zero */

loc_000A2802: ;
    SET_LO8(eax, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A2987; /* jbe: below or equal (unsigned <=) */

loc_000A280D: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2823; /* je: equal / zero */

loc_000A2816: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A281Eu); RECOMP_ABI_CALL(0x0009E0B0u, sub_0009E0B0); /* call 0x0009E0B0 */

loc_000A281E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A282C;

loc_000A2823: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2829u); RECOMP_ABI_CALL(0x0009DF30u, sub_0009DF30); /* call 0x0009DF30 */

loc_000A2829: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A282C: ;
    ecx = MEM32(0x935608);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2843; /* jl: less (signed <) */

loc_000A2837: ;
    MEM32(0x935608) = 0x31;
    goto loc_000A2856;

loc_000A2843: ;
    eax = ecx * 8 + 0x935618;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x935608) = ecx;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ebx;

loc_000A2856: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    ebp = esi;
    PUSH32(esp, 0x000A2860u); RECOMP_ABI_CALL(0x0009D0B0u, sub_0009D0B0); /* call 0x0009D0B0 */

loc_000A2860: ;
    edx = MEM32(esi + 0x1C);
    ebx = eax;
    eax = MEM32(edx + ebx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A286Eu); RECOMP_ABI_CALL(0x0009BA10u, sub_0009BA10); /* call 0x0009BA10 */

loc_000A286E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    goto loc_000A298B;

loc_000A2878: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A287Fu); RECOMP_ABI_CALL(0x0009D0B0u, sub_0009D0B0); /* call 0x0009D0B0 */

loc_000A287F: ;
    ecx = ZX8(MEM8(esi + 0x12));
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A28CD; /* ja: above (unsigned >) */

loc_000A288C: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A289E; /* je: equal / zero */

loc_000A2895: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A289Bu); RECOMP_ABI_CALL(0x0009E360u, sub_0009E360); /* call 0x0009E360 */

loc_000A289B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A289E: ;
    eax = MEM32(0x935608);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x935608) = eax;
    if ((_fas >= 0)) goto loc_000A28BA; /* jns: not sign (positive) */

loc_000A28AB: ;
    MEM32(0x935608) = 0;
    goto loc_000A2987;

loc_000A28BA: ;
    ebp = MEM32(eax * 8 + 0x935618);
    ebx = MEM32(eax * 8 + 0x93561C);
    goto loc_000A2987;

loc_000A28CD: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A28D9u); RECOMP_ABI_CALL(0x0009BA10u, sub_0009BA10); /* call 0x0009BA10 */

loc_000A28D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    edi = 1;
    goto loc_000A298B;

loc_000A28E8: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A290B; /* je: equal / zero */

loc_000A28ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x401) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x401 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A2987; /* jne: not equal / not zero */

loc_000A28F8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2987; /* je: equal / zero */

loc_000A2903: ;
    edx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A2909u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000A2907u); } /* indirect call */
    }

loc_000A2909: ;
    goto loc_000A2984;

loc_000A290B: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A298B; /* je: equal / zero */

loc_000A2910: ;
    _fb = (uint32_t)(0xFFFFFEFFu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFEFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A2987; /* ja: above (unsigned >) */

loc_000A291A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA2998); /* switch: 9 entries, 7 targets */
    if (_jt == 0x000A2921u) goto loc_000A2921;
    if (_jt == 0x000A293Bu) goto loc_000A293B;
    if (_jt == 0x000A294Du) goto loc_000A294D;
    if (_jt == 0x000A295Fu) goto loc_000A295F;
    if (_jt == 0x000A2971u) goto loc_000A2971;
    if (_jt == 0x000A297Eu) goto loc_000A297E;
    if (_jt == 0x000A2987u) goto loc_000A2987;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A2921: ;
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2934; /* je: equal / zero */

loc_000A292D: ;
    PUSH32(esp, 0x000A2932u); RECOMP_ABI_CALL(0x000A1200u, sub_000A1200); /* call 0x000A1200 */

loc_000A2932: ;
    goto loc_000A2984;

loc_000A2934: ;
    PUSH32(esp, 0x000A2939u); RECOMP_ABI_CALL(0x000A1170u, sub_000A1170); /* call 0x000A1170 */

loc_000A2939: ;
    goto loc_000A2984;

loc_000A293B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x104);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2948u); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_000A2948: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2987;

loc_000A294D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x105);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A295Au); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_000A295A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2987;

loc_000A295F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x106);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A296Cu); RECOMP_ABI_CALL(0x000A13C0u, sub_000A13C0); /* call 0x000A13C0 */

loc_000A296C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2987;

loc_000A2971: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2979u); RECOMP_ABI_CALL(0x000A1C30u, sub_000A1C30); /* call 0x000A1C30 */

loc_000A2979: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000A2987;

loc_000A297E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2984u); RECOMP_ABI_CALL(0x000A1B20u, sub_000A1B20); /* call 0x000A1B20 */

loc_000A2984: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2987: ;
    esi = ebp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A298B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A27E0; /* jne: not equal / not zero */

loc_000A2993: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A30
 * Original: 0x000A2A30 - 0x000A2A31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A30(void)
{

loc_000A2A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2A40
 * Original: 0x000A2A40 - 0x000A2A7E (62 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2A40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    eax = 1;
    edx = ecx;
    PUSH32(esp, edi);
    /* nop */

loc_000A2A50: ;
    esi = MEM32(edx);
    edi = esi;
    edi = edi >> 0x1E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi ^ esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6C078965);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x270) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x270 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2A50; /* jl: less (signed <) */

loc_000A2A6F: ;
    POP32(esp, edi);
    MEM32(ecx + 0x9C0) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2A80
 * Original: 0x000A2A80 - 0x000A2AB6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2A80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12BD6AA);
    PUSH32(esp, 0x000A2A8Eu); RECOMP_ABI_CALL(0x000A2A40u, sub_000A2A40); /* call 0x000A2A40 */

loc_000A2A8E: ;
    ebx = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x270) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x270 (32-bit) */
    eax = 1;
    if (CMP_AE(_fa, _fb)) goto loc_000A2AA8; /* jae: above or equal (unsigned >=) */

loc_000A2AA1: ;
    esi = 0x270;
    goto loc_000A2AAE;

loc_000A2AA8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000A2AF6(); return; } /* je: equal / zero */

loc_000A2AAE: ;
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = esi;

    g_seh_ebp = ebp; sub_000A2AB6(); return; /* fallthrough 0x000A2AB6 */

}

/**
 * sub_000A2AB6
 * Original: 0x000A2AB6 - 0x000A2AF6 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2AB6: ;
    esi = MEM32(ecx + eax * 4 + -4);
    ebp = esi;
    ebp = ebp >> 0x1E;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = ebp ^ esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = MEM32(ecx + eax * 4);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x19660D);
    ebp = ebp ^ esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edi + edx * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x270) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x270 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2AEA; /* jl: less (signed <) */

loc_000A2ADD: ;
    eax = MEM32(ecx + 0x9BC);
    MEM32(ecx) = eax;
    eax = 1;

loc_000A2AEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A2AF0; /* jb: below (unsigned <) */

loc_000A2AEE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2AF0: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2AB6; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_000A2AF6(); return; /* fallthrough 0x000A2AF6 */

}

/**
 * sub_000A2AF6
 * Original: 0x000A2AF6 - 0x000A2B4A (84 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2AF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2AF6: ;
    esi = 0x26F;
    goto loc_000A2B00;

    /* nop */

loc_000A2B00: ;
    edx = MEM32(ecx + eax * 4 + -4);
    ebp = MEM32(ecx + eax * 4);
    edi = edx;
    edi = edi >> 0x1E;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x5D588B65);
    edi = edi ^ ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x270) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x270 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A2B30; /* jl: less (signed <) */

loc_000A2B23: ;
    edx = MEM32(ecx + 0x9BC);
    MEM32(ecx) = edx;
    eax = 1;

loc_000A2B30: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2B00; /* jne: not equal / not zero */

loc_000A2B33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0x80000000u;
    MEM32(ecx + 0x9C0) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2B50
 * Original: 0x000A2B50 - 0x000A2C04 (180 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2B50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ecx;
    MEM32(ecx + 0x9C0) = 0x270;
    MEM32(ecx + 0x9C4) = ecx;
    esi = 0xE3;
    /* nop */

loc_000A2B70: ;
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    ebx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FFFFFFE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (1) _cf = (int)(((edi) >> ((1) - 1)) & 1);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x9908B0DFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ MEM32(eax + 0x634);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2B70; /* jne: not equal / not zero */

loc_000A2BA0: ;
    esi = 0x18C;

loc_000A2BA5: ;
    edx = MEM32(eax + 4);
    edi = MEM32(eax);
    ebx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FFFFFFE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(eax + -908);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (1) _cf = (int)(((edi) >> ((1) - 1)) & 1);
    edi = edi >> 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(0u - (uint32_t)(LO8(edx))));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x9908B0DFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edi = edi ^ ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2BA5; /* jne: not equal / not zero */

loc_000A2BD7: ;
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    ebx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFFFFE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(0u - (uint32_t)(LO8(ecx))));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x9908B0DFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx ^ MEM32(eax + -908);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000A2C10
 * Original: 0x000A2C10 - 0x000A2C5A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x9C0) = MEM32(esi + 0x9C0) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x9C0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2C20; /* jne: not equal / not zero */

loc_000A2C1B: ;
    PUSH32(esp, 0x000A2C20u); RECOMP_ABI_CALL(0x000A2B50u, sub_000A2B50); /* call 0x000A2B50 */

loc_000A2C20: ;
    eax = MEM32(esi + 0x9C4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9C4) = eax;
    eax = ecx;
    eax = eax >> 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx;
    edx = edx & 0xFF3A58ADu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    eax = eax & 0xFFFFDF8Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    eax = eax >> 0x12;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2C60
 * Original: 0x000A2C60 - 0x000A2C68 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2C60: ;
    PUSH32(esp, 0x000A2C65u); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2C65: ;
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2C70
 * Original: 0x000A2C70 - 0x000A2C8E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C70(void)
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

loc_000A2C70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2C76u); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2C76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000A2C86; /* jge: greater or equal (signed >=) */

loc_000A2C80: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_000A2C86: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x280378)); /* fmul qword ptr [0x280378] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2C90
 * Original: 0x000A2C90 - 0x000A2CAE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2C90(void)
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

loc_000A2C90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2C96u); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2C96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_000A2CA6; /* jge: greater or equal (signed >=) */

loc_000A2CA0: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x280380)); /* fadd qword ptr [0x280380] */

loc_000A2CA6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x280388)); /* fmul qword ptr [0x280388] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A2CB0
 * Original: 0x000A2CB0 - 0x000A2CBF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CB0(void)
{

loc_000A2CB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2CBAu); RECOMP_ABI_CALL(0x000A2A40u, sub_000A2A40); /* call 0x000A2A40 */

loc_000A2CBA: ;
    eax = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2CC0
 * Original: 0x000A2CC0 - 0x000A2CE7 (39 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2CC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2CD8; /* je: equal / zero */

loc_000A2CC8: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2CD3u); RECOMP_ABI_CALL(0x000A2A80u, sub_000A2A80); /* call 0x000A2A80 */

loc_000A2CD3: ;
    eax = ecx;
    esp += 12; return; /* ret 8 */

loc_000A2CD8: ;
    PUSH32(esp, 0x1571);
    PUSH32(esp, 0x000A2CE2u); RECOMP_ABI_CALL(0x000A2A40u, sub_000A2A40); /* call 0x000A2A40 */

loc_000A2CE2: ;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A2CF0
 * Original: 0x000A2CF0 - 0x000A2D00 (16 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A2CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2CF0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A2CFD; /* jae: above or equal (unsigned >=) */

loc_000A2CFA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_000A2CFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D10
 * Original: 0x000A2D10 - 0x000A2D6F (95 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2D10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2D6A; /* je: equal / zero */

loc_000A2D1C: ;
    SET_LO8(edx, MEM8(esp + 0x14));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2D2Eu); RECOMP_ABI_CALL(0x000ABE3Au, sub_000ABE3A); /* call 0x000ABE3A */

loc_000A2D2E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A2D64; /* je: equal / zero */

loc_000A2D35: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2D53; /* je: equal / zero */

loc_000A2D3D: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2D49u); RECOMP_ABI_CALL(0x000ABE4Eu, sub_000ABE4E); /* call 0x000ABE4E */

loc_000A2D49: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A2D55;

loc_000A2D53: ;
    SET_LO8(ebx, 1);

loc_000A2D55: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2D5Cu); RECOMP_ABI_CALL(0x000ABE9Cu, sub_000ABE9C); /* call 0x000ABE9C */

loc_000A2D5C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000A2D64: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A2D6A: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D70
 * Original: 0x000A2D70 - 0x000A2D87 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2D70: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    eax = eax + ecx + -1;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    eax = eax >> 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2D90
 * Original: 0x000A2D90 - 0x000A2DB8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2D90: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2DA6u); RECOMP_ABI_CALL(0x000ABEE1u, sub_000ABEE1); /* call 0x000ABEE1 */

loc_000A2DA6: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    { uint32_t _c = (uint32_t)(0xE) & 31u; if (_c && _c < 32u) { eax = (eax >> _c) | (edx << (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    edx = edx >> 0xE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2DC0
 * Original: 0x000A2DC0 - 0x000A2E06 (70 bytes, 26 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2DC0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A2DCFu); RECOMP_ABI_CALL(0x001CEEC3u, sub_001CEEC3); /* call 0x001CEEC3 */

loc_000A2DCF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2DFF; /* je: equal / zero */

loc_000A2DD3: ;
    PUSH32(esp, esi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A2DDEu); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_000A2DDE: ;
    PUSH32(esp, 0x000A2DE3u); RECOMP_ABI_CALL(0x00069F60u, sub_00069F60); /* call 0x00069F60 */

loc_000A2DE3: ;
    esi = eax;
    PUSH32(esp, 0x000A2DEAu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000A2DEA: ;
    ecx = MEM32(esp + 0xC);
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 8);
    esi = esi ^ ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A2DFF: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E10
 * Original: 0x000A2E10 - 0x000A2E67 (87 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2E10: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    eax = ecx;
    PUSH32(esp, esi);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000A2E3F; /* jbe: below or equal (unsigned <=) */

loc_000A2E2E: ;
    esi = eax;

loc_000A2E30: ;
    ecx = ebx;
    PUSH32(esp, 0x000A2E37u); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2E37: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A2E30; /* jne: not equal / not zero */

loc_000A2E3F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A2E62; /* jbe: below or equal (unsigned <=) */

loc_000A2E43: ;
    ecx = ebx;
    PUSH32(esp, 0x000A2E4Au); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2E4A: ;
    MEM32(esp + 0x1C) = eax;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x1C;
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

loc_000A2E62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2E70
 * Original: 0x000A2E70 - 0x000A2E8E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A2E78u); RECOMP_ABI_CALL(0x000A5E30u, sub_000A5E30); /* call 0x000A5E30 */

loc_000A2E78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A2E88; /* je: equal / zero */

loc_000A2E7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2E85u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A2E85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2E88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A2E90
 * Original: 0x000A2E90 - 0x000A2F53 (195 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A2E90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15FEF2);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A2EB1u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A2EB1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A2ED9; /* je: equal / zero */

loc_000A2EB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x280F38);
    PUSH32(esp, 0x000A2EC3u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A2EC3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A2EC6: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A2ED9: ;
    PUSH32(esp, 0x98B214);
    PUSH32(esp, 0x1048);
    PUSH32(esp, 0x000A2EE8u); RECOMP_ABI_CALL(0x00152020u, sub_00152020); /* call 0x00152020 */

loc_000A2EE8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A2F10; /* je: equal / zero */

loc_000A2EFB: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A2F0Cu); RECOMP_ABI_CALL(0x000A6A40u, sub_000A6A40); /* call 0x000A6A40 */

loc_000A2F0C: ;
    esi = eax;
    goto loc_000A2F12;

loc_000A2F10: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A2F12: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_000A2EC6; /* je: equal / zero */

loc_000A2F1E: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A2F30u); RECOMP_ABI_CALL(0x000A6980u, sub_000A6980); /* call 0x000A6980 */

loc_000A2F30: ;
    ecx = esi;
    PUSH32(esp, 0x000A2F37u); RECOMP_ABI_CALL(0x000A5E30u, sub_000A5E30); /* call 0x000A5E30 */

loc_000A2F37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A2F3Du); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A2F3D: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A2F60
 * Original: 0x000A2F60 - 0x000A2FEA (138 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A2F60: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000A2FA2; /* jbe: below or equal (unsigned <=) */

loc_000A2F7E: ;
    MEM32(esp + 0x1C) = eax;

loc_000A2F82: ;
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esi);
    PUSH32(esp, 0x000A2F8Du); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2F8D: ;
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_000A2F82; /* jne: not equal / not zero */

loc_000A2FA2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A2FE5; /* jbe: below or equal (unsigned <=) */

loc_000A2FA6: ;
    ecx = ebp;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x1C) = 0;
    edi = esp + 0x1C;
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
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x000A2FCBu); RECOMP_ABI_CALL(0x000A2C10u, sub_000A2C10); /* call 0x000A2C10 */

loc_000A2FCB: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) ^ eax;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esp + 0x1C;
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

loc_000A2FE5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A2FF0
 * Original: 0x000A2FF0 - 0x000A2FFE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A2FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A2FF0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3000
 * Original: 0x000A3000 - 0x000A300E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3000: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3010
 * Original: 0x000A3010 - 0x000A301C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3010: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 5 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3020
 * Original: 0x000A3020 - 0x000A302E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3020: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3030
 * Original: 0x000A3030 - 0x000A303C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3030: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3040
 * Original: 0x000A3040 - 0x000A314F (271 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8000020);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A305Fu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000A305F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3083; /* jne: not equal / not zero */

loc_000A3066: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A306Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A306C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281014);
    PUSH32(esp, 0x000A3077u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3077: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A3083: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3093u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000A3093: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30AE; /* jne: not equal / not zero */

loc_000A3098: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30A3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FF4);
    goto loc_000A313A;

loc_000A30AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A30B4u); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_000A30B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30CB; /* jne: not equal / not zero */

loc_000A30B8: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30C3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FD4);
    goto loc_000A313A;

loc_000A30CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A30D7u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000A30D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30EF; /* jne: not equal / not zero */

loc_000A30DC: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30E7u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FA4);
    goto loc_000A313A;

loc_000A30EF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3102u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_000A3102: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3129; /* je: equal / zero */

loc_000A3106: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3129; /* jne: not equal / not zero */

loc_000A310C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x280F90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A3119u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3119: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3122u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3122: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A3129: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A3134u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A3134: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280F6C);

loc_000A313A: ;
    PUSH32(esp, 0x000A313Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A313F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3148u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3148: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3059
 * Original: 0x000A3059 - 0x000A314F (246 bytes, 94 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3059(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3059: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A305Fu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000A305F: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3083; /* jne: not equal / not zero */

loc_000A3066: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A306Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A306C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281014);
    PUSH32(esp, 0x000A3077u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3077: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A3083: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3093u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000A3093: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30AE; /* jne: not equal / not zero */

loc_000A3098: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30A3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FF4);
    goto loc_000A313A;

loc_000A30AE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A30B4u); RECOMP_ABI_CALL(0x000AA94Bu, sub_000AA94B); /* call 0x000AA94B */

loc_000A30B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30CB; /* jne: not equal / not zero */

loc_000A30B8: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30C3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30C3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FD4);
    goto loc_000A313A;

loc_000A30CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A30D7u); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_000A30D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A30EF; /* jne: not equal / not zero */

loc_000A30DC: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A30E7u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A30E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280FA4);
    goto loc_000A313A;

loc_000A30EF: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3102u); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_000A3102: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3129; /* je: equal / zero */

loc_000A3106: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3129; /* jne: not equal / not zero */

loc_000A310C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x280F90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A3119u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3119: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3122u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3122: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A3129: ;
    PUSH32(esp, ebx);
    edi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A3134u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A3134: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x280F6C);

loc_000A313A: ;
    PUSH32(esp, 0x000A313Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A313F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3148u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3148: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3150
 * Original: 0x000A3150 - 0x000A32FC (428 bytes, 127 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3150: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x104);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x240));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x21C) = eax;
    SET_LO8(eax, MEM8(esp + 0x22C));
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x230);
    ecx = esp + 0x10;
    MEM8(esp + 0x11) = 0x3A;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM8(esp + 0x22) = 0x5C;
    MEM8(esp + 0x23) = 0;
    PUSH32(esp, 0x000A31AEu); RECOMP_ABI_CALL(0x000AB63Au, sub_000AB63A); /* call 0x000AB63A */

loc_000A31AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A32C6; /* jne: not equal / not zero */

loc_000A31B6: ;
    esi = MEM32(esp + 0x230);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A325F; /* je: equal / zero */

loc_000A31C5: ;
    goto loc_000A31D0;

    /* nop */
    edi = edi;

loc_000A31D0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x110));
    MEM8(esp + eax + 0xC) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A31D0; /* jne: not equal / not zero */

loc_000A31E0: ;
    edi = esp + 0xC;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A31E5: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A31E5; /* jne: not equal / not zero */

loc_000A31ED: ;
    edx = MEM32(0x28106C);
    eax = MEM32(0x281070);
    ecx = MEM32(0x281074);
    MEM32(edi) = edx;
    SET_LO16(edx, MEM16(0x281078));
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x80);
    eax = esp + 0x10;
    MEM32(edi + 8) = ecx;
    PUSH32(esp, eax);
    MEM16(edi + 0xC) = LO16(edx);
    PUSH32(esp, 0x000A3220u); RECOMP_ABI_CALL(0x000AE10Eu, sub_000AE10E); /* call 0x000AE10E */

loc_000A3220: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A322Du); RECOMP_ABI_CALL(0x000AA769u, sub_000AA769); /* call 0x000AA769 */

loc_000A322D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A325F; /* jne: not equal / not zero */

loc_000A3231: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A3237u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A3237: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28104C);
    PUSH32(esp, 0x000A3242u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3242: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0xFFFFFFFBu;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x20C);
    PUSH32(esp, 0x000A3258u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3258: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A325F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3261: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x110));
    MEM8(esp + eax + 0xC) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3261; /* jne: not equal / not zero */

loc_000A3271: ;
    eax = MEM32(esp + 0x22C);
    edx = eax;
    /* nop */

loc_000A3280: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3280; /* jne: not equal / not zero */

loc_000A3287: ;
    edi = esp + 0xC;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000A3290: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3290; /* jne: not equal / not zero */

loc_000A3298: ;
    ecx = eax;
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
    eax = MEM32(esp + 0x220);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esp + 0xC;
    PUSH32(esp, edx);
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
    ecx = MEM32(esp + 0x220);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A32C2u); RECOMP_ABI_CALL(0x000A3040u, sub_000A3040); /* call 0x000A3040 */

loc_000A32C2: ;
    esi = eax;
    goto loc_000A32E2;

loc_000A32C6: ;
    edx = MEM32(esp + 0x22C);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281030);
    esi = 0xFFFFFFFCu;
    PUSH32(esp, 0x000A32E2u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A32E2: ;
    ecx = MEM32(esp + 0x220);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x000A32F5u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A32F5: ;
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x210;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3300
 * Original: 0x000A3300 - 0x000A3301 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3300(void)
{

loc_000A3300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3310
 * Original: 0x000A3310 - 0x000A3357 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3310: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi);
    eax = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A3335u); RECOMP_ABI_CALL(0x000A2D10u, sub_000A2D10); /* call 0x000A2D10 */

loc_000A3335: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3350; /* jne: not equal / not zero */

loc_000A333C: ;
    PUSH32(esp, 0x28107C);
    PUSH32(esp, 0x000A3346u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3346: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFAu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3350: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + 0x14;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3360
 * Original: 0x000A3360 - 0x000A34AF (335 bytes, 135 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3360: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A337Eu); RECOMP_ABI_CALL(0x000AA2FCu, sub_000AA2FC); /* call 0x000AA2FC */

loc_000A337E: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A33A4; /* jne: not equal / not zero */

loc_000A3385: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A338Bu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A338B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281110);
    PUSH32(esp, 0x000A3396u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3396: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 0xFFFFFFFCu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A33A4: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A33B0u); RECOMP_ABI_CALL(0x000AAD69u, sub_000AAD69); /* call 0x000AAD69 */

loc_000A33B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A33DC; /* jne: not equal / not zero */

loc_000A33B4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A33BAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_000A33BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2810F4);
    PUSH32(esp, 0x000A33C5u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A33C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    esi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A33D3u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A33D3: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A33DC: ;
    edx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ecx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    eax = MEM32(esp + 0x14);
    if (CMP_L(_fas, _fbs)) goto loc_000A341A; /* jl: less (signed <) */

loc_000A33F1: ;
    if (CMP_G(_fas, _fbs)) goto loc_000A33F7; /* jg: greater (signed >) */

loc_000A33F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A341A; /* jbe: below or equal (unsigned <=) */

loc_000A33F7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2810D8);
    PUSH32(esp, 0x000A3402u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3402: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    PUSH32(esp, ebp);
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x000A3411u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3411: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A341A: ;
    esi = MEM32(esp + 0x20);
    MEM32(edi) = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A345C; /* jne: not equal / not zero */

loc_000A3425: ;
    PUSH32(esp, 0x98B214);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3430u); RECOMP_ABI_CALL(0x00152295u, sub_00152295); /* call 0x00152295 */

loc_000A3430: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000A345C; /* jne: not equal / not zero */

loc_000A3439: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2810B4);
    PUSH32(esp, 0x000A3444u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3444: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    PUSH32(esp, ebp);
    esi = 0xFFFFFFF9u;
    PUSH32(esp, 0x000A3453u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3453: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A345C: ;
    ecx = MEM32(edi);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A346Fu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_000A346F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A348D; /* je: equal / zero */

loc_000A3473: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A348D; /* jne: not equal / not zero */

loc_000A347B: ;
    POP32(esp, edi);
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A3484u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A3484: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A348D: ;
    PUSH32(esp, 0x28109C);
    PUSH32(esp, 0x000A3497u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3497: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    PUSH32(esp, ebp);
    esi = 0xFFFFFFFBu;
    PUSH32(esp, 0x000A34A6u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A34A6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A34B0
 * Original: 0x000A34B0 - 0x000A3547 (151 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A34B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A34B0: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x354);
    PUSH32(esp, esi);
    MEM32(esp + 0x34C) = eax;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A34D7u); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A34D7: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A352F; /* je: equal / zero */

loc_000A34E0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x35C);
    goto loc_000A34F0;

    /* nop */

loc_000A34F0: ;
    ecx = esp + 0x254;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A34FEu); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A34FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3513; /* je: equal / zero */

loc_000A3502: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A350Du); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A350D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A34F0; /* jne: not equal / not zero */

loc_000A3511: ;
    goto loc_000A3528;

loc_000A3513: ;
    PUSH32(esp, 0x104);
    eax = esp + 0x154;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000A3526u); RECOMP_ABI_CALL(0x000AEB68u, sub_000AEB68); /* call 0x000AEB68 */

loc_000A3526: ;
    edi = eax;

loc_000A3528: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A352Eu); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A352E: ;
    POP32(esp, ebp);

loc_000A352F: ;
    ecx = MEM32(esp + 0x350);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A3540u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3540: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3550
 * Original: 0x000A3550 - 0x000A35E9 (153 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A3550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    edx = MEM32(ebp + 0x14);
    MEM32(esp + 0x110) = eax;
    SET_LO8(eax, MEM8(ebp + 0x10));
    PUSH32(esp, edi);
    MEM8(esp + 8) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 9) = 0x3A;
    MEM8(esp + 0xA) = 0x5C;
    MEM8(esp + 0xB) = 0;
    ecx = 0x40;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A359Au); RECOMP_ABI_CALL(0x000A34B0u, sub_000A34B0); /* call 0x000A34B0 */

loc_000A359A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A35B5; /* jne: not equal / not zero */

loc_000A35A1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x114);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A35B0u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A35B0: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000A35B5: ;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A35C3u); RECOMP_ABI_CALL(0x000AEBCDu, sub_000AEBCD); /* call 0x000AEBCD */

loc_000A35C3: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A35D5u); RECOMP_ABI_CALL(0x000A3360u, sub_000A3360); /* call 0x000A3360 */

loc_000A35D5: ;
    ecx = MEM32(esp + 0x120);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A35E4u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A35E4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A35F0
 * Original: 0x000A35F0 - 0x000A368E (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A35F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A35F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000A3617; /* jae: above or equal (unsigned >=) */

loc_000A3605: ;
    eax = 0xFFFFFFFDu;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x000A3613u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3613: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A3617: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = edi + 0x14;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFECu)) >> 32) & 1);
    edx = edx + 0xFFFFFFECu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    eax = edx;
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A363Fu); RECOMP_ABI_CALL(0x000A2D10u, sub_000A2D10); /* call 0x000A2D10 */

loc_000A363F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A366E; /* je: equal / zero */

loc_000A3646: ;
    PUSH32(esp, esi);
    ecx = 0x14;
    esi = esp + 8;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_000A365C; /* je: equal / zero */

loc_000A3657: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A365C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A366E; /* jne: not equal / not zero */

loc_000A3660: ;
    POP32(esp, edi);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x000A366Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A366A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A366E: ;
    PUSH32(esp, 0x28112C);
    PUSH32(esp, 0x000A3678u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3678: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFAu;
    POP32(esp, edi);
    PUSH32(esp, 0x000A368Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A368A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3690
 * Original: 0x000A3690 - 0x000A3693 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3690: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A36A0
 * Original: 0x000A36A0 - 0x000A3731 (145 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A36A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A36A0: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000A36BF; /* jae: above or equal (unsigned >=) */

loc_000A36AB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x281194);
    PUSH32(esp, 0x000A36B6u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A36B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFAu;
    esp += 4; return; /* ret */

loc_000A36BF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFE9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFE9u)) >> 32) & 1);
    eax = eax + 0xFFFFFFE9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    ecx = 0x17;
    edi = 0x280390;
    esi = eax + ebx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000A36E3; /* je: equal / zero */

loc_000A36DE: ;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A36E3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A36FD; /* je: equal / zero */

loc_000A36E7: ;
    PUSH32(esp, 0x28117C);
    PUSH32(esp, 0x000A36F1u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A36F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A36FD: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A372B; /* je: equal / zero */

loc_000A3705: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x000A370Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A370Cu); } /* indirect call */
    }

loc_000A370E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A372B; /* jne: not equal / not zero */

loc_000A3715: ;
    PUSH32(esp, 0x281150);
    PUSH32(esp, 0x000A371Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A371F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A372B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3730
 * Original: 0x000A3730 - 0x000A3731 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3730(void)
{

loc_000A3730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3740
 * Original: 0x000A3740 - 0x000A379B (91 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A3740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3740: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x110) = eax;
    SET_LO8(eax, MEM8(ebp + 0xC));
    PUSH32(esp, edi);
    MEM8(esp + 8) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 9) = 0x3A;
    MEM8(esp + 0xA) = 0x5C;
    MEM8(esp + 0xB) = 0;
    ecx = 0x40;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A378Au); RECOMP_ABI_CALL(0x000AB89Du, sub_000AB89D); /* call 0x000AB89D */

loc_000A378A: ;
    ecx = MEM32(esp + 0x114);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A3796u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3796: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000A37A0
 * Original: 0x000A37A0 - 0x000A37B0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A37A0(void)
{

loc_000A37A0: ;
    SET_LO8(eax, 4);
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 3) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A37B0
 * Original: 0x000A37B0 - 0x000A37D2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A37B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A37B0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A37CF; /* ja: above (unsigned >) */

loc_000A37B5: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A37CF; /* jae: above or equal (unsigned >=) */

loc_000A37BE: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A37CF; /* ja: above (unsigned >) */

loc_000A37C3: ;
    SET_LO8(edx, MEM8(ecx + 3));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A37D1; /* jbe: below or equal (unsigned <=) */

loc_000A37CF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A37D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A37E0
 * Original: 0x000A37E0 - 0x000A37F4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A37E0(void)
{

loc_000A37E0: ;
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 1;
    MEM8(ecx + 2) = 2;
    MEM8(ecx + 3) = 3;
    MEM8(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3800
 * Original: 0x000A3800 - 0x000A3828 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3800: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3825; /* ja: above (unsigned >) */

loc_000A3805: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3825; /* ja: above (unsigned >) */

loc_000A380B: ;
    SET_LO8(edx, MEM8(ecx + 2));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3825; /* jae: above or equal (unsigned >=) */

loc_000A3814: ;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 3), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3825; /* ja: above (unsigned >) */

loc_000A3819: ;
    SET_LO8(edx, MEM8(ecx + 4));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A3827; /* jbe: below or equal (unsigned <=) */

loc_000A3825: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3827: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3830
 * Original: 0x000A3830 - 0x000A383C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3830(void)
{

loc_000A3830: ;
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 2;
    MEM8(ecx + 2) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3840
 * Original: 0x000A3840 - 0x000A385C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3840: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3859; /* ja: above (unsigned >) */

loc_000A3845: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3859; /* jae: above or equal (unsigned >=) */

loc_000A384E: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3859; /* ja: above (unsigned >) */

loc_000A3853: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A3859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3860
 * Original: 0x000A3860 - 0x000A3870 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3860(void)
{

loc_000A3860: ;
    SET_LO8(eax, 4);
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 0;
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 3) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3870
 * Original: 0x000A3870 - 0x000A3892 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3870: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A388F; /* ja: above (unsigned >) */

loc_000A3875: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A388F; /* ja: above (unsigned >) */

loc_000A387B: ;
    SET_LO8(edx, MEM8(ecx + 2));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A388F; /* jae: above or equal (unsigned >=) */

loc_000A3884: ;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 3), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A388F; /* ja: above (unsigned >) */

loc_000A3889: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A388F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A38A0
 * Original: 0x000A38A0 - 0x000A38AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A38A0(void)
{

loc_000A38A0: ;
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 2;
    MEM8(ecx + 2) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000A38B0
 * Original: 0x000A38B0 - 0x000A38CC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A38B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A38B0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 3 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A38C9; /* ja: above (unsigned >) */

loc_000A38B5: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A38C9; /* jae: above or equal (unsigned >=) */

loc_000A38BE: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A38C9; /* ja: above (unsigned >) */

loc_000A38C3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A38C9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A38D0
 * Original: 0x000A38D0 - 0x000A38E0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A38D0(void)
{

loc_000A38D0: ;
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 2;
    MEM8(ecx + 2) = 1;
    MEM8(ecx + 3) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A38E0
 * Original: 0x000A38E0 - 0x000A3902 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A38E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A38E0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 4 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A38FF; /* ja: above (unsigned >) */

loc_000A38E5: ;
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(eax, 5);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A38FF; /* jae: above or equal (unsigned >=) */

loc_000A38EE: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A38FF; /* ja: above (unsigned >) */

loc_000A38F3: ;
    SET_LO8(edx, MEM8(ecx + 3));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A3901; /* jbe: below or equal (unsigned <=) */

loc_000A38FF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3901: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3910
 * Original: 0x000A3910 - 0x000A391C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3910(void)
{

loc_000A3910: ;
    MEM8(ecx) = 1;
    MEM8(ecx + 1) = 1;
    MEM8(ecx + 2) = 0x11;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3920
 * Original: 0x000A3920 - 0x000A3933 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3920: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 7 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_000A3930; /* ja: above (unsigned >) */

loc_000A3925: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), 2 (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

loc_000A3930: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3940
 * Original: 0x000A3940 - 0x000A394B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3940(void)
{

loc_000A3940: ;
    SET_LO8(eax, 0x50);
    MEM8(ecx) = LO8(eax);
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx + 2) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3950
 * Original: 0x000A3950 - 0x000A396B (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3950: ;
    SET_LO8(edx, MEM8(ecx));
    SET_LO8(eax, 0x64);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3968; /* ja: above (unsigned >) */

loc_000A3958: ;
    _fa = (uint32_t)(MEM8(ecx + 1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3968; /* ja: above (unsigned >) */

loc_000A395D: ;
    _fa = (uint32_t)(MEM8(ecx + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3968; /* ja: above (unsigned >) */

loc_000A3962: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A3968: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3970
 * Original: 0x000A3970 - 0x000A39A2 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3970: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3972: ;
    eax = ZX16(MEM16(ecx + edx * 2));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A399F; /* jl: less (signed <) */

loc_000A397A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A399F; /* jg: greater (signed >) */

loc_000A397F: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A3972; /* jb: below (unsigned <) */

loc_000A3985: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), 5 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A399C; /* jae: above or equal (unsigned >=) */

loc_000A398B: ;
    SET_LO8(edx, MEM8(ecx + 0x11));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A399C; /* ja: above (unsigned >) */

loc_000A3997: ;
    _fa = (uint32_t)(MEM8(ecx + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x12), LO8(eax) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A399E; /* jbe: below or equal (unsigned <=) */

loc_000A399C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A399E: ;
    esp += 4; return; /* ret */

loc_000A399F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A39B0
 * Original: 0x000A39B0 - 0x000A39B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A39B0(void)
{

loc_000A39B0: ;
    MEM8(ecx + 0x11) = 1;
    MEM8(ecx + 0x12) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A39C0
 * Original: 0x000A39C0 - 0x000A3B29 (361 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A39C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A39C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A39CDu); RECOMP_ABI_CALL(0x00052A80u, sub_00052A80); /* call 0x00052A80 */

loc_000A39CD: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A3A09; /* jle: less or equal (signed <=) */

loc_000A39D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A3A4C; /* jle: less or equal (signed <=) */

loc_000A39DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3A09; /* jne: not equal / not zero */

loc_000A39E2: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 4 (8-bit) */
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A3A2E; /* je: equal / zero */

loc_000A39EA: ;
    eax = MEM32(0x2803FC);
    MEM32(edx) = eax;
    eax = MEM32(0x280400);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x280404);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x280408);

loc_000A3A06: ;
    MEM32(edx + 0xC) = eax;

loc_000A3A09: ;
    edx = MEM32(0x2803BC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803C0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803C4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803C8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A3A2E: ;
    eax = MEM32(0x2803AC);
    MEM32(edx) = eax;
    eax = MEM32(0x2803B0);
    MEM32(edx + 4) = eax;
    eax = MEM32(0x2803B4);
    MEM32(edx + 8) = eax;
    eax = MEM32(0x2803B8);
    goto loc_000A3A06;

loc_000A3A4C: ;
    eax = ZX8(MEM8(esi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3A5C; /* ja: above (unsigned >) */

loc_000A3A55: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA3B2C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000A3A5Cu) goto loc_000A3A5C;
    if (_jt == 0x000A3A85u) goto loc_000A3A85;
    if (_jt == 0x000A3AAEu) goto loc_000A3AAE;
    if (_jt == 0x000A3AD7u) goto loc_000A3AD7;
    if (_jt == 0x000A3B00u) goto loc_000A3B00;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A3A5C: ;
    edx = MEM32(0x2803BC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803C0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803C4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803C8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A3A85: ;
    edx = MEM32(0x2803CC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803D0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803D4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803D8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A3AAE: ;
    edx = MEM32(0x2803DC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803E0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803E4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803E8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A3AD7: ;
    edx = MEM32(0x2803EC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803F0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803F4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803F8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A3B00: ;
    edx = MEM32(0x2803AC);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    eax = MEM32(0x2803B0);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x2803B4);
    MEM32(ecx + 8) = edx;
    eax = MEM32(0x2803B8);
    MEM32(ecx + 0xC) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3B40
 * Original: 0x000A3B40 - 0x000A3B57 (23 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A3B48u); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_000A3B48: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A3B52; /* je: equal / zero */

loc_000A3B4D: ;
    MEM8(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3B52: ;
    MEM8(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3B60
 * Original: 0x000A3B60 - 0x000A3B6C (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3B60: ;
    SET_LO8(edx, MEM8(ecx));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3B70
 * Original: 0x000A3B70 - 0x000A3B7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3B70: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx) = 0xA;
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx + 2) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3B80
 * Original: 0x000A3B80 - 0x000A3BAB (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3B80: ;
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A3BA8; /* jb: below (unsigned <) */

loc_000A3B86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x14 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3BA8; /* ja: above (unsigned >) */

loc_000A3B8A: ;
    SET_LO8(eax, MEM8(ecx + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF6 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3BA8; /* jl: less (signed <) */

loc_000A3B91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A3BA8; /* jg: greater (signed >) */

loc_000A3B95: ;
    SET_LO8(ecx, MEM8(ecx + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xEC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xEC (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A3BA8; /* jl: less (signed <) */

loc_000A3B9D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x14) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x14 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A3BA8; /* jg: greater (signed >) */

loc_000A3BA2: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A3BA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3BB0
 * Original: 0x000A3BB0 - 0x000A3BD0 (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3BB0: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    MEM32(ecx) = 0x18B820;
    MEM8(ecx + 0x24) = LO8(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3BCDu); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A3BCD: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3BD0
 * Original: 0x000A3BD0 - 0x000A3C1A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18B820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x18B820 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3C16; /* ja: above (unsigned >) */

loc_000A3BDB: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), 0xF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3C16; /* jae: above or equal (unsigned >=) */

loc_000A3BE1: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3BEAu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A3BEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3C16; /* jae: above or equal (unsigned >=) */

loc_000A3BEF: ;
    esi = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C0F; /* je: equal / zero */

loc_000A3C00: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    ecx = 6;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3C16; /* jne: not equal / not zero */

loc_000A3C0F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3C16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3C20
 * Original: 0x000A3C20 - 0x000A3C40 (32 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3C20: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    MEM32(ecx) = 0x18B820;
    MEM8(ecx + 0x24) = LO8(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3C3Du); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A3C3D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3C40
 * Original: 0x000A3C40 - 0x000A3C8A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3C40: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18B820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x18B820 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3C86; /* ja: above (unsigned >) */

loc_000A3C4B: ;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x24), 0x69 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3C86; /* jae: above or equal (unsigned >=) */

loc_000A3C51: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3C5Au); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A3C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3C86; /* jae: above or equal (unsigned >=) */

loc_000A3C5F: ;
    esi = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A3C7F; /* je: equal / zero */

loc_000A3C70: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    ecx = 6;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3C86; /* jne: not equal / not zero */

loc_000A3C7F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A3C86: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3C90
 * Original: 0x000A3C90 - 0x000A3CB6 (38 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3C90: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    MEM32(ecx) = 0;
    MEM16(ecx + 0x24) = 0;
    MEM8(ecx + 0x26) = LO8(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3CB3u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A3CB3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3CC0
 * Original: 0x000A3CC0 - 0x000A3CED (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3CC0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F5E0FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x5F5E0FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3CEA; /* ja: above (unsigned >) */

loc_000A3CC8: ;
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), 0x3E7 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3CEA; /* ja: above (unsigned >) */

loc_000A3CD0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0xF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3CEA; /* jae: above or equal (unsigned >=) */

loc_000A3CD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3CDFu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A3CDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3CEA; /* jae: above or equal (unsigned >=) */

loc_000A3CE4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A3CEA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3CF0
 * Original: 0x000A3CF0 - 0x000A3D16 (38 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3CF0: ;
    SET_LO8(eax, MEM8(esp + 8));
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    MEM32(ecx) = 0;
    MEM16(ecx + 0x24) = 0;
    MEM8(ecx + 0x26) = LO8(eax);
    PUSH32(esp, edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3D13u); RECOMP_ABI_CALL(0x000A9D33u, sub_000A9D33); /* call 0x000A9D33 */

loc_000A3D13: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A3D20
 * Original: 0x000A3D20 - 0x000A3D4D (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D20: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F5E0FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x5F5E0FF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3D4A; /* ja: above (unsigned >) */

loc_000A3D28: ;
    _fa = (uint32_t)(MEM16(ecx + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0x3E7) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x24), 0x3E7 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3D4A; /* ja: above (unsigned >) */

loc_000A3D30: ;
    _fa = (uint32_t)(MEM8(ecx + 0x26)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x26), 0x69 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3D4A; /* jae: above or equal (unsigned >=) */

loc_000A3D36: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3D3Fu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A3D3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3D4A; /* jae: above or equal (unsigned >=) */

loc_000A3D44: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A3D4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D50
 * Original: 0x000A3D50 - 0x000A3D5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D50: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x78;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D60
 * Original: 0x000A3D60 - 0x000A3D6E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D60: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0xF;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D70
 * Original: 0x000A3D70 - 0x000A3D81 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3D70: ;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x69;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 0x3C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3D90
 * Original: 0x000A3D90 - 0x000A3D93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3D90(void)
{

loc_000A3D90: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3DA0
 * Original: 0x000A3DA0 - 0x000A3E3B (155 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3DA0: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edx + 0x8A) = LO8(ebx);
    MEM8(edx + 0x8B) = LO8(ebx);
    MEM8(edx + 0x8C) = LO8(ebx);
    MEM8(edx + 0x8D) = LO8(ebx);
    MEM8(edx + 0x8E) = LO8(ebx);
    MEM8(edx + 0x8F) = LO8(ebx);
    ecx = edx + 0xB0;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM16(ecx + 0xC) = LO16(eax);
    MEM8(ecx + 0xE) = LO8(eax);
    ecx = edx + 0xA4;
    PUSH32(esp, edi);
    edi = edx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    ecx = 0x22;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    ecx = edx + 0x90;
    eax = 0x2020202;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM16(ecx + 0xC) = LO16(eax);
    MEM8(ecx + 0xE) = LO8(eax);
    POP32(esp, edi);
    MEM8(edx + 0x9F) = LO8(ebx);
    MEM8(edx + 0xA0) = LO8(ebx);
    MEM8(edx + 0xA1) = LO8(ebx);
    MEM8(edx + 0xA2) = LO8(ebx);
    MEM8(edx + 0xA3) = LO8(ebx);
    MEM32(edx + 0xC0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A3E40
 * Original: 0x000A3E40 - 0x000A3EC2 (130 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3E40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3E42: ;
    _fa = (uint32_t)(MEM16(ecx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(0x270F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax * 2), 0x270F (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBF; /* ja: above (unsigned >) */

loc_000A3E4A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x45 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A3E42; /* jb: below (unsigned <) */

loc_000A3E50: ;
    SET_LO8(edx, MEM8(ecx + 0x8A));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E5F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8B)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8B), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E67: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8C), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E6F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8D)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8D), 4 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A3EBC; /* jae: above or equal (unsigned >=) */

loc_000A3E78: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8E)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8E), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E80: ;
    _fa = (uint32_t)(MEM8(ecx + 0x8F)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x8F), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E88: ;
    _fa = (uint32_t)(MEM8(ecx + 0x9F)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x9F), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E90: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA0)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA0), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3E98: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA1), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3EA0: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA2), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3EA8: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA3)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA3), LO8(eax) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A3EBC; /* ja: above (unsigned >) */

loc_000A3EB0: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC0), 0xFFFFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A3EBE; /* jbe: below or equal (unsigned <=) */

loc_000A3EBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A3EBE: ;
    esp += 4; return; /* ret */

loc_000A3EBF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3ED0
 * Original: 0x000A3ED0 - 0x000A3EDB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3ED0(void)
{

loc_000A3ED0: ;
    MEM8(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3EE0
 * Original: 0x000A3EE0 - 0x000A3EEC (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A3EE0: ;
    SET_LO8(edx, MEM8(ecx));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3EF0
 * Original: 0x000A3EF0 - 0x000A3EF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A3EF0: ;
    g_seh_ebp = ebp; sub_000A7080(); return; /* tail jmp 0x000A7080 */

}

/**
 * sub_000A3F00
 * Original: 0x000A3F00 - 0x000A3F03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A3F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3F00: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F10
 * Original: 0x000A3F10 - 0x000A3F20 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F10(void)
{

loc_000A3F10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2811AC);
    PUSH32(esp, 0x000A3F1Fu); RECOMP_ABI_CALL(0x000AB89Du, sub_000AB89D); /* call 0x000AB89D */

loc_000A3F1F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F20
 * Original: 0x000A3F20 - 0x000A3F80 (96 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3F20: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x104) = eax;
    SET_LO8(eax, MEM8(esp + 0x110));
    PUSH32(esp, edi);
    MEM8(esp + 4) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 5) = 0x3A;
    MEM8(esp + 6) = 0x5C;
    MEM8(esp + 7) = 0;
    ecx = 0x40;
    edi = esp + 8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x110);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A3F6Cu); RECOMP_ABI_CALL(0x000AB89Du, sub_000AB89D); /* call 0x000AB89D */

loc_000A3F6C: ;
    ecx = MEM32(esp + 0x108);
    POP32(esp, edi);
    PUSH32(esp, 0x000A3F79u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3F79: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A3F80
 * Original: 0x000A3F80 - 0x000A3FF7 (119 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A3F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A3F80: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2811B4);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000A3F9Cu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A3F9C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A3FAAu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A3FAA: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000A3FBF; /* je: equal / zero */

loc_000A3FB3: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    goto loc_000A3FC9;

loc_000A3FBF: ;
    PUSH32(esp, 0x239E14);
    edx = esp + 4;
    PUSH32(esp, edx);

loc_000A3FC9: ;
    PUSH32(esp, 0x000A3FCEu); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A3FCE: ;
    SET_LO8(eax, MEM8(esp + 0x34));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A3FDB; /* jne: not equal / not zero */

loc_000A3FD6: ;
    MEM8(esp + 0x34) = 0x55;

loc_000A3FDB: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A3FEAu); RECOMP_ABI_CALL(0x000A3740u, sub_000A3740); /* call 0x000A3740 */

loc_000A3FEA: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 0x000A3FF3u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A3FF3: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4000
 * Original: 0x000A4000 - 0x000A401B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2811C8);
    PUSH32(esp, 0x000A4010u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A4010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4016u); RECOMP_ABI_CALL(0x000A3F10u, sub_000A3F10); /* call 0x000A3F10 */

loc_000A4016: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4020
 * Original: 0x000A4020 - 0x000A4056 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A4020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4020: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A4030; /* je: equal / zero */

loc_000A4029: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A4053; /* jne: not equal / not zero */

loc_000A402C: ;
    SET_LO8(eax, 0x54);
    goto loc_000A4032;

loc_000A4030: ;
    SET_LO8(eax, 0x55);

loc_000A4032: ;
    MEM8(esp + 4) = LO8(eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM8(esp + 9) = 0x3A;
    MEM8(esp + 0xA) = 0x5C;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x000A404Fu); RECOMP_ABI_CALL(0x000A2D90u, sub_000A2D90); /* call 0x000A2D90 */

loc_000A404F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A4053: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4060
 * Original: 0x000A4060 - 0x000A4085 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4060: ;
    SET_LO8(eax, MEM8(esp + 4));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM8(esp + 8) = LO8(eax);
    MEM8(esp + 9) = 0x3A;
    MEM8(esp + 0xA) = 0x5C;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x000A4081u); RECOMP_ABI_CALL(0x000A2D90u, sub_000A2D90); /* call 0x000A2D90 */

loc_000A4081: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4090
 * Original: 0x000A4090 - 0x000A40E5 (85 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4090: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x17;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A409Eu); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A409E: ;
    esi = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A40CC; /* je: equal / zero */

loc_000A40AF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000A40B6; /* je: equal / zero */

loc_000A40B2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A40B6: ;
    PUSH32(esp, 0x2811E8);
    PUSH32(esp, 0x000A40C0u); RECOMP_ABI_CALL(0x000ACD34u, sub_000ACD34); /* call 0x000ACD34 */

loc_000A40C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A40C7u); RECOMP_ABI_CALL(0x000A2D70u, sub_000A2D70); /* call 0x000A2D70 */

loc_000A40C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A40CC: ;
    PUSH32(esp, 0x2811AC);
    PUSH32(esp, 0x000A40D6u); RECOMP_ABI_CALL(0x000ACD34u, sub_000ACD34); /* call 0x000ACD34 */

loc_000A40D6: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A40DDu); RECOMP_ABI_CALL(0x000A2D70u, sub_000A2D70); /* call 0x000A2D70 */

loc_000A40DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A40F0
 * Original: 0x000A40F0 - 0x000A4133 (67 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A40F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A40F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A40FFu); RECOMP_ABI_CALL(0x000A4090u, sub_000A4090); /* call 0x000A4090 */

loc_000A40FF: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x000A410Bu); RECOMP_ABI_CALL(0x000A4060u, sub_000A4060); /* call 0x000A4060 */

loc_000A410B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A4118; /* ja: above (unsigned >) */

loc_000A4112: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A4118: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A4120u); RECOMP_ABI_CALL(0x000A4090u, sub_000A4090); /* call 0x000A4090 */

loc_000A4120: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x000A4128u); RECOMP_ABI_CALL(0x000A4060u, sub_000A4060); /* call 0x000A4060 */

loc_000A4128: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4140
 * Original: 0x000A4140 - 0x000A4163 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A4140: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A414Du); RECOMP_ABI_CALL(0x000A4090u, sub_000A4090); /* call 0x000A4090 */

loc_000A414D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x000A4159u); RECOMP_ABI_CALL(0x000A4060u, sub_000A4060); /* call 0x000A4060 */

loc_000A4159: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4170
 * Original: 0x000A4170 - 0x000A4257 (231 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4170: ;
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x590;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x250;
    MEM32(esp + 0x594) = eax;
    SET_LO8(eax, MEM8(esp + 0x59C));
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edx);
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = 0x3A;
    MEM8(esp + 0x12) = 0x5C;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0x000A41B1u); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A41B1: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4240; /* je: equal / zero */

loc_000A41BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edi;

loc_000A41C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A41C2: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x398));
    MEM8(esp + eax + 0x14) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41C2; /* jne: not equal / not zero */

loc_000A41D2: ;
    eax = MEM32(esp + 0x5A8);
    edx = eax;
    goto loc_000A41E0;

    /* nop */

loc_000A41E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41E0; /* jne: not equal / not zero */

loc_000A41E7: ;
    edi = esp + 0x14;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000A41F0: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41F0; /* jne: not equal / not zero */

loc_000A41F8: ;
    ecx = eax;
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
    eax = esp + 0x118;
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
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A421Au); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_000A421A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4226; /* je: equal / zero */

loc_000A421F: ;
    PUSH32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000A4226u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A4226: ;
    edx = esp + 0x258;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A4234u); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A4234: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A41C0; /* jne: not equal / not zero */

loc_000A4238: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A423Eu); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A423E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000A4240: ;
    ecx = MEM32(esp + 0x594);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    PUSH32(esp, 0x000A4250u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4250: ;
    _fb = (uint32_t)(0x590) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x590;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4260
 * Original: 0x000A4260 - 0x000A4305 (165 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4260: ;
    _fb = (uint32_t)(0x598) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x598;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x5AC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x5A0) = eax;
    MEM32(esp + 0x10) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000A42C8; /* je: equal / zero */

loc_000A428D: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A42C8; /* jne: not equal / not zero */

loc_000A4292: ;
    eax = MEM32(esp + 0x5AC);
    ecx = MEM32(esp + 0x5A8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A42A7u); RECOMP_ABI_CALL(0x000A4170u, sub_000A4170); /* call 0x000A4170 */

loc_000A42A7: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;

loc_000A42B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x594);
    PUSH32(esp, 0x000A42C1u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A42C1: ;
    _fb = (uint32_t)(0x598) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x598;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A42C8: ;
    SET_LO8(edx, MEM8(esp + 0x5A8));
    eax = esp + 0x25C;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM8(esp + 0x14) = LO8(edx);
    MEM8(esp + 0x15) = 0x3A;
    MEM8(esp + 0x16) = 0x5C;
    MEM8(esp + 0x17) = 0;
    PUSH32(esp, 0x000A42F4u); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A42F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A42B0; /* je: equal / zero */

loc_000A42FD: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x5B8);

    g_seh_ebp = ebp; sub_000A4305(); return; /* fallthrough 0x000A4305 */

}

/**
 * sub_000A4305
 * Original: 0x000A4305 - 0x000A447A (373 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4305(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4305: ;
    eax = MEM32(esp + 0x5C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4325; /* je: equal / zero */

loc_000A4310: ;
    edx = esp + 0x4A4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A431Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A4318u); } /* indirect call */
    }

loc_000A431A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4432; /* je: equal / zero */

loc_000A4325: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A432B; /* je: equal / zero */

loc_000A4329: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A432B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A4432; /* jbe: below or equal (unsigned <=) */

loc_000A4335: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000A4340: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x3A0));
    MEM8(esp + eax + 0x1C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4340; /* jne: not equal / not zero */

loc_000A4350: ;
    eax = MEM32(esp + 0x5B0);
    esi = eax;
    /* nop */

loc_000A4360: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4360; /* jne: not equal / not zero */

loc_000A4367: ;
    edi = esp + 0x1C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_000A4370: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4370; /* jne: not equal / not zero */

loc_000A4378: ;
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
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = esp + 0x120;
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
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4398u); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_000A4398: ;
    ecx = MEM32(esp + 0x5BC);
    esi = MEM32(esp + 0x5C0);
    ebx = eax;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A43B5; /* jae: above or equal (unsigned >=) */

loc_000A43AF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp) = eax;
    goto loc_000A43D6;

loc_000A43B5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x344);
    PUSH32(esp, ecx);
    edx = esi + 0x344;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A43CAu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A43CA: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;

loc_000A43D6: ;
    eax = MEM32(ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x344);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    edi = eax + esi + -836;
    ecx = 0xD1;
    esi = esp + 0x260;
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
    if (CMP_EQ(_fa, _fb)) goto loc_000A4424; /* je: equal / zero */

loc_000A43F9: ;
    ecx = MEM32(ebp);
    edx = MEM32(esp + 0x5C0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x344);
    edi = ecx + edx + -836;
    ecx = 0x50;
    esi = esp + 0x120;
    PUSH32(esp, ebx);
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
    PUSH32(esp, 0x000A4424u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A4424: ;
    edi = MEM32(esp + 0x5C8);
    esi = MEM32(esp + 0x5B4);

loc_000A4432: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A443B; /* jne: not equal / not zero */

loc_000A4436: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4455; /* je: equal / zero */

loc_000A443B: ;
    ecx = MEM32(esp + 0x18);
    eax = esp + 0x260;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A444Du); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A444D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A4305; /* jne: not equal / not zero */

loc_000A4455: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A445Fu); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A445F: ;
    ecx = MEM32(esp + 0x5A4);
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A4473u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4473: ;
    _fb = (uint32_t)(0x598) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x598;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4480
 * Original: 0x000A4480 - 0x000A4634 (436 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4480: ;
    _fb = (uint32_t)(0x3D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x3D8) = eax;
    eax = MEM32(esp + 0x3E0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A44A2u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A44A2: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x19;
    edi = esp + 0x34;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2811AC);
    MEM32(esp + 0x18) = esi;
    edi = 1;
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x000A44CFu); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A44CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A461C; /* je: equal / zero */

loc_000A44DC: ;
    PUSH32(esp, ebp);
    /* nop */

loc_000A44E0: ;
    eax = MEM32(esp + 0x3EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4500; /* je: equal / zero */

loc_000A44EB: ;
    edx = esp + 0x2E0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A44F5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A44F3u); } /* indirect call */
    }

loc_000A44F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A45EC; /* je: equal / zero */

loc_000A4500: ;
    ecx = MEM32(esp + 0x3E8);
    PUSH32(esp, esi);
    eax = esp + 0x2E4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4516u); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A4516: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A45EC; /* jne: not equal / not zero */

loc_000A4521: ;
    eax = ZX16(MEM16(esp + esi * 2 + 0x2E0));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x31) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x31 (32-bit) */
    ebp = esp + esi * 2 + 0x2E0;
    if (CMP_L(_fas, _fbs)) goto loc_000A45EC; /* jl: less (signed <) */

loc_000A4539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x39 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A45EC; /* jg: greater (signed >) */

loc_000A4542: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A4548u); RECOMP_ABI_CALL(0x001522F9u, sub_001522F9); /* call 0x001522F9 */

loc_000A4548: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A45EC; /* jb: below (unsigned <) */

loc_000A4555: ;
    edx = MEM32(esp + 0x3F0);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, 0x2811EC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A456Du); RECOMP_ABI_CALL(0x000A9E82u, sub_000A9E82); /* call 0x000A9E82 */

loc_000A456D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A457Bu); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A457B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A45EC; /* jne: not equal / not zero */

loc_000A457F: ;
    edx = edi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A458E; /* jbe: below or equal (unsigned <=) */

loc_000A4586: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A45EC; /* jae: above or equal (unsigned >=) */

loc_000A458A: ;
    ebx = esi;
    goto loc_000A45EC;

loc_000A458E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A459B; /* jbe: below or equal (unsigned <=) */

loc_000A4592: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(esp + esi + 0x37) = 1;
    goto loc_000A45EC;

loc_000A459B: ;
    eax = esp + 0x38;
    ebp = edi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A45A2: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A460F; /* je: equal / zero */

loc_000A45A8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A45A2; /* jne: not equal / not zero */

loc_000A45AD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4611; /* je: equal / zero */

loc_000A45B1: ;
    esi = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x64;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + esi + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A45CCu); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A45CC: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esp + 0xA8;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = ebp;

loc_000A45EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4611; /* je: equal / zero */

loc_000A45F0: ;
    ecx = MEM32(esp + 0x10);
    eax = esp + 0x9C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4602u); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A4602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4611; /* je: equal / zero */

loc_000A4606: ;
    esi = MEM32(esp + 0x14);
    goto loc_000A44E0;

loc_000A460F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A4611: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A461Bu); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A461B: ;
    POP32(esp, ebp);

loc_000A461C: ;
    ecx = MEM32(esp + 0x3DC);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A462Du); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A462D: ;
    _fb = (uint32_t)(0x3D4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3D4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4640
 * Original: 0x000A4640 - 0x000A46B9 (121 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A4640: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x348));
    esp = esp - 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    MEM32(esp + 0x348) = eax;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2811AC);
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A4665u); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A4665: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A46A2; /* je: equal / zero */

loc_000A466C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x358);

loc_000A4674: ;
    ecx = esp + 0x250;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A4682u); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A4682: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A469B; /* jne: not equal / not zero */

loc_000A468C: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4697u); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A4697: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A4674; /* jne: not equal / not zero */

loc_000A469B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A46A1u); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A46A1: ;
    POP32(esp, edi);

loc_000A46A2: ;
    ecx = MEM32(esp + 0x34C);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x000A46B2u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A46B2: ;
    _fb = (uint32_t)(0x348) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x348)) >> 32) & 1);
    esp = esp + 0x348;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A46C0
 * Original: 0x000A46C0 - 0x000A4758 (152 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A46C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A46C0: ;
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x34C));
    esp = esp - 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    MEM32(esp + 0x34C) = eax;
    SET_LO8(eax, MEM8(esp + 0x358));
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000A46E3; /* jne: not equal / not zero */

loc_000A46E1: ;
    SET_LO8(eax, 0x55);

loc_000A46E3: ;
    MEM8(esp + 8) = LO8(eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM8(esp + 0x11) = 0x3A;
    MEM8(esp + 0x12) = 0x5C;
    MEM8(esp + 0x13) = LO8(ebx);
    PUSH32(esp, 0x000A4704u); RECOMP_ABI_CALL(0x000AB96Du, sub_000AB96D); /* call 0x000AB96D */

loc_000A4704: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000A4741; /* je: equal / zero */

loc_000A470B: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x35C);

loc_000A4713: ;
    edx = esp + 0x254;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000A4721u); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A4721: ;
    ebx = eax;
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(0u - (uint32_t)(ebx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A473A; /* jne: not equal / not zero */

loc_000A472B: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4736u); RECOMP_ABI_CALL(0x000ABA77u, sub_000ABA77); /* call 0x000ABA77 */

loc_000A4736: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A4713; /* jne: not equal / not zero */

loc_000A473A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4740u); RECOMP_ABI_CALL(0x000ABABEu, sub_000ABABE); /* call 0x000ABABE */

loc_000A4740: ;
    POP32(esp, edi);

loc_000A4741: ;
    ecx = MEM32(esp + 0x350);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x000A4751u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4751: ;
    _fb = (uint32_t)(0x34C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x34C)) >> 32) & 1);
    esp = esp + 0x34C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4760
 * Original: 0x000A4760 - 0x000A47E9 (137 bytes, 41 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4760: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000A47CB; /* je: equal / zero */

loc_000A4778: ;
    SET_LO8(eax, MEM8(0x935B5E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A47A8; /* jne: not equal / not zero */

loc_000A4781: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A478Bu); RECOMP_ABI_CALL(0x001CEF8Bu, sub_001CEF8B); /* call 0x001CEF8B */

loc_000A478B: ;
    ecx = MEM32(esp + 0x12);
    SET_LO16(edx, MEM16(esp + 0x16));
    MEM32(0x935B58) = ecx;
    MEM16(0x935B5C) = LO16(edx);
    MEM8(0x935B5E) = 1;

loc_000A47A8: ;
    eax = MEM32(0x935B58);
    MEM32(esi) = eax;
    SET_LO16(ecx, MEM16(0x935B5C));
    MEM16(esi + 4) = LO16(ecx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000A47C7u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A47C7: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A47CB: ;
    PUSH32(esp, 0x2811F8);
    PUSH32(esp, 0x000A47D5u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A47D5: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x000A47E5u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A47E5: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A47F0
 * Original: 0x000A47F0 - 0x000A481B (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A47F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A47F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x935B50);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    PUSH32(esp, ecx);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = esi + edx + 0x1E;
    PUSH32(esp, 0x000A4810u); RECOMP_ABI_CALL(0x000A39C0u, sub_000A39C0); /* call 0x000A39C0 */

loc_000A4810: ;
    eax = MEM32(0x935B50);
    SET_LO8(eax, MEM8(esi + eax + 0x2E));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4820
 * Original: 0x000A4820 - 0x000A4823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4820: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4830
 * Original: 0x000A4830 - 0x000A483F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4830: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(0x2F27E8) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4840
 * Original: 0x000A4840 - 0x000A4846 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4840(void)
{

loc_000A4840: ;
    SET_LO8(eax, MEM8(0x30AE17));
    esp += 4; return; /* ret */

}

/**
 * sub_000A4850
 * Original: 0x000A4850 - 0x000A4865 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4850: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(0x30AE17) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A4864; /* jb: below (unsigned <) */

loc_000A485D: ;
    MEM8(0x30AE17) = 1;

loc_000A4864: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A4870
 * Original: 0x000A4870 - 0x000A4893 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A488A; /* je: equal / zero */

loc_000A4878: ;
    SET_LO8(ecx, MEM8(0x2F27E9));
    MEM8(eax) = LO8(ecx);
    edx = MEM32(0x935B50);
    SET_LO8(eax, MEM8(edx + 0x6E));
    esp += 4; return; /* ret */

loc_000A488A: ;
    eax = MEM32(0x935B50);
    SET_LO8(eax, MEM8(eax + 0x6E));
    esp += 4; return; /* ret */

}

/**
 * sub_000A48A0
 * Original: 0x000A48A0 - 0x000A48C2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A48A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A48A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    ecx = MEM32(0x935B50);
    MEM8(ecx + 0x6E) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    MEM8(0x2F27E9) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A48C1; /* jb: below (unsigned <) */

loc_000A48BA: ;
    MEM8(0x2F27E9) = 1;

loc_000A48C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A48D0
 * Original: 0x000A48D0 - 0x000A4922 (82 bytes, 21 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A48D0(void)
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

loc_000A48D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x935B50);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x70);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x71);
    eax = ZX8(MEM8(eax + 0x6F));
    MEM32(esp) = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x2363AC)); /* fmul dword ptr [0x2363ac] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEM32(esp + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C0D8)); /* fmul dword ptr [0x22c0d8] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x22C100)); /* fmul dword ptr [0x22c100] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A491Eu); RECOMP_ABI_CALL(0x00068470u, sub_00068470); /* call 0x00068470 */

loc_000A491E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A4930
 * Original: 0x000A4930 - 0x000A4963 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4930: ;
    eax = MEM32(0x935B50);
    ecx = ZX8(MEM8(eax + 0x1A));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A493Fu); RECOMP_ABI_CALL(0x0004DD90u, sub_0004DD90); /* call 0x0004DD90 */

loc_000A493F: ;
    edx = MEM32(0x935B50);
    eax = ZX8(MEM8(edx + 0x1B));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A494Fu); RECOMP_ABI_CALL(0x0004DB10u, sub_0004DB10); /* call 0x0004DB10 */

loc_000A494F: ;
    ecx = MEM32(0x935B50);
    edx = ZX8(MEM8(ecx + 0x1C));
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A495Fu); RECOMP_ABI_CALL(0x0004DB20u, sub_0004DB20); /* call 0x0004DB20 */

loc_000A495F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4970
 * Original: 0x000A4970 - 0x000A4980 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4970: ;
    eax = MEM32(0x935B50);
    _fa = (uint32_t)(MEM8(eax + 0x2ED2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x2ED2), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000A49F0
 * Original: 0x000A49F0 - 0x000A4A3E (78 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A49F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A49F0: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x69 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000A4A21; /* jae: above or equal (unsigned >=) */

loc_000A4A00: ;
    edx = 0xE;
    MEM8(ecx) = 0;
    SET_LO8(eax, LO8(edx));
    esi = ZX8(LO8(ebx));
    /* nop */

loc_000A4A10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A4A2F; /* jb: below (unsigned <) */

loc_000A4A14: ;
    MEM8(ecx) = MEM8(ecx) + 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    edi = ZX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A4A10; /* ja: above (unsigned >) */

loc_000A4A21: ;
    POP32(esp, edi);
    MEM8(ecx) = 0xF;
    ecx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM8(ecx) = 0xF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A4A2F: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    SET_LO8(ebx, LO8(ebx) - LO8(edx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xF) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ebx, LO8(ebx) + 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM8(eax) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4A40
 * Original: 0x000A4A40 - 0x000A4A55 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4A40: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A4A52; /* jae: above or equal (unsigned >=) */

loc_000A4A48: ;
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + 0x280C30));
    esp += 4; return; /* ret */

loc_000A4A52: ;
    SET_LO8(eax, 0xF);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4A60
 * Original: 0x000A4A60 - 0x000A4A73 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A60(void)
{

loc_000A4A60: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(esi));
    MEM8(eax) = LO8(edx);
    MEM8(esi) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4A80
 * Original: 0x000A4A80 - 0x000A4AB6 (54 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4A80: ;
    eax = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    edx = edi + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(eax + 4) = edx;
    if (CMP_A(_fa, _fb)) goto loc_000A4AAF; /* ja: above (unsigned >) */

loc_000A4A98: ;
    esi = MEM32(esp + 0xC);
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
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A4AAF: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A4AC0
 * Original: 0x000A4AC0 - 0x000A4B0D (77 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4AC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000A4AD7; /* jae: above or equal (unsigned >=) */

loc_000A4AD1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    goto loc_000A4AD9;

loc_000A4AD7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A4AD9: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 8);
    edx = edi + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(eax + 4) = edx;
    POP32(esp, ebp);
    if (CMP_A(_fa, _fb)) goto loc_000A4B07; /* ja: above (unsigned >) */

loc_000A4AEF: ;
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
    ecx = MEM32(ebx + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A4B07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4B10
 * Original: 0x000A4B10 - 0x000A4BB6 (166 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4B10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x15FF12);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x98B214);
    PUSH32(esp, 0x1048);
    PUSH32(esp, 0x000A4B36u); RECOMP_ABI_CALL(0x00152020u, sub_00152020); /* call 0x00152020 */

loc_000A4B36: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A4B5E; /* je: equal / zero */

loc_000A4B49: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x000A4B5Au); RECOMP_ABI_CALL(0x000A6A40u, sub_000A6A40); /* call 0x000A6A40 */

loc_000A4B5A: ;
    esi = eax;
    goto loc_000A4B60;

loc_000A4B5E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A4B60: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    if (CMP_NE(_fa, _fb)) goto loc_000A4B7E; /* jne: not equal / not zero */

loc_000A4B6C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A4B7E: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000A4B94u); RECOMP_ABI_CALL(0x000A6810u, sub_000A6810); /* call 0x000A6810 */

loc_000A4B94: ;
    ecx = esi;
    PUSH32(esp, 0x000A4B9Bu); RECOMP_ABI_CALL(0x000A5E30u, sub_000A5E30); /* call 0x000A5E30 */

loc_000A4B9B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A4BA1u); RECOMP_ABI_CALL(0x00150A47u, sub_00150A47); /* call 0x00150A47 */

loc_000A4BA1: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4BC0
 * Original: 0x000A4BC0 - 0x000A4CEA (298 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4BC0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0x000A4BD2u); RECOMP_ABI_CALL(0x000A2DC0u, sub_000A2DC0); /* call 0x000A2DC0 */

loc_000A4BD2: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000A4C29; /* jne: not equal / not zero */

loc_000A4BEE: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4BF8u); RECOMP_ABI_CALL(0x000A4760u, sub_000A4760); /* call 0x000A4760 */

loc_000A4BF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4C16; /* je: equal / zero */

loc_000A4BFF: ;
    PUSH32(esp, 3);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = 0x935B60;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x000A4C14u); RECOMP_ABI_CALL(0x000A2A80u, sub_000A2A80); /* call 0x000A2A80 */

loc_000A4C14: ;
    goto loc_000A4C34;

loc_000A4C16: ;
    eax = 0xFFFFFFFAu;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, 0x000A4C25u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4C25: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A4C29: ;
    PUSH32(esp, esi);
    ecx = 0x935B60;
    PUSH32(esp, 0x000A4C34u); RECOMP_ABI_CALL(0x000A2A40u, sub_000A2A40); /* call 0x000A2A40 */

loc_000A4C34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x38);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x935B60);
    PUSH32(esp, 0x000A4C48u); RECOMP_ABI_CALL(0x000A2E10u, sub_000A2E10); /* call 0x000A2E10 */

loc_000A4C48: ;
    ebx = MEM32(esp + 0x70);
    edx = MEM32(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    PUSH32(esp, eax);
    MEM32(ebx) = edx;
    PUSH32(esp, 0x000A4C59u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A4C59: ;
    edi = MEM32(ebx);
    ebp = MEM32(esp + 0x70);
    edx = MEM32(ebp);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = edx;
    MEM32(ebp) = edx;
    MEM8(ecx) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000A4C99; /* jbe: below or equal (unsigned <=) */

loc_000A4C73: ;
    edx = MEM32(ebx);
    edi = MEM32(ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0x280F1C;
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
    ecx = MEM32(ebx);
    esi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;

loc_000A4C99: ;
    edx = MEM32(ebx);
    eax = MEM32(ebp);
    PUSH32(esp, 0x38);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4CADu); RECOMP_ABI_CALL(0x000A4B10u, sub_000A4B10); /* call 0x000A4B10 */

loc_000A4CAD: ;
    ecx = MEM32(ebx);
    eax = MEM32(ebp);
    PUSH32(esp, 0x935B60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4CBFu); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_000A4CBF: ;
    ecx = MEM32(ebp);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = ecx;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    ecx = MEM32(esp + 0x58);
    MEM32(ebp) = esi;
    eax = MEM32(ebx);
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(ebx) = eax;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A4CE6u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4CE6: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4CF0
 * Original: 0x000A4CF0 - 0x000A4E93 (419 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4CF0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x54);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax + -4);
    MEM32(esi) = eax;
    ecx = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A4D56; /* jne: not equal / not zero */

loc_000A4D2E: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A4D38u); RECOMP_ABI_CALL(0x000A4760u, sub_000A4760); /* call 0x000A4760 */

loc_000A4D38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4D9D; /* je: equal / zero */

loc_000A4D3F: ;
    PUSH32(esp, 3);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = 0x935B60;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x000A4D54u); RECOMP_ABI_CALL(0x000A2A80u, sub_000A2A80); /* call 0x000A2A80 */

loc_000A4D54: ;
    goto loc_000A4D61;

loc_000A4D56: ;
    PUSH32(esp, edi);
    ecx = 0x935B60;
    PUSH32(esp, 0x000A4D61u); RECOMP_ABI_CALL(0x000A2A40u, sub_000A2A40); /* call 0x000A2A40 */

loc_000A4D61: ;
    PUSH32(esp, 0x38);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x935B60);
    PUSH32(esp, 0x000A4D72u); RECOMP_ABI_CALL(0x000A2E10u, sub_000A2E10); /* call 0x000A2E10 */

loc_000A4D72: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, 0x935B60);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4D83u); RECOMP_ABI_CALL(0x000A2F60u, sub_000A2F60); /* call 0x000A2F60 */

loc_000A4D83: ;
    ecx = MEM32(ebx);
    eax = MEM32(esi);
    PUSH32(esp, 0x38);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4D96u); RECOMP_ABI_CALL(0x000A2E90u, sub_000A2E90); /* call 0x000A2E90 */

loc_000A4D96: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x30)) >> 32) & 1);
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000A4DB2; /* jne: not equal / not zero */

loc_000A4D9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000A4DAEu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4DAE: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A4DB2: ;
    edx = MEM32(esi);
    SET_LO8(eax, MEM8(edx));
    edi = MEM32(ebx);
    PUSH32(esp, ebp);
    ebp = ZX8(LO8(eax));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(esp + 0x64) = LO8(eax);
    if (CMP_BE(_fa, _fb)) goto loc_000A4E6E; /* jbe: below or equal (unsigned <=) */

loc_000A4DC8: ;
    eax = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4DD2u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A4DD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000A4E6E; /* jne: not equal / not zero */

loc_000A4DDD: ;
    SET_LO8(ecx, MEM8(esp + 0x64));
    eax = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebp));
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_000A4E54; /* jbe: below or equal (unsigned <=) */

loc_000A4DEB: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edi = 0x280F1C;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_000A4E01; /* je: equal / zero */

loc_000A4DFC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_000A4E01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4E50; /* je: equal / zero */

loc_000A4E05: ;
    PUSH32(esp, 0x28124C);
    PUSH32(esp, 0x000A4E0Fu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A4E0F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_000A4E7D; /* jbe: below or equal (unsigned <=) */

loc_000A4E18: ;
    edi = MEM32(ebx);
    esi = eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x16);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(0xA)) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + 0xA);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx = SX8(LO8(ecx));
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(edx + eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x281244);
    PUSH32(esp, 0x000A4E45u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A4E45: ;
    eax = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000A4E18; /* jb: below (unsigned <) */

loc_000A4E4E: ;
    goto loc_000A4E7D;

loc_000A4E50: ;
    esi = MEM32(esp + 0x5C);

loc_000A4E54: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x000A4E6Au); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4E6A: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A4E6E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x281210);
    PUSH32(esp, 0x000A4E7Au); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A4E7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A4E7D: ;
    ecx = MEM32(esp + 0x54);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    PUSH32(esp, 0x000A4E8Fu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A4E8F: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x48)) >> 32) & 1);
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A4EA0
 * Original: 0x000A4EA0 - 0x000A4ED7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4EA0: ;
    edx = ecx;
    PUSH32(esp, 0x000A4EA7u); RECOMP_ABI_CALL(0x000A37A0u, sub_000A37A0); /* call 0x000A37A0 */

loc_000A4EA7: ;
    ecx = edx + 4;
    PUSH32(esp, 0x000A4EAFu); RECOMP_ABI_CALL(0x000A37E0u, sub_000A37E0); /* call 0x000A37E0 */

loc_000A4EAF: ;
    ecx = edx + 9;
    PUSH32(esp, 0x000A4EB7u); RECOMP_ABI_CALL(0x000A3830u, sub_000A3830); /* call 0x000A3830 */

loc_000A4EB7: ;
    ecx = edx + 0xC;
    PUSH32(esp, 0x000A4EBFu); RECOMP_ABI_CALL(0x000A3860u, sub_000A3860); /* call 0x000A3860 */

loc_000A4EBF: ;
    ecx = edx + 0x10;
    PUSH32(esp, 0x000A4EC7u); RECOMP_ABI_CALL(0x000A38A0u, sub_000A38A0); /* call 0x000A38A0 */

loc_000A4EC7: ;
    ecx = edx + 0x13;
    PUSH32(esp, 0x000A4ECFu); RECOMP_ABI_CALL(0x000A38D0u, sub_000A38D0); /* call 0x000A38D0 */

loc_000A4ECF: ;
    ecx = edx + 0x17;
    g_seh_ebp = ebp; sub_000A3910(); return; /* tail jmp 0x000A3910 */

}

/**
 * sub_000A4EE0
 * Original: 0x000A4EE0 - 0x000A4F3F (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4EE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A4EE8u); RECOMP_ABI_CALL(0x000A37B0u, sub_000A37B0); /* call 0x000A37B0 */

loc_000A4EE8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4EEC: ;
    ecx = esi + 4;
    PUSH32(esp, 0x000A4EF4u); RECOMP_ABI_CALL(0x000A3800u, sub_000A3800); /* call 0x000A3800 */

loc_000A4EF4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4EF8: ;
    ecx = esi + 9;
    PUSH32(esp, 0x000A4F00u); RECOMP_ABI_CALL(0x000A3840u, sub_000A3840); /* call 0x000A3840 */

loc_000A4F00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4F04: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x000A4F0Cu); RECOMP_ABI_CALL(0x000A3870u, sub_000A3870); /* call 0x000A3870 */

loc_000A4F0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4F10: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x000A4F18u); RECOMP_ABI_CALL(0x000A38B0u, sub_000A38B0); /* call 0x000A38B0 */

loc_000A4F18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4F1C: ;
    ecx = esi + 0x13;
    PUSH32(esp, 0x000A4F24u); RECOMP_ABI_CALL(0x000A38E0u, sub_000A38E0); /* call 0x000A38E0 */

loc_000A4F24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4F28: ;
    ecx = esi + 0x17;
    PUSH32(esp, 0x000A4F30u); RECOMP_ABI_CALL(0x000A3920u, sub_000A3920); /* call 0x000A3920 */

loc_000A4F30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A4F3B; /* je: equal / zero */

loc_000A4F34: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A4F3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4F40
 * Original: 0x000A4F40 - 0x000A4F6E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4F40: ;
    edx = MEM32(0x2803AC);
    eax = ecx;
    MEM32(eax) = edx;
    edx = MEM32(0x2803B0);
    MEM32(eax + 4) = edx;
    edx = MEM32(0x2803B4);
    MEM32(eax + 8) = edx;
    edx = MEM32(0x2803B8);
    MEM32(eax + 0xC) = edx;
    MEM8(ecx + 0x10) = 0;
    g_seh_ebp = ebp; sub_000A39B0(); return; /* tail jmp 0x000A39B0 */

}

/**
 * sub_000A4F70
 * Original: 0x000A4F70 - 0x000A4F7E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F70(void)
{

loc_000A4F70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A4F7Bu); RECOMP_ABI_CALL(0x000A39C0u, sub_000A39C0); /* call 0x000A39C0 */

loc_000A4F7B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A4F80
 * Original: 0x000A4F80 - 0x000A4FD8 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A4F80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = 0x64;
    esi = 0x280410;
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
    MEM8(esp + 0x10) = 0;
    esi = 0x280A88;
    edi = eax + 0x190;

loc_000A4FA5: ;
    ebx = MEM32(esp + 0x10);
    ebp = 3;
    edi = edi;

loc_000A4FB0: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A4FBBu); RECOMP_ABI_CALL(0x000A3BB0u, sub_000A3BB0); /* call 0x000A3BB0 */

loc_000A4FBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A4FB0; /* jne: not equal / not zero */

loc_000A4FC4: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A4FA5; /* jb: below (unsigned <) */

loc_000A4FD2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A4FE0
 * Original: 0x000A4FE0 - 0x000A502E (78 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A4FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A4FE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x24));
    eax = esp + 7;
    PUSH32(esp, eax);
    ecx = esp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A4FF9u); RECOMP_ABI_CALL(0x000A49F0u, sub_000A49F0); /* call 0x000A49F0 */

loc_000A4FF9: ;
    ecx = ZX8(MEM8(esp + 0x12));
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5012; /* je: equal / zero */

loc_000A5009: ;
    edx = ZX8(MEM8(esp + 7));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5027; /* jne: not equal / not zero */

loc_000A5012: ;
    ecx = esi;
    PUSH32(esp, 0x000A5019u); RECOMP_ABI_CALL(0x000A3C40u, sub_000A3C40); /* call 0x000A3C40 */

loc_000A5019: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5027; /* je: equal / zero */

loc_000A501D: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A5027: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A5030
 * Original: 0x000A5030 - 0x000A5088 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5030: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = 0x64;
    esi = 0x280768;
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
    MEM8(esp + 0x10) = 0;
    esi = 0x280A88;
    edi = eax + 0x190;

loc_000A5055: ;
    ebx = MEM32(esp + 0x10);
    ebp = 3;
    edi = edi;

loc_000A5060: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A506Bu); RECOMP_ABI_CALL(0x000A3C90u, sub_000A3C90); /* call 0x000A3C90 */

loc_000A506B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5060; /* jne: not equal / not zero */

loc_000A5074: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A5055; /* jb: below (unsigned <) */

loc_000A5082: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5090
 * Original: 0x000A5090 - 0x000A50DE (78 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x26));
    eax = esp + 7;
    PUSH32(esp, eax);
    ecx = esp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A50A9u); RECOMP_ABI_CALL(0x000A49F0u, sub_000A49F0); /* call 0x000A49F0 */

loc_000A50A9: ;
    ecx = ZX8(MEM8(esp + 0x12));
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50C2; /* je: equal / zero */

loc_000A50B9: ;
    edx = ZX8(MEM8(esp + 7));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A50D7; /* jne: not equal / not zero */

loc_000A50C2: ;
    ecx = esi;
    PUSH32(esp, 0x000A50C9u); RECOMP_ABI_CALL(0x000A3D20u, sub_000A3D20); /* call 0x000A3D20 */

loc_000A50C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A50D7; /* je: equal / zero */

loc_000A50CD: ;
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A50D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A50E0
 * Original: 0x000A50E0 - 0x000A52F3 (531 bytes, 165 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A50E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A50E0: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    MEM32(esp + 0x164) = eax;
    eax = MEM32(esp + 0x184);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x184);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x184);
    if (CMP_EQ(_fa, _fb)) goto loc_000A514F; /* je: equal / zero */

loc_000A510D: ;
    ecx = MEM32(esp + 0x174);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x000A5119u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000A5117u); } /* indirect call */
    }

loc_000A5119: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A514F; /* jne: not equal / not zero */

loc_000A5120: ;
    edx = MEM32(esp + 0x180);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2812A0);
    PUSH32(esp, 0x000A5132u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A5132: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFFAu;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x164);
    PUSH32(esp, 0x000A5148u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A5148: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A514F: ;
    ecx = MEM32(esp + 0x178);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5161u); RECOMP_ABI_CALL(0x000ADEB6u, sub_000ADEB6); /* call 0x000ADEB6 */

loc_000A5161: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5180; /* jne: not equal / not zero */

loc_000A5166: ;
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x164);
    PUSH32(esp, 0x000A5179u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A5179: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A5180: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5187u); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_000A5187: ;
    edx = ebx + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5190u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A5190: ;
    ebp = MEM32(esp + 0x1A0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A51B3; /* jne: not equal / not zero */

loc_000A51A1: ;
    PUSH32(esp, 0x98B214);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A51ACu); RECOMP_ABI_CALL(0x00152295u, sub_00152295); /* call 0x00152295 */

loc_000A51AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_000A51BC;

loc_000A51B3: ;
    _fa = (uint32_t)(MEM32(esp + 0x1A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1A0), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A51D5; /* jb: below (unsigned <) */

loc_000A51BC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A51F0; /* jne: not equal / not zero */

loc_000A51C0: ;
    eax = MEM32(esp + 0x184);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28127C);
    PUSH32(esp, 0x000A51D2u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A51D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A51D5: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = 0xFFFFFFF9u;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x164);
    PUSH32(esp, 0x000A51E9u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A51E9: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A51F0: ;
    PUSH32(esp, edi);
    eax = ebp + 0x19;
    ecx = ebx;
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
    edi = eax + ebx;
    ecx = 5;
    esi = 0x280390;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = MEM32(esp + 0x198);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);
    eax = esp + 0x194;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    _fb = (uint32_t)(0x17) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x17;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x19C) = ebx;
    PUSH32(esp, 0x000A5240u); RECOMP_ABI_CALL(0x000A4BC0u, sub_000A4BC0); /* call 0x000A4BC0 */

loc_000A5240: ;
    ecx = MEM32(esp + 0x1C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x1A4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5258u); RECOMP_ABI_CALL(0x000A3310u, sub_000A3310); /* call 0x000A3310 */

loc_000A5258: ;
    esi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A52C6; /* jne: not equal / not zero */

loc_000A5261: ;
    edx = MEM32(esp + 0x19C);
    eax = MEM32(esp + 0x180);
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x188);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x184);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x19C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A5298u); RECOMP_ABI_CALL(0x000A3150u, sub_000A3150); /* call 0x000A3150 */

loc_000A5298: ;
    esi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A52C6; /* jne: not equal / not zero */

loc_000A52A1: ;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A52B4u); RECOMP_ABI_CALL(0x000AE9B9u, sub_000AE9B9); /* call 0x000AE9B9 */

loc_000A52B4: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x281268);
    PUSH32(esp, 0x000A52C3u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A52C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A52C6: ;
    eax = MEM32(esp + 0x1A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000A52DB; /* jne: not equal / not zero */

loc_000A52D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000A52D8u); RECOMP_ABI_CALL(0x00150A42u, sub_00150A42); /* call 0x00150A42 */

loc_000A52D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A52DB: ;
    ecx = MEM32(esp + 0x170);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000A52ECu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A52EC: ;
    _fb = (uint32_t)(0x168) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x168;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5300
 * Original: 0x000A5300 - 0x000A5377 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5300: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x2812D0);
    PUSH32(esp, 0x000A531Cu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A531C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A532Au); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A532A: ;
    PUSH32(esp, 0x239E14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5339u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A5339: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA8C20);
    PUSH32(esp, 0x12118);
    PUSH32(esp, edx);
    PUSH32(esp, 0x281454);
    PUSH32(esp, 0x55);
    eax = esp + 0x28;
    PUSH32(esp, 0x2812BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5366u); RECOMP_ABI_CALL(0x000A50E0u, sub_000A50E0); /* call 0x000A50E0 */

loc_000A5366: ;
    ecx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A5373u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A5373: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5380
 * Original: 0x000A5380 - 0x000A53F7 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5380: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x2812D0);
    PUSH32(esp, 0x000A539Cu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A539C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A53AAu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A53AA: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A53B9u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A53B9: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA8C20);
    PUSH32(esp, 0x12118);
    PUSH32(esp, edx);
    PUSH32(esp, 0x281454);
    PUSH32(esp, 0x55);
    eax = esp + 0x28;
    PUSH32(esp, 0x2812BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A53E6u); RECOMP_ABI_CALL(0x000A50E0u, sub_000A50E0); /* call 0x000A50E0 */

loc_000A53E6: ;
    ecx = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A53F3u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A53F3: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5400
 * Original: 0x000A5400 - 0x000A5444 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5400: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x281300);
    PUSH32(esp, 0x000A5410u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A5410: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2812F8);
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x2812E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A543Fu); RECOMP_ABI_CALL(0x000A50E0u, sub_000A50E0); /* call 0x000A50E0 */

loc_000A543F: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5450
 * Original: 0x000A5450 - 0x000A5596 (326 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5450: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5460u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A5460: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000A5491; /* je: equal / zero */

loc_000A5479: ;
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A548D; /* jae: above or equal (unsigned >=) */

loc_000A5484: ;
    eax = 0xFFFFFFF9u;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A548D: ;
    MEM32(esp + 0x1C) = ecx;

loc_000A5491: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A54B3u); RECOMP_ABI_CALL(0x000A3550u, sub_000A3550); /* call 0x000A3550 */

loc_000A54B3: ;
    ebx = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5577; /* jne: not equal / not zero */

loc_000A54C0: ;
    edi = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x000A54DCu); RECOMP_ABI_CALL(0x000A35F0u, sub_000A35F0); /* call 0x000A35F0 */

loc_000A54DC: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5577; /* jne: not equal / not zero */

loc_000A54E9: ;
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A54F9u); RECOMP_ABI_CALL(0x000A4CF0u, sub_000A4CF0); /* call 0x000A4CF0 */

loc_000A54F9: ;
    ebx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5577; /* jne: not equal / not zero */

loc_000A5502: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A5522; /* jae: above or equal (unsigned >=) */

loc_000A550B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x281320);
    PUSH32(esp, 0x000A5518u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A5518: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0xFFFFFFFAu;
    goto loc_000A5577;

loc_000A5522: ;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A553Bu); RECOMP_ABI_CALL(0x000A36A0u, sub_000A36A0); /* call 0x000A36A0 */

loc_000A553B: ;
    ebx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5577; /* jne: not equal / not zero */

loc_000A5544: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A5564; /* jne: not equal / not zero */

loc_000A554C: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    goto loc_000A557F;

loc_000A5564: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5574u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_000A5574: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5577: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A558C; /* jne: not equal / not zero */

loc_000A557F: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A5589u); RECOMP_ABI_CALL(0x00150A42u, sub_00150A42); /* call 0x00150A42 */

loc_000A5589: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A558C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A55A0
 * Original: 0x000A55A0 - 0x000A5610 (112 bytes, 35 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A55A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A55A0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x28134C);
    PUSH32(esp, 0x000A55BCu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A55BC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A55CAu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A55CA: ;
    PUSH32(esp, 0x239E14);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A55D9u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A55D9: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA8C20);
    PUSH32(esp, 0x12118);
    PUSH32(esp, edx);
    PUSH32(esp, 0x281454);
    eax = esp + 0x20;
    PUSH32(esp, 0x55);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A55FFu); RECOMP_ABI_CALL(0x000A5450u, sub_000A5450); /* call 0x000A5450 */

loc_000A55FF: ;
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A560Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A560C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5610
 * Original: 0x000A5610 - 0x000A5680 (112 bytes, 35 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5610: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x281364);
    PUSH32(esp, 0x000A562Cu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A562C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A563Au); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A563A: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5649u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A5649: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA8C20);
    PUSH32(esp, 0x12118);
    PUSH32(esp, edx);
    PUSH32(esp, 0x281454);
    eax = esp + 0x20;
    PUSH32(esp, 0x55);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A566Fu); RECOMP_ABI_CALL(0x000A5450u, sub_000A5450); /* call 0x000A5450 */

loc_000A566F: ;
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A567Cu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A567C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5680
 * Original: 0x000A5680 - 0x000A56BD (61 bytes, 23 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5680: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x281384);
    PUSH32(esp, 0x000A5690u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A5690: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2812F8);
    PUSH32(esp, 0x55);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A56B8u); RECOMP_ABI_CALL(0x000A5450u, sub_000A5450); /* call 0x000A5450 */

loc_000A56B8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A56C0
 * Original: 0x000A56C0 - 0x000A5733 (115 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A56C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A56C0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x2813A4);
    PUSH32(esp, 0x000A56DCu); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A56DC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A56EAu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A56EA: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A56F9u); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A56F9: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA8CB0);
    PUSH32(esp, 0xF200);
    PUSH32(esp, edx);
    PUSH32(esp, 0x281454);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5722u); RECOMP_ABI_CALL(0x000A5450u, sub_000A5450); /* call 0x000A5450 */

loc_000A5722: ;
    ecx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    PUSH32(esp, 0x000A572Fu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A572F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5740
 * Original: 0x000A5740 - 0x000A57FB (187 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5740: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x000A575Bu); RECOMP_ABI_CALL(0x000A3F80u, sub_000A3F80); /* call 0x000A3F80 */

loc_000A575B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A57ED; /* jne: not equal / not zero */

loc_000A5766: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A5773u); RECOMP_ABI_CALL(0x000A5380u, sub_000A5380); /* call 0x000A5380 */

loc_000A5773: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A57A2; /* je: equal / zero */

loc_000A577C: ;
    PUSH32(esp, 0x2813C0);
    PUSH32(esp, 0x000A5786u); RECOMP_ABI_CALL(0x000695B0u, sub_000695B0); /* call 0x000695B0 */

loc_000A5786: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A578Du); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A578D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x000A579Eu); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A579E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A57A2: ;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A57ADu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A57AD: ;
    PUSH32(esp, 0x2811B0);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A57BCu); RECOMP_ABI_CALL(0x000A9D9Fu, sub_000A9D9F); /* call 0x000A9D9F */

loc_000A57BC: ;
    edx = MEM32(esp + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xA8CB0);
    PUSH32(esp, 0xF200);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x281454);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, 0x2812BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A57E8u); RECOMP_ABI_CALL(0x000A50E0u, sub_000A50E0); /* call 0x000A50E0 */

loc_000A57E8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000A57ED: ;
    ecx = MEM32(esp + 0x28);
    POP32(esp, esi);
    PUSH32(esp, 0x000A57F7u); RECOMP_ABI_CALL(0x00150375u, sub_00150375); /* call 0x00150375 */

loc_000A57F7: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5800
 * Original: 0x000A5800 - 0x000A5810 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x000A580Cu); RECOMP_ABI_CALL(0x000A4170u, sub_000A4170); /* call 0x000A4170 */

loc_000A580C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5810
 * Original: 0x000A5810 - 0x000A584E (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5810: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A581E; /* je: equal / zero */

loc_000A5818: ;
    MEM32(eax) = 0;

loc_000A581E: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(ecx) = 0;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x55);
    PUSH32(esp, 0x000A584Au); RECOMP_ABI_CALL(0x000A4260u, sub_000A4260); /* call 0x000A4260 */

loc_000A584A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5850
 * Original: 0x000A5850 - 0x000A588F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5850: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A585Au); RECOMP_ABI_CALL(0x000A4850u, sub_000A4850); /* call 0x000A4850 */

loc_000A585A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000A5862u); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_000A5862: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000A587B; /* je: equal / zero */

loc_000A5867: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(0x935B54));
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000A5877u); RECOMP_ABI_CALL(0x000A48A0u, sub_000A48A0); /* call 0x000A48A0 */

loc_000A5877: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A587B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(0x935B54));
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A588Bu); RECOMP_ABI_CALL(0x000A48A0u, sub_000A48A0); /* call 0x000A48A0 */

loc_000A588B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5890
 * Original: 0x000A5890 - 0x000A58CF (63 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5890: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A58CC; /* jae: above or equal (unsigned >=) */

loc_000A5898: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xF (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A58CC; /* jae: above or equal (unsigned >=) */

loc_000A58A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A58CC; /* je: equal / zero */

loc_000A58A5: ;
    if (CMP_BE(_fa, _fb)) goto loc_000A58AD; /* jbe: below or equal (unsigned <=) */

loc_000A58A7: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, LO8(edx));

loc_000A58AD: ;
    PUSH32(esp, esi);
    esi = ZX8(LO8(eax));
    edx = esi + 1;
    eax = esi + 2;
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A58CC: ;
    SET_LO8(eax, 0x69);
    esp += 4; return; /* ret */

}

/**
 * sub_000A58D0
 * Original: 0x000A58D0 - 0x000A59BB (235 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A58D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A58D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 0x898;
    ecx = 0x64;
    esi = 0x2805A0;
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
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x10) = 0;
    esi = 0x280A88;
    edi = eax + 0xA28;
    /* nop */

loc_000A5900: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A590Au); RECOMP_ABI_CALL(0x000A4A40u, sub_000A4A40); /* call 0x000A4A40 */

loc_000A590A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5911u); RECOMP_ABI_CALL(0x000A5890u, sub_000A5890); /* call 0x000A5890 */

loc_000A5911: ;
    MEM8(esp + 0x20) = LO8(eax);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 3;

loc_000A5921: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A592Cu); RECOMP_ABI_CALL(0x000A3C20u, sub_000A3C20); /* call 0x000A3C20 */

loc_000A592C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5921; /* jne: not equal / not zero */

loc_000A5935: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A5900; /* jb: below (unsigned <) */

loc_000A5943: ;
    ebp = MEM32(esp + 0x18);
    esi = 0x280B40;
    edi = ebp + 0x1130;
    ebx = 0x1E;

loc_000A5957: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000A5967u); RECOMP_ABI_CALL(0x000A3C20u, sub_000A3C20); /* call 0x000A3C20 */

loc_000A5967: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5957; /* jne: not equal / not zero */

loc_000A5970: ;
    edi = ebp + 0x15E0;
    _fb = (uint32_t)(0x1600) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x1600;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 8;
    esi = 0x280730;
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
    eax = MEM32(0x280750);
    MEM32(ebp) = eax;
    ecx = MEM32(0x280754);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(0x280758);
    MEM32(ebp + 8) = edx;
    eax = MEM32(0x28075C);
    MEM32(ebp + 0xC) = eax;
    ecx = MEM32(0x280760);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x10) = ecx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A59C0
 * Original: 0x000A59C0 - 0x000A5AD8 (280 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A59C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A59C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    edi = edi;

loc_000A59D0: ;
    ecx = edi;
    PUSH32(esp, 0x000A59D7u); RECOMP_ABI_CALL(0x000A3BD0u, sub_000A3BD0); /* call 0x000A3BD0 */

loc_000A59D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5AC9; /* je: equal / zero */

loc_000A59DF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A59D0; /* jb: below (unsigned <) */

loc_000A59E8: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x190;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A59F1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;

loc_000A59F5: ;
    ecx = edi;
    PUSH32(esp, 0x000A59FCu); RECOMP_ABI_CALL(0x000A3BD0u, sub_000A3BD0); /* call 0x000A3BD0 */

loc_000A59FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5AD0; /* je: equal / zero */

loc_000A5A04: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A59F5; /* jb: below (unsigned <) */

loc_000A5A0D: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A59F1; /* jb: below (unsigned <) */

loc_000A5A16: ;
    ebp = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x898;

loc_000A5A22: ;
    ecx = edi;
    PUSH32(esp, 0x000A5A29u); RECOMP_ABI_CALL(0x000A3C40u, sub_000A3C40); /* call 0x000A3C40 */

loc_000A5A29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5AD0; /* je: equal / zero */

loc_000A5A31: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5A22; /* jb: below (unsigned <) */

loc_000A5A3A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5A42: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;

loc_000A5A46: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A5A4Eu); RECOMP_ABI_CALL(0x000A4FE0u, sub_000A4FE0); /* call 0x000A4FE0 */

loc_000A5A4E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5AD0; /* je: equal / zero */

loc_000A5A56: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5A46; /* jb: below (unsigned <) */

loc_000A5A5F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5A42; /* jb: below (unsigned <) */

loc_000A5A68: ;
    ebx = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 0x1130;

loc_000A5A74: ;
    ecx = edi;
    PUSH32(esp, 0x000A5A7Bu); RECOMP_ABI_CALL(0x000A3C40u, sub_000A3C40); /* call 0x000A3C40 */

loc_000A5A7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5AD0; /* je: equal / zero */

loc_000A5A7F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5A74; /* jb: below (unsigned <) */

loc_000A5A88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x15E0;

loc_000A5A90: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18B820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x18B820 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A5AD0; /* ja: above (unsigned >) */

loc_000A5A98: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5A90; /* jb: below (unsigned <) */

loc_000A5AA1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0x1600;
    /* nop */

loc_000A5AB0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18B820) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x18B820 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A5AD0; /* ja: above (unsigned >) */

loc_000A5AB8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5AB0; /* jb: below (unsigned <) */

loc_000A5AC1: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A5AC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A5AD0: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5AE0
 * Original: 0x000A5AE0 - 0x000A5B88 (168 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5AE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edi = eax + 0x898;
    ecx = 0x64;
    esi = 0x2808F8;
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
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x10) = 0;
    esi = 0x280A88;
    edi = eax + 0xA28;
    /* nop */

loc_000A5B10: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5B1Au); RECOMP_ABI_CALL(0x000A4A40u, sub_000A4A40); /* call 0x000A4A40 */

loc_000A5B1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5B21u); RECOMP_ABI_CALL(0x000A5890u, sub_000A5890); /* call 0x000A5890 */

loc_000A5B21: ;
    MEM8(esp + 0x20) = LO8(eax);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 3;

loc_000A5B31: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A5B3Cu); RECOMP_ABI_CALL(0x000A3CF0u, sub_000A3CF0); /* call 0x000A3CF0 */

loc_000A5B3C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5B31; /* jne: not equal / not zero */

loc_000A5B45: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xF (8-bit) */
    MEM8(esp + 0x10) = LO8(eax);
    if (CMP_B(_fa, _fb)) goto loc_000A5B10; /* jb: below (unsigned <) */

loc_000A5B53: ;
    edi = MEM32(esp + 0x18);
    esi = 0x280B40;
    _fb = (uint32_t)(0x1130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1130;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x1E;

loc_000A5B67: ;
    edx = MEM32(esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000A5B77u); RECOMP_ABI_CALL(0x000A3CF0u, sub_000A3CF0); /* call 0x000A3CF0 */

loc_000A5B77: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5B67; /* jne: not equal / not zero */

loc_000A5B80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5B90
 * Original: 0x000A5B90 - 0x000A5C6B (219 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5B90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    edi = edi;

loc_000A5BA0: ;
    ecx = edi;
    PUSH32(esp, 0x000A5BA7u); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_000A5BA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C5C; /* je: equal / zero */

loc_000A5BAF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5BA0; /* jb: below (unsigned <) */

loc_000A5BB8: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x190;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A5BC1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;

loc_000A5BC5: ;
    ecx = edi;
    PUSH32(esp, 0x000A5BCCu); RECOMP_ABI_CALL(0x000A3CC0u, sub_000A3CC0); /* call 0x000A3CC0 */

loc_000A5BCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C63; /* je: equal / zero */

loc_000A5BD4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5BC5; /* jb: below (unsigned <) */

loc_000A5BDD: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x78;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5BC1; /* jb: below (unsigned <) */

loc_000A5BE6: ;
    ebp = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + 0x898;

loc_000A5BF2: ;
    ecx = edi;
    PUSH32(esp, 0x000A5BF9u); RECOMP_ABI_CALL(0x000A3D20u, sub_000A3D20); /* call 0x000A3D20 */

loc_000A5BF9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C63; /* je: equal / zero */

loc_000A5BFD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5BF2; /* jb: below (unsigned <) */

loc_000A5C06: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xA28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA28;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_000A5C10: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;

loc_000A5C14: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000A5C1Cu); RECOMP_ABI_CALL(0x000A5090u, sub_000A5090); /* call 0x000A5090 */

loc_000A5C1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C63; /* je: equal / zero */

loc_000A5C20: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5C14; /* jb: below (unsigned <) */

loc_000A5C29: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5C10; /* jb: below (unsigned <) */

loc_000A5C32: ;
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1130) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1130;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_000A5C40: ;
    ecx = edi;
    PUSH32(esp, 0x000A5C47u); RECOMP_ABI_CALL(0x000A3D20u, sub_000A3D20); /* call 0x000A3D20 */

loc_000A5C47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5C63; /* je: equal / zero */

loc_000A5C4B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5C40; /* jb: below (unsigned <) */

loc_000A5C54: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A5C5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A5C63: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5C70
 * Original: 0x000A5C70 - 0x000A5C8B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5C70: ;
    SET_LO8(ecx, MEM8(0x935B54));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A5C81u); RECOMP_ABI_CALL(0x000A4830u, sub_000A4830); /* call 0x000A4830 */

loc_000A5C81: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A5C87u); RECOMP_ABI_CALL(0x000A5850u, sub_000A5850); /* call 0x000A5850 */

loc_000A5C87: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A5C90
 * Original: 0x000A5C90 - 0x000A5CC5 (53 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5C98u); RECOMP_ABI_CALL(0x000A59C0u, sub_000A59C0); /* call 0x000A59C0 */

loc_000A5C98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5CC1; /* je: equal / zero */

loc_000A5C9C: ;
    ecx = esi + 0x1614;
    PUSH32(esp, 0x000A5CA7u); RECOMP_ABI_CALL(0x000A5B90u, sub_000A5B90); /* call 0x000A5B90 */

loc_000A5CA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5CC1; /* je: equal / zero */

loc_000A5CAB: ;
    ecx = esi + 0x2BF4;
    PUSH32(esp, 0x000A5CB6u); RECOMP_ABI_CALL(0x000A3D90u, sub_000A3D90); /* call 0x000A3D90 */

loc_000A5CB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5CC1; /* je: equal / zero */

loc_000A5CBA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5CC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5CD0
 * Original: 0x000A5CD0 - 0x000A5CE0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5CD8u); RECOMP_ABI_CALL(0x000A4F80u, sub_000A4F80); /* call 0x000A4F80 */

loc_000A5CD8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A58D0(); return; /* tail jmp 0x000A58D0 */

}

/**
 * sub_000A5CE0
 * Original: 0x000A5CE0 - 0x000A5CF0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5CE8u); RECOMP_ABI_CALL(0x000A5030u, sub_000A5030); /* call 0x000A5030 */

loc_000A5CE8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A5AE0(); return; /* tail jmp 0x000A5AE0 */

}

/**
 * sub_000A5D20
 * Original: 0x000A5D20 - 0x000A5DAD (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5D20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi + 0x1E;
    /* nop */

loc_000A5D30: ;
    PUSH32(esp, 0x000A5D35u); RECOMP_ABI_CALL(0x000A3970u, sub_000A3970); /* call 0x000A3970 */

loc_000A5D35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA3; /* je: equal / zero */

loc_000A5D39: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A5D30; /* jb: below (unsigned <) */

loc_000A5D42: ;
    ecx = edi;
    PUSH32(esp, 0x000A5D49u); RECOMP_ABI_CALL(0x000A4EE0u, sub_000A4EE0); /* call 0x000A4EE0 */

loc_000A5D49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D4D: ;
    ecx = edi + 0x1A;
    PUSH32(esp, 0x000A5D55u); RECOMP_ABI_CALL(0x000A3950u, sub_000A3950); /* call 0x000A3950 */

loc_000A5D55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D59: ;
    ecx = edi + 0x6E;
    PUSH32(esp, 0x000A5D61u); RECOMP_ABI_CALL(0x000A3B60u, sub_000A3B60); /* call 0x000A3B60 */

loc_000A5D61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D65: ;
    ecx = edi + 0x6F;
    PUSH32(esp, 0x000A5D6Du); RECOMP_ABI_CALL(0x000A3B80u, sub_000A3B80); /* call 0x000A3B80 */

loc_000A5D6D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D71: ;
    ecx = edi + 0x74;
    PUSH32(esp, 0x000A5D79u); RECOMP_ABI_CALL(0x000A5C90u, sub_000A5C90); /* call 0x000A5C90 */

loc_000A5D79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D7D: ;
    ecx = edi + 0x2E48;
    PUSH32(esp, 0x000A5D88u); RECOMP_ABI_CALL(0x000A3E40u, sub_000A3E40); /* call 0x000A3E40 */

loc_000A5D88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D8C: ;
    ecx = edi + 0x2F0C;
    PUSH32(esp, 0x000A5D97u); RECOMP_ABI_CALL(0x000A3EE0u, sub_000A3EE0); /* call 0x000A3EE0 */

loc_000A5D97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A5DA8; /* je: equal / zero */

loc_000A5D9B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5DA3: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A5DA8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5DB0
 * Original: 0x000A5DB0 - 0x000A5DCF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5DB8u); RECOMP_ABI_CALL(0x000A5CD0u, sub_000A5CD0); /* call 0x000A5CD0 */

loc_000A5DB8: ;
    ecx = esi + 0x1614;
    PUSH32(esp, 0x000A5DC3u); RECOMP_ABI_CALL(0x000A5CE0u, sub_000A5CE0); /* call 0x000A5CE0 */

loc_000A5DC3: ;
    ecx = esi + 0x2BF4;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A3D50(); return; /* tail jmp 0x000A3D50 */

}

/**
 * sub_000A5DD0
 * Original: 0x000A5DD0 - 0x000A5E23 (83 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A5DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A5DD8u); RECOMP_ABI_CALL(0x000A4EA0u, sub_000A4EA0); /* call 0x000A4EA0 */

loc_000A5DD8: ;
    ecx = esi + 0x1A;
    PUSH32(esp, 0x000A5DE0u); RECOMP_ABI_CALL(0x000A3940u, sub_000A3940); /* call 0x000A3940 */

loc_000A5DE0: ;
    ecx = esi + 0x6E;
    PUSH32(esp, 0x000A5DE8u); RECOMP_ABI_CALL(0x000A3B40u, sub_000A3B40); /* call 0x000A3B40 */

loc_000A5DE8: ;
    ecx = esi + 0x6F;
    PUSH32(esp, 0x000A5DF0u); RECOMP_ABI_CALL(0x000A3B70u, sub_000A3B70); /* call 0x000A3B70 */

loc_000A5DF0: ;
    ecx = esi + 0x74;
    PUSH32(esp, 0x000A5DF8u); RECOMP_ABI_CALL(0x000A5DB0u, sub_000A5DB0); /* call 0x000A5DB0 */

loc_000A5DF8: ;
    ecx = esi + 0x2E48;
    PUSH32(esp, 0x000A5E03u); RECOMP_ABI_CALL(0x000A3DA0u, sub_000A3DA0); /* call 0x000A3DA0 */

loc_000A5E03: ;
    ecx = esi + 0x2F0C;
    PUSH32(esp, 0x000A5E0Eu); RECOMP_ABI_CALL(0x000A3ED0u, sub_000A3ED0); /* call 0x000A3ED0 */

loc_000A5E0E: ;
    ecx = esi + 0x1E;
    esi = 4;

loc_000A5E16: ;
    PUSH32(esp, 0x000A5E1Bu); RECOMP_ABI_CALL(0x000A4F40u, sub_000A4F40); /* call 0x000A4F40 */

loc_000A5E1B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A5E16; /* jne: not equal / not zero */

loc_000A5E21: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A5E30
 * Original: 0x000A5E30 - 0x000A5E31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5E30(void)
{

loc_000A5E30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A5E40
 * Original: 0x000A5E40 - 0x000A620A (970 bytes, 262 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A5E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A5E40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = MEM32(esi);
    edx = edx ^ ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = edx;
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(ecx + edi * 4 + 0x48);
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4 + 0x448);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 4);
    edi = ZX8(HI8(edx));
    eax = eax ^ MEM32(ecx + edi * 4 + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ecx + edi * 4 + 0xC48);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi);
    eax = eax ^ ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x14) = edx;
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x14) = eax;
    ebx = ZX8(LO8(ebx));
    ebp = eax;
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x14) = edx;
    ebx = ZX8(LO8(ebx));
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x40);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ecx + 0x44);
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = edx;
    POP32(esp, edi);
    MEM32(esi) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6210
 * Original: 0x000A6210 - 0x000A65DA (970 bytes, 262 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6210: ;
    PUSH32(esp, ebx);
    edx = MEM32(ecx + 0x44);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = edx ^ MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = edx;
    edi = edi >> 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = MEM32(ecx + edi * 4 + 0x48);
    eax = edx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(LO8(eax));
    eax = MEM32(ecx + eax * 4 + 0x448);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 0x40);
    edi = ZX8(HI8(edx));
    eax = eax ^ MEM32(ecx + edi * 4 + 0x848);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ecx + edi * 4 + 0xC48);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edi);
    eax = eax ^ ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x38);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x34);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x14) = edx;
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x14) = eax;
    ebx = ZX8(LO8(ebx));
    ebp = eax;
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = edx;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = eax;
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = edx;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x14) = edx;
    ebx = ZX8(LO8(ebx));
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(edx));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edx;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx ^ MEM32(ecx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ZX8(LO8(ebx));
    ebx = MEM32(ecx + ebx * 4 + 0x448);
    ebp = eax;
    ebp = ebp >> 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0x48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ZX8(HI8(eax));
    ebx = ebx ^ MEM32(ecx + ebp * 4 + 0x848);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = eax;
    ebp = ebp & 0xFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + ebp * 4 + 0xC48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(ecx + ebp * 4 + 0xC48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    ebx = ebx ^ ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = ecx;
    MEM32(edi) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 8) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A65E0
 * Original: 0x000A65E0 - 0x000A6620 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A65E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A65E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp;
    ecx = 0x12;
    esi = 0x2F27F0;
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
    edi = ebp + 0x48;
    ecx = 0x400;
    esi = 0x2F2838;
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
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = ebp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = 3;
    /* nop */

    g_seh_ebp = ebp; sub_000A6620(); return; /* fallthrough 0x000A6620 */

}

/**
 * sub_000A6620
 * Original: 0x000A6620 - 0x000A67F4 (468 bytes, 182 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6620: ;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_HI8(ebx, MEM8(ecx + edi));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 4;
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) ^ ebx;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = edx;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_HI8(ebx, MEM8(ecx + edi));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 4;
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -4) = MEM32(ebp + -4) ^ ebx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = edx;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_HI8(ebx, MEM8(ecx + edi));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 4;
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp) = MEM32(ebp) ^ ebx;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = edx;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    SET_HI8(ebx, MEM8(ecx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 4;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -20);
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -20) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = edx;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_HI8(ebx, MEM8(ecx + edi));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ecx + 4;
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -16);
    edx = edx ^ ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -16) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = edx;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = ecx + 2;
    ebx = ZX8(MEM8(edx + edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    SET_HI8(ebx, MEM8(ecx + edi));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ZX8(MEM8(edx + edi));
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx + 3;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    eax = MEM32(ebp + -12);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ZX8(MEM8(edx + edi));
    ebx = ebx | edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = eax;
    eax = ecx + 4;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    if ((_fa != 0)) goto loc_000A6620; /* jne: not equal / not zero */

loc_000A6780: ;
    ecx = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = esi;
    edi = edi;

loc_000A6790: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A679Fu); RECOMP_ABI_CALL(0x000A5E40u, sub_000A5E40); /* call 0x000A5E40 */

loc_000A679F: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + esi * 4) = eax;
    MEM32(ecx + esi * 4 + 4) = edx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A6790; /* jl: less (signed <) */

loc_000A67B6: ;
    esi = ecx + 0x4C;
    ebx = 4;
    edi = edi;

loc_000A67C0: ;
    edi = 0x80;

loc_000A67C5: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A67D4u); RECOMP_ABI_CALL(0x000A5E40u, sub_000A5E40); /* call 0x000A5E40 */

loc_000A67D4: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + -4) = eax;
    MEM32(esi) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A67C5; /* jne: not equal / not zero */

loc_000A67E7: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A67C0; /* jne: not equal / not zero */

loc_000A67EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6800
 * Original: 0x000A6800 - 0x000A680B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6800: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6810
 * Original: 0x000A6810 - 0x000A697A (362 bytes, 130 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A6810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6829u); RECOMP_ABI_CALL(0x000A6800u, sub_000A6800); /* call 0x000A6800 */

loc_000A6829: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + 0xC);
    edx = ecx;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000A68D8; /* jne: not equal / not zero */

loc_000A684A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6887; /* jbe: below or equal (unsigned <=) */

loc_000A684E: ;
    esi = ecx;

loc_000A6850: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = esp + 0x1C;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6870u); RECOMP_ABI_CALL(0x000A5E40u, sub_000A5E40); /* call 0x000A5E40 */

loc_000A6870: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A6850; /* jne: not equal / not zero */

loc_000A6883: ;
    edx = MEM32(esp + 0x14);

loc_000A6887: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A696D; /* jbe: below or equal (unsigned <=) */

loc_000A688F: ;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ebx;
    edi = esp + 0x18;
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
    ecx = 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + edx * 4 + 0x18;
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
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A68D3u); RECOMP_ABI_CALL(0x000A5E40u, sub_000A5E40); /* call 0x000A5E40 */

loc_000A68D3: ;
    goto loc_000A6960;

loc_000A68D8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A691A; /* jbe: below or equal (unsigned <=) */

loc_000A68DC: ;
    edi = ecx;
    edi = edi;

loc_000A68E0: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6900u); RECOMP_ABI_CALL(0x000A6210u, sub_000A6210); /* call 0x000A6210 */

loc_000A6900: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A68E0; /* jne: not equal / not zero */

loc_000A6916: ;
    edx = MEM32(esp + 0x14);

loc_000A691A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A696D; /* jbe: below or equal (unsigned <=) */

loc_000A691E: ;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esp + 0x18;
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
    ecx = 8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esp + edx * 4 + 0x18;
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
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6960u); RECOMP_ABI_CALL(0x000A6210u, sub_000A6210); /* call 0x000A6210 */

loc_000A6960: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;

loc_000A696D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A6980
 * Original: 0x000A6980 - 0x000A6A3F (191 bytes, 74 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000A6980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000A69EC; /* jne: not equal / not zero */

loc_000A699A: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6A36; /* jbe: below or equal (unsigned <=) */

loc_000A69A5: ;
    edi = eax + -1;
    edi = edi >> 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_000A69B0: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A69D0u); RECOMP_ABI_CALL(0x000A6210u, sub_000A6210); /* call 0x000A6210 */

loc_000A69D0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A69B0; /* jne: not equal / not zero */

loc_000A69E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_000A69EC: ;
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6A36; /* jbe: below or equal (unsigned <=) */

loc_000A69F3: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx >> 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000A6A00;

    /* nop */

loc_000A6A00: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = esp + 0x14;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000A6A20u); RECOMP_ABI_CALL(0x000A6210u, sub_000A6210); /* call 0x000A6210 */

loc_000A6A20: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000A6A00; /* jne: not equal / not zero */

loc_000A6A36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000A6A40
 * Original: 0x000A6A40 - 0x000A6A5A (26 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A40(void)
{

loc_000A6A40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000A6A54u); RECOMP_ABI_CALL(0x000A65E0u, sub_000A65E0); /* call 0x000A65E0 */

loc_000A6A54: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6A60
 * Original: 0x000A6A60 - 0x000A6A6E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6A60: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 3) = LO8(eax);
    MEM8(ecx + 2) = LO8(eax);
    MEM8(ecx + 1) = LO8(eax);
    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6A70
 * Original: 0x000A6A70 - 0x000A6A84 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6A70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000A6A72: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x64 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A6A81; /* ja: above (unsigned >) */

loc_000A6A77: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6A72; /* jb: below (unsigned <) */

loc_000A6A7E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000A6A81: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6A90
 * Original: 0x000A6A90 - 0x000A6B3E (174 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6A90(void)
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

loc_000A6A90: ;
    SET_LO8(eax, MEM8(ecx));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6AA1; /* jne: not equal / not zero */

loc_000A6A99: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_000A6AB1;

loc_000A6AA1: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_000A6AB1: ;
    eax = ecx + 1;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6AC6; /* jne: not equal / not zero */

loc_000A6ABE: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_000A6AD6;

loc_000A6AC6: ;
    ecx = ZX8(LO8(ecx));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_000A6AD6: ;
    SET_LO8(ecx, MEM8(eax + 1));
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6AEA; /* jne: not equal / not zero */

loc_000A6AE2: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_000A6AFA;

loc_000A6AEA: ;
    edx = ZX8(LO8(ecx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_000A6AFA: ;
    SET_LO8(eax, MEM8(eax + 1));
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6B0D; /* jne: not equal / not zero */

loc_000A6B05: ;
    fp_push(MEMF(0x235A58)); /* fld float */
    goto loc_000A6B1D;

loc_000A6B0D: ;
    eax = ZX8(LO8(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x239D28)); /* fmul dword ptr [0x239d28] */

loc_000A6B1D: ;
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6B3Au); RECOMP_ABI_CALL(0x000840B0u, sub_000840B0); /* call 0x000840B0 */

loc_000A6B3A: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A6B40
 * Original: 0x000A6B40 - 0x000A6B4D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6B40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    g_seh_ebp = ebp; sub_000A6A60(); return; /* tail jmp 0x000A6A60 */

}

/**
 * sub_000A6B50
 * Original: 0x000A6B50 - 0x000A6B6E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A6B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B50: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), 0xA (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6B6B; /* jae: above or equal (unsigned >=) */

loc_000A6B56: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), 2 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6B6B; /* jae: above or equal (unsigned >=) */

loc_000A6B5C: ;
    PUSH32(esp, 0x000A6B61u); RECOMP_ABI_CALL(0x000A6A70u, sub_000A6A70); /* call 0x000A6A70 */

loc_000A6B61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6B6B; /* je: equal / zero */

loc_000A6B65: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A6B6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B70
 * Original: 0x000A6B70 - 0x000A6B93 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6B70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM16(ecx + 0x24) = 0x7530;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6B72
 * Original: 0x000A6B72 - 0x000A6B93 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6B72(void)
{

loc_000A6B72: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM16(ecx + 0x24) = 0x7530;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6BA0
 * Original: 0x000A6BA0 - 0x000A6BAE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6BA0(void)
{

loc_000A6BA0: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6BB0
 * Original: 0x000A6BB0 - 0x000A6BB9 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6BB0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6BC0
 * Original: 0x000A6BC0 - 0x000A6C01 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6BC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A6BFD; /* ja: above (unsigned >) */

loc_000A6BCB: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF423F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0xF423F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A6BFD; /* ja: above (unsigned >) */

loc_000A6BD4: ;
    ecx = esi + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6BDDu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A6BDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6BFD; /* jae: above or equal (unsigned >=) */

loc_000A6BE2: ;
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6BEBu); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_000A6BEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6BFD; /* jge: greater or equal (signed >=) */

loc_000A6BF0: ;
    _fa = (uint32_t)(MEM8(esi + 0x54)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x54), 0x19 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6BFD; /* jae: above or equal (unsigned >=) */

loc_000A6BF6: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A6BFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6C10
 * Original: 0x000A6C10 - 0x000A6C48 (56 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6C10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0xABE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0xABE0), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6C3C; /* jbe: below or equal (unsigned <=) */

loc_000A6C20: ;
    ebx = edi;

loc_000A6C22: ;
    ecx = ebx;
    PUSH32(esp, 0x000A6C29u); RECOMP_ABI_CALL(0x000A6BC0u, sub_000A6BC0); /* call 0x000A6BC0 */

loc_000A6C29: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6C42; /* je: equal / zero */

loc_000A6C2D: ;
    eax = ZX16(MEM16(edi + 0xABE0));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x58;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6C22; /* jb: below (unsigned <) */

loc_000A6C3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000A6C42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6C50
 * Original: 0x000A6C50 - 0x000A6C62 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6C50: ;
    eax = ZX16(MEM16(ecx + 0xABE0));
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6C70
 * Original: 0x000A6C70 - 0x000A6CB4 (68 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6C70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0xABE0));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000A6CA1; /* jbe: below or equal (unsigned <=) */

loc_000A6C80: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    edx = ecx;
    /* nop */

loc_000A6C90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6C99; /* jne: not equal / not zero */

loc_000A6C94: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CA9; /* je: equal / zero */

loc_000A6C99: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6C90; /* jb: below (unsigned <) */

loc_000A6CA1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A6CA9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6CC0
 * Original: 0x000A6CC0 - 0x000A6D04 (68 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6CC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0xABE0));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_000A6CF1; /* jbe: below or equal (unsigned <=) */

loc_000A6CD0: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    edx = ecx;
    /* nop */

loc_000A6CE0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6CE9; /* jne: not equal / not zero */

loc_000A6CE4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6CF9; /* je: equal / zero */

loc_000A6CE9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6CE0; /* jb: below (unsigned <) */

loc_000A6CF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000A6CF9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A6D10
 * Original: 0x000A6D10 - 0x000A6D34 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0xABE0)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xABE0), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6D33; /* jbe: below or equal (unsigned <=) */

loc_000A6D1B: ;
    edx = ecx + 0x55;
    PUSH32(esp, esi);
    /* nop */

loc_000A6D20: ;
    MEM8(edx) = 0;
    esi = ZX16(MEM16(ecx + 0xABE0));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x58;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A6D20; /* jb: below (unsigned <) */

loc_000A6D32: ;
    POP32(esp, esi);

loc_000A6D33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6D40
 * Original: 0x000A6D40 - 0x000A6D8C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6D40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000A6D50u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_000A6D50: ;
    ecx = esi + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6D59u); RECOMP_ABI_CALL(0x000A4760u, sub_000A4760); /* call 0x000A4760 */

loc_000A6D59: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x236518);
    PUSH32(esp, esi);
    MEM32(esi + 0x46) = edx;
    MEM32(esi + 0x4A) = eax;
    PUSH32(esp, 0x000A6D75u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A6D75: ;
    PUSH32(esp, 0x236518);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A6D83u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A6D83: ;
    MEM8(esi + 0x4E) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6D90
 * Original: 0x000A6D90 - 0x000A6DCE (62 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6D99u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A6D99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6DC8; /* jae: above or equal (unsigned >=) */

loc_000A6D9E: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6DA7u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A6DA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6DC8; /* jge: greater or equal (signed >=) */

loc_000A6DAC: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6DBF; /* je: equal / zero */

loc_000A6DB4: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6DBBu); RECOMP_ABI_CALL(0x000A9C71u, sub_000A9C71); /* call 0x000A9C71 */

loc_000A6DBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A6DC8; /* jne: not equal / not zero */

loc_000A6DBF: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000A6DC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A6DD0
 * Original: 0x000A6DD0 - 0x000A6E4D (125 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x000A6DE5u); RECOMP_ABI_CALL(0x000A9C44u, sub_000A9C44); /* call 0x000A9C44 */

loc_000A6DE5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000A6E31; /* ja: above (unsigned >) */

loc_000A6DEB: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xA6E50); /* switch: 8 entries, 8 targets */
    if (_jt == 0x000A6DF2u) goto loc_000A6DF2;
    if (_jt == 0x000A6DF8u) goto loc_000A6DF8;
    if (_jt == 0x000A6DFEu) goto loc_000A6DFE;
    if (_jt == 0x000A6E04u) goto loc_000A6E04;
    if (_jt == 0x000A6E0Au) goto loc_000A6E0A;
    if (_jt == 0x000A6E10u) goto loc_000A6E10;
    if (_jt == 0x000A6E16u) goto loc_000A6E16;
    if (_jt == 0x000A6E1Cu) goto loc_000A6E1C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000A6DF2: ;
    MEM8(esi + 0xE) = 2;
    goto loc_000A6E35;

loc_000A6DF8: ;
    MEM8(esi + 0xE) = 5;
    goto loc_000A6E35;

loc_000A6DFE: ;
    MEM8(esi + 0xE) = 4;
    goto loc_000A6E35;

loc_000A6E04: ;
    MEM8(esi + 0xE) = 0xA;
    goto loc_000A6E35;

loc_000A6E0A: ;
    MEM8(esi + 0xE) = 7;
    goto loc_000A6E35;

loc_000A6E10: ;
    MEM8(esi + 0xE) = 0x11;
    goto loc_000A6E35;

loc_000A6E16: ;
    MEM8(esi + 0xE) = 0x14;
    goto loc_000A6E35;

loc_000A6E1C: ;
    PUSH32(esp, 0x000A6E21u); RECOMP_ABI_CALL(0x000AEC65u, sub_000AEC65); /* call 0x000AEC65 */

loc_000A6E21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0xE) = LO8(eax);
    goto loc_000A6E35;

loc_000A6E31: ;
    MEM8(esi + 0xE) = 0;

loc_000A6E35: ;
    ecx = esi + 8;
    PUSH32(esp, 0x000A6E3Du); RECOMP_ABI_CALL(0x000A6B40u, sub_000A6B40); /* call 0x000A6B40 */

loc_000A6E3D: ;
    PUSH32(esp, 0x236550);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6E4Bu); RECOMP_ABI_CALL(0x000AEB2Au, sub_000AEB2A); /* call 0x000AEB2A */

loc_000A6E4B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6E70
 * Original: 0x000A6E70 - 0x000A6E9B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A6E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6E70: ;
    edx = ecx;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(0x19) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 0x19 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A6E98; /* jae: above or equal (unsigned >=) */

loc_000A6E78: ;
    ecx = edx + 8;
    PUSH32(esp, 0x000A6E80u); RECOMP_ABI_CALL(0x000A6B50u, sub_000A6B50); /* call 0x000A6B50 */

loc_000A6E80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6E98; /* je: equal / zero */

loc_000A6E84: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A6E8Du); RECOMP_ABI_CALL(0x000AEC27u, sub_000AEC27); /* call 0x000AEC27 */

loc_000A6E8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A6E98; /* jge: greater or equal (signed >=) */

loc_000A6E92: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A6E98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6EA0
 * Original: 0x000A6EA0 - 0x000A6EB7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6EA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x236518);
    PUSH32(esp, ecx);
    MEM8(ecx + 0x24) = LO8(eax);
    MEM8(ecx + 0x25) = LO8(eax);
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, 0x000A6EB6u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A6EB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6EC0
 * Original: 0x000A6EC0 - 0x000A6EC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6EC0(void)
{

loc_000A6EC0: ;
    SET_LO8(eax, MEM8(0x948694));
    esp += 4; return; /* ret */

}

/**
 * sub_000A6ED0
 * Original: 0x000A6ED0 - 0x000A6EF7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6ED0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A6EDBu); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A6EDB: ;
    PUSH32(esp, 1);
    eax = esi + eax * 2 + -2;
    PUSH32(esp, 0x2811B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A6EECu); RECOMP_ABI_CALL(0x0015238Cu, sub_0015238C); /* call 0x0015238C */

loc_000A6EEC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F00
 * Original: 0x000A6F00 - 0x000A6F06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F00(void)
{

loc_000A6F00: ;
    eax = 0x936558;
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F10
 * Original: 0x000A6F10 - 0x000A6F1F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6F10: ;
    SET_LO8(eax, MEM8(0x95A7D4));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x948698;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F20
 * Original: 0x000A6F20 - 0x000A6F2F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A6F20: ;
    PUSH32(esp, 0x000A6F25u); RECOMP_ABI_CALL(0x000A6EC0u, sub_000A6EC0); /* call 0x000A6EC0 */

loc_000A6F25: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(0u - (uint32_t)(LO8(eax))));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x948670;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F30
 * Original: 0x000A6F30 - 0x000A6F47 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A6F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6F30: ;
    PUSH32(esp, 0x000A6F35u); RECOMP_ABI_CALL(0x000A6EC0u, sub_000A6EC0); /* call 0x000A6EC0 */

loc_000A6F35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6F44; /* je: equal / zero */

loc_000A6F39: ;
    PUSH32(esp, 0x000A6F3Eu); RECOMP_ABI_CALL(0x000A6F00u, sub_000A6F00); /* call 0x000A6F00 */

loc_000A6F3E: ;
    _fb = (uint32_t)(0xB1C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB1C8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A6F44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F50
 * Original: 0x000A6F50 - 0x000A6F5B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A6F50: ;
    PUSH32(esp, 0x000A6F55u); RECOMP_ABI_CALL(0x000A6F00u, sub_000A6F00); /* call 0x000A6F00 */

loc_000A6F55: ;
    _fb = (uint32_t)(0xB1E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB1E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A6F60
 * Original: 0x000A6F60 - 0x000A703D (221 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A6F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A6F60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000A6F6Eu); RECOMP_ABI_CALL(0x000A6EC0u, sub_000A6EC0); /* call 0x000A6EC0 */

loc_000A6F6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A6FB5; /* je: equal / zero */

loc_000A6F72: ;
    PUSH32(esp, 0x000A6F77u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000A6F77: ;
    ecx = MEM32(0x935B50);
    edx = MEM32(ecx + 0x2F10);
    _fb = (uint32_t)(MEM32(0x948690)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(0x948690);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD693A018u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD693A018u (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000A6F99; /* jbe: below or equal (unsigned <=) */

loc_000A6F92: ;
    ecx = 0xD693A018u;
    goto loc_000A6FB5;

loc_000A6F99: ;
    PUSH32(esp, 0x000A6F9Eu); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_000A6F9E: ;
    esi = MEM32(0x948690);
    ecx = eax;
    eax = MEM32(0x935B50);
    edx = MEM32(eax + 0x2F10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000A6FB5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax;
    ebp = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = 0x95217CB1u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = edx;
    eax = 0x45E7B273;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esi = esi >> 0x15;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
    MEM16(esp + 0x18) = LO16(esi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3C);
    edi = edi >> 0xE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esp + 0x1A) = LO16(edx);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(esp + 0x1C) = LO16(eax);
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x24);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    MEM32(ecx) = ebx;
    POP32(esp, edi);
    MEM16(esp + 0x1A) = LO16(edx);
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 4) = ebp;
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7040
 * Original: 0x000A7040 - 0x000A7045 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A7040: ;
    g_seh_ebp = ebp; sub_000A3F80(); return; /* tail jmp 0x000A3F80 */

}

/**
 * sub_000A7050
 * Original: 0x000A7050 - 0x000A7077 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000A7050: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x1213D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7073; /* je: equal / zero */

loc_000A705E: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x12118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12118)) >> 32) & 1);
    eax = eax + 0x12118;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A706Au); RECOMP_ABI_CALL(0x000A5300u, sub_000A5300); /* call 0x000A5300 */

loc_000A706A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000A7073: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7080
 * Original: 0x000A7080 - 0x000A708E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7080: ;
    PUSH32(esp, 0x936558);
    PUSH32(esp, 0x000A708Au); RECOMP_ABI_CALL(0x000A7050u, sub_000A7050); /* call 0x000A7050 */

loc_000A708A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A7090
 * Original: 0x000A7090 - 0x000A709E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7090: ;
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x000A709Au); RECOMP_ABI_CALL(0x000A7050u, sub_000A7050); /* call 0x000A7050 */

loc_000A709A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A70A0
 * Original: 0x000A70A0 - 0x000A70B5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A70A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A70B4; /* jae: above or equal (unsigned >=) */

loc_000A70A9: ;
    MEM32(eax * 4 + 0x936534) = 0;

loc_000A70B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000A70C0
 * Original: 0x000A70C0 - 0x000A7105 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A70C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A70C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x95A7B0);
    MEM8(0x95A7D5) = LO8(eax);
    MEM8(0x95A7D4) = LO8(eax);
    MEM8(0x953890) = LO8(eax);
    PUSH32(esp, 0x000A70E1u); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A70E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x953840);
    PUSH32(esp, 0x000A70ECu); RECOMP_ABI_CALL(0x000A9CFBu, sub_000A9CFB); /* call 0x000A9CFB */

loc_000A70EC: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x948698);
    PUSH32(esp, 0x95A7B0);
    PUSH32(esp, 0x000A7100u); RECOMP_ABI_CALL(0x000A5740u, sub_000A5740); /* call 0x000A5740 */

loc_000A7100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7110
 * Original: 0x000A7110 - 0x000A716D (93 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7110(void)
{
    int _flags = 0; /* fallback flag var */
    int _jf_000A7159 = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A711D; /* jne: not equal / not zero */

loc_000A7119: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A711D: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A7124u); RECOMP_ABI_CALL(0x000A9DD7u, sub_000A9DD7); /* call 0x000A9DD7 */

loc_000A7124: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000A7163; /* jle: less or equal (signed <=) */

loc_000A712A: ;
    /* nop */

loc_000A7130: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A713Bu); RECOMP_ABI_CALL(0x0015211Cu, sub_0015211C); /* call 0x0015211C */

loc_000A713B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7154; /* je: equal / zero */

loc_000A7142: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A714Du); RECOMP_ABI_CALL(0x001520FDu, sub_001520FD); /* call 0x001520FD */

loc_000A714D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _jf_000A7159 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */
    goto loc_000A7159;

loc_000A7154: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x3000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x3000 (16-bit) */
    _jf_000A7159 = (CMP_NE(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_000A7159: ;
    if (_jf_000A7159 /* jne: not equal / not zero */) goto loc_000A7168;

loc_000A715B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000A7130; /* jg: greater (signed >) */

loc_000A7163: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000A7168: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A7170
 * Original: 0x000A7170 - 0x000A71D1 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A7170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A7170: ;
    SET_LO8(eax, MEM8(0x30EBF0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(0x936530)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(0x936530) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A71CD; /* je: equal / zero */

loc_000A717D: ;
    SET_LO8(ecx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7192; /* je: equal / zero */

loc_000A7185: ;
    edx = MEM32(0x936528);
    ecx = ZX8(LO8(eax));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A71AA; /* je: equal / zero */

loc_000A7192: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(edx * 4 + 0x936534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A71CD; /* je: equal / zero */

loc_000A71A0: ;
    SET_LO8(ecx, MEM8(eax + 0x1213C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A71CD; /* je: equal / zero */

loc_000A71AA: ;
    eax = MEM32(0x93652C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A71B7; /* jb: below (unsigned <) */

loc_000A71B4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000A71B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A71C2; /* jb: below (unsigned <) */

loc_000A71BC: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000A71C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000A71CD; /* jb: below (unsigned <) */

loc_000A71C7: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_000A71CD: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000A71E0
 * Original: 0x000A71E0 - 0x000A7207 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000A71E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A71E0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000A7204; /* jae: above or equal (unsigned >=) */

loc_000A71E9: ;
    eax = MEM32(eax * 4 + 0x936534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7204; /* je: equal / zero */

loc_000A71F4: ;
    SET_LO8(ecx, MEM8(eax + 0x1213C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A7204; /* je: equal / zero */

loc_000A71FE: ;
    _fb = (uint32_t)(0xB1A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB1A8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000A7204: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}
