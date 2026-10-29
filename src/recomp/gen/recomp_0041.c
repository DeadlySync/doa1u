/**
 * DOAU1 - Recompiled code chunk 41
 * Functions: 250 (0x0015488B - 0x00159BC8)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0015488B
 * Original: 0x0015488B - 0x00154932 (167 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015488B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015488B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001548B8; /* je: equal / zero */

loc_0015489D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001548B8; /* jne: not equal / not zero */

loc_001548A2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x2D (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    MEM8(eax) = 0x30;
    MEM8(eax + 1) = 0;

loc_001548B8: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0x2D (32-bit) */
    ebx = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001548C4; /* jne: not equal / not zero */

loc_001548C0: ;
    MEM8(ebx) = 0x2D;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001548C4: ;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001548DB; /* jg: greater (signed >) */

loc_001548CE: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001548D5u); RECOMP_ABI_CALL(0x00154761u, sub_00154761); /* call 0x00154761 */

loc_001548D5: ;
    MEM8(ebx) = 0x30;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001548DD;

loc_001548DB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001548DD: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015492A; /* jle: less or equal (signed <=) */

loc_001548E3: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001548EAu); RECOMP_ABI_CALL(0x00154761u, sub_00154761); /* call 0x00154761 */

loc_001548EA: ;
    SET_LO8(eax, MEM8(0x2FD3D4));
    MEM8(ebx) = LO8(eax);
    edi = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015492A; /* jge: greater or equal (signed >=) */

loc_001548F9: ;
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154906; /* jne: not equal / not zero */

loc_00154901: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00154909; /* jl: less (signed <) */

loc_00154906: ;
    MEM32(ebp + 0xC) = edi;

loc_00154909: ;
    esi = MEM32(ebp + 0xC);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154913u); RECOMP_ABI_CALL(0x00154761u, sub_00154761); /* call 0x00154761 */

loc_00154913: ;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x30303030;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_0015492A: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00154932
 * Original: 0x00154932 - 0x00154984 (82 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154932(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154932: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015494Eu); RECOMP_ABI_CALL(0x0015A9EEu, sub_0015A9EE); /* call 0x0015A9EE */

loc_0015494E: ;
    esi = MEM32(ebp + 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015496Du); RECOMP_ABI_CALL(0x0015A8B5u, sub_0015A8B5); /* call 0x0015A8B5 */

loc_0015496D: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015497Bu); RECOMP_ABI_CALL(0x0015488Bu, sub_0015488B); /* call 0x0015488B */

loc_0015497B: ;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00154984
 * Original: 0x00154984 - 0x00154A11 (141 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154984(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154984: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001549A2u); RECOMP_ABI_CALL(0x0015A9EEu, sub_0015A9EE); /* call 0x0015A9EE */

loc_001549A2: ;
    esi = MEM32(ebp + -12);
    ebx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0x2D (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001549C2u); RECOMP_ABI_CALL(0x0015A8B5u, sub_0015A8B5); /* call 0x0015A8B5 */

loc_001549C2: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFCu (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001549F8; /* jl: less (signed <) */

loc_001549D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001549F8; /* jge: greater or equal (signed >=) */

loc_001549D7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001549E5; /* je: equal / zero */

loc_001549DB: ;
    SET_LO8(eax, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001549DB; /* jne: not equal / not zero */

loc_001549E2: ;
    MEM8(edi + -2) = LO8(eax);

loc_001549E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001549F3u); RECOMP_ABI_CALL(0x0015488Bu, sub_0015488B); /* call 0x0015488B */

loc_001549F3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00154A0C;

loc_001549F8: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A09u); RECOMP_ABI_CALL(0x00154784u, sub_00154784); /* call 0x00154784 */

loc_00154A09: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00154A0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00154A11
 * Original: 0x00154A11 - 0x00154A62 (81 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154A11(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154A11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A4C; /* je: equal / zero */

loc_00154A1A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x45 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A4C; /* je: equal / zero */

loc_00154A20: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x66) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0x66 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A39; /* jne: not equal / not zero */

loc_00154A26: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A34u); RECOMP_ABI_CALL(0x00154932u, sub_00154932); /* call 0x00154932 */

loc_00154A34: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00154A39: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A4Au); RECOMP_ABI_CALL(0x00154984u, sub_00154984); /* call 0x00154984 */

loc_00154A4A: ;
    goto loc_00154A5D;

loc_00154A4C: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A5Du); RECOMP_ABI_CALL(0x0015482Du, sub_0015482D); /* call 0x0015482D */

loc_00154A5D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00154A62
 * Original: 0x00154A62 - 0x00154A74 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A62(void)
{

loc_00154A62: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0x00154A71u); RECOMP_ABI_CALL(0x0015AC33u, sub_0015AC33); /* call 0x0015AC33 */

loc_00154A71: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00154A74
 * Original: 0x00154A74 - 0x00154ACE (90 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154A74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154A74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x2FCC80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154A8A; /* je: equal / zero */

loc_00154A83: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB40E64Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB40E64Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154ACC; /* jne: not equal / not zero */

loc_00154A8A: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A94u); RECOMP_ABI_CALL(0x000A9E16u, sub_000A9E16); /* call 0x000A9E16 */

loc_00154A94: ;
    esi = MEM32(ebp + -4);
    esi = esi ^ MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154A9Fu); RECOMP_ABI_CALL(0x000AD48Eu, sub_000AD48E); /* call 0x000AD48E */

loc_00154A9F: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154AA6u); RECOMP_ABI_CALL(0x000A9694u, sub_000A9694); /* call 0x000A9694 */

loc_00154AA6: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154AB1u); RECOMP_ABI_CALL(0x000ADB7Eu, sub_000ADB7E); /* call 0x000ADB7E */

loc_00154AB1: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x2FCC80) = esi;
    if ((_fa != 0)) goto loc_00154ACB; /* jne: not equal / not zero */

loc_00154AC1: ;
    MEM32(0x2FCC80) = 0xBB40E64Eu;

loc_00154ACB: ;
    POP32(esp, esi);

loc_00154ACC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00154ACE
 * Original: 0x00154ACE - 0x00154AF4 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154ACE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154ACE: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x2B0F78);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154ADDu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00154ADD: ;
    eax = MEM32(0x98B230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00154B06(); return; } /* je: equal / zero */

loc_00154AE6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00154AF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154AF0u); } /* indirect call */
    }

loc_00154AF2: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_00154AF4(); return; /* fallthrough 0x00154AF4 */

}

/**
 * sub_00154AF4
 * Original: 0x00154AF4 - 0x00154AFD (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154AF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154AF4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00154C4F(); return; /* tail jmp 0x00154C4F */

}

/**
 * sub_00154AFD
 * Original: 0x00154AFD - 0x00154B01 (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154AFD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154AFD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00154B01
 * Original: 0x00154B01 - 0x00154B06 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154B01: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00154AF4(); return; /* tail jmp 0x00154AF4 */

}

/**
 * sub_00154B06
 * Original: 0x00154B06 - 0x00154C67 (353 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B06(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154B06: ;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00154B21; /* je: equal / zero */

loc_00154B0C: ;
    MEM32(ebp + -32) = 0x2B0F54;
    MEM32(ebp + -36) = 0x2B0EA0;
    ebx = 0xD4;
    goto loc_00154B34;

loc_00154B21: ;
    MEM32(ebp + -32) = 0x2B0E80;
    MEM32(ebp + -36) = 0x2B0DE0;
    ebx = 0xB9;

loc_00154B34: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x2B0DC8;
    edi = ebp + -300;
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
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00154B57: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154B57; /* jne: not equal / not zero */

loc_00154B5E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00154B94; /* jbe: below or equal (unsigned <=) */

loc_00154B68: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00154B71: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154B71; /* jne: not equal / not zero */

loc_00154B78: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x2B0DC4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154B91u); RECOMP_ABI_CALL(0x00151E20u, sub_00151E20); /* call 0x00151E20 */

loc_00154B91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00154B94: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00154B9A: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154B9A; /* jne: not equal / not zero */

loc_00154BA1: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00154BB2u); RECOMP_ABI_CALL(0x001512D0u, sub_001512D0); /* call 0x001512D0 */

loc_00154BB2: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00154BBE: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BBE; /* jne: not equal / not zero */

loc_00154BC8: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00154BCB: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BCB; /* jne: not equal / not zero */

loc_00154BD3: ;
    ebx = 0x2B0DC0;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00154BE0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BE0; /* jne: not equal / not zero */

loc_00154BE8: ;
    esi = 0x2B0DB4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00154BF6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154BF6; /* jne: not equal / not zero */

loc_00154BFD: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00154C02: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154C02; /* jne: not equal / not zero */

loc_00154C0A: ;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00154C1B: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154C1B; /* jne: not equal / not zero */

loc_00154C23: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00154C2D: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154C2D; /* jne: not equal / not zero */

loc_00154C34: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00154C37: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154C37; /* jne: not equal / not zero */

loc_00154C3F: ;
    edi = edx;
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
    PUSH32(esp, 3);
    PUSH32(esp, 0x00154C56u); RECOMP_ABI_CALL(0x001534D0u, sub_001534D0); /* call 0x001534D0 */

loc_00154C56: ;
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(esp + 4);
    eax = MEM32(0x98B230);
    MEM32(0x98B230) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00154C4F
 * Original: 0x00154C4F - 0x00154C67 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154C4F(void)
{

loc_00154C4F: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00154C56u); RECOMP_ABI_CALL(0x001534D0u, sub_001534D0); /* call 0x001534D0 */

loc_00154C56: ;
    /* int3: debug-trap slide byte, stepped over */
    ecx = MEM32(esp + 4);
    eax = MEM32(0x98B230);
    MEM32(0x98B230) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00154CA0
 * Original: 0x00154CA0 - 0x00154CB3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CA0(void)
{

loc_00154CA0: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x54) = 0x2FD4A8;
    MEM32(eax + 0x14) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00154CB3
 * Original: 0x00154CB3 - 0x00154D35 (130 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154CB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154CB3: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00154CC7; /* jb: below (unsigned <) */

loc_00154CBF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x22BC70); PUSH32(esp, 0x00154CC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154CC1u); } /* indirect call */
    }

loc_00154CC7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154CEC; /* je: equal / zero */

loc_00154CD5: ;
    eax = MEM32(0x96FA28);
    ecx = MEM32(XBOX_FS_BASE + 4);
    edi = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00154CF1;

loc_00154CEC: ;
    edi = 0xA9E424;

loc_00154CF1: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154D30; /* jne: not equal / not zero */

loc_00154CF7: ;
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00154D03u); RECOMP_ABI_CALL(0x00159331u, sub_00159331); /* call 0x00159331 */

loc_00154D03: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00154D28; /* je: equal / zero */

loc_00154D0B: ;
    MEM32(edi) = esi;
    MEM32(esi + 0x54) = 0x2FD4A8;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0x00154D20u); RECOMP_ABI_CALL(0x000AD48Eu, sub_000AD48E); /* call 0x000AD48E */

loc_00154D20: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    goto loc_00154D30;

loc_00154D28: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00154D2Fu); RECOMP_ABI_CALL(0x00159170u, sub_00159170); /* call 0x00159170 */

loc_00154D2F: ;
    POP32(esp, ecx);

loc_00154D30: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00154D35
 * Original: 0x00154D35 - 0x00154DF2 (189 bytes, 70 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154D35(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154D35: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B0F88);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D41u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00154D41: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DEA; /* je: equal / zero */

loc_00154D4C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D5A; /* je: equal / zero */

loc_00154D53: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D59u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D59: ;
    POP32(esp, ecx);

loc_00154D5A: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D68; /* je: equal / zero */

loc_00154D61: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D67u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D67: ;
    POP32(esp, ecx);

loc_00154D68: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D76; /* je: equal / zero */

loc_00154D6F: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D75u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D75: ;
    POP32(esp, ecx);

loc_00154D76: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D84; /* je: equal / zero */

loc_00154D7D: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D83u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D83: ;
    POP32(esp, ecx);

loc_00154D84: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154D92; /* je: equal / zero */

loc_00154D8B: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D91u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D91: ;
    POP32(esp, ecx);

loc_00154D92: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DA0; /* je: equal / zero */

loc_00154D99: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154D9Fu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154D9F: ;
    POP32(esp, ecx);

loc_00154DA0: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FD4A8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2FD4A8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DB1; /* je: equal / zero */

loc_00154DAA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DB0u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154DB0: ;
    POP32(esp, ecx);

loc_00154DB1: ;
    PUSH32(esp, 0xD);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DB8u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00154DB8: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x60);
    MEM32(ebp + -28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DDA; /* je: equal / zero */

loc_00154DC7: ;
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00154DDA; /* jne: not equal / not zero */

loc_00154DCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E0B4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0xA9E0B4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154DDA; /* je: equal / zero */

loc_00154DD3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DD9u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154DD9: ;
    POP32(esp, ecx);

loc_00154DDA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DE3u); RECOMP_ABI_CALL(0x00154DF5u, sub_00154DF5); /* call 0x00154DF5 */

loc_00154DE3: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DE9u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00154DE9: ;
    POP32(esp, ecx);

loc_00154DEA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154DEFu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00154DEF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154DF5
 * Original: 0x00154DF5 - 0x00154DFE (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154DF5(void)
{

loc_00154DF5: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00154DFCu); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00154DFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00154DFE
 * Original: 0x00154DFE - 0x00154E50 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154DFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154DFE: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00154E12; /* jb: below (unsigned <) */

loc_00154E0A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    { uint32_t _icall_target = MEM32(0x22BC70); PUSH32(esp, 0x00154E12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154E0Cu); } /* indirect call */
    }

loc_00154E12: ;
    PUSH32(esp, esi);
    eax = MEM32(XBOX_FS_BASE + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154E36; /* je: equal / zero */

loc_00154E1F: ;
    eax = MEM32(0x96FA28);
    ecx = MEM32(XBOX_FS_BASE + 4);
    esi = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00154E3B;

loc_00154E36: ;
    esi = 0xA9E424;

loc_00154E3B: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154E45; /* jne: not equal / not zero */

loc_00154E43: ;
    eax = MEM32(esi);

loc_00154E45: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154E4Bu); RECOMP_ABI_CALL(0x00154D35u, sub_00154D35); /* call 0x00154D35 */

loc_00154E4B: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00154E59
 * Original: 0x00154E59 - 0x00154ECC (115 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00154E59(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154E59: ;
    PUSH32(esp, 0x00154E5Eu); RECOMP_ABI_CALL(0x00156EBCu, sub_00156EBC); /* call 0x00156EBC */

loc_00154E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154E69; /* jne: not equal / not zero */

loc_00154E62: ;
    PUSH32(esp, 0x00154E67u); RECOMP_ABI_CALL(0x00156F05u, sub_00156F05); /* call 0x00156F05 */

loc_00154E67: ;
    goto loc_00154EC9;

loc_00154E69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x88);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00154E76u); RECOMP_ABI_CALL(0x00159331u, sub_00159331); /* call 0x00159331 */

loc_00154E76: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(0x96FA28);
    POP32(esp, ecx);
    POP32(esp, ecx);
    ecx = MEM32(XBOX_FS_BASE + 4);
    eax = MEM32(ecx + eax * 4);
    MEM32(eax + 0x20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00154EA7; /* jne: not equal / not zero */

loc_00154E93: ;
    MEM32(0x54) = 0x2FD4A8;
    MEM32(0x14) = 1;

loc_00154EA7: ;
    PUSH32(esp, 0x00154EACu); RECOMP_ABI_CALL(0x000AD48Eu, sub_000AD48E); /* call 0x000AD48E */

loc_00154EAC: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 1);
    MEM32(esi) = eax;
    PUSH32(esp, 0x98B234);
    MEM32(0x98B23C) = 0x15B16B;
    PUSH32(esp, 0x00154EC8u); RECOMP_ABI_CALL(0x000AD2A3u, sub_000AD2A3); /* call 0x000AD2A3 */

loc_00154EC8: ;
    POP32(esp, esi);

loc_00154EC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00154ECC
 * Original: 0x00154ECC - 0x00154FE5 (281 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00154ECC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154ECC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x82 (8-bit) */
    ebx = MEM32(esi + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00154FD8; /* je: equal / zero */

loc_00154EE2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00154FD8; /* jne: not equal / not zero */

loc_00154EEA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154F05; /* je: equal / zero */

loc_00154EEE: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154FD8; /* je: equal / zero */

loc_00154EFA: ;
    ecx = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ecx;
    MEM32(esi + 0xC) = eax;

loc_00154F05: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00154F41; /* jne: not equal / not zero */

loc_00154F1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCCF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCCF0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F2F; /* je: equal / zero */

loc_00154F27: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCD10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCD10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154F3A; /* jne: not equal / not zero */

loc_00154F2F: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F35u); RECOMP_ABI_CALL(0x0015B2E1u, sub_0015B2E1); /* call 0x0015B2E1 */

loc_00154F35: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00154F41; /* jne: not equal / not zero */

loc_00154F3A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F40u); RECOMP_ABI_CALL(0x0015B29Du, sub_0015B29D); /* call 0x0015B29D */

loc_00154F40: ;
    POP32(esp, ecx);

loc_00154F41: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x108 (16-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00154FAE; /* je: equal / zero */

loc_00154F4A: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi);
    ecx = eax + 1;
    MEM32(esi) = ecx;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00154F6E; /* jle: less or equal (signed <=) */

loc_00154F61: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154F69u); RECOMP_ABI_CALL(0x00157CE7u, sub_00157CE7); /* call 0x00157CE7 */

loc_00154F69: ;
    MEM32(ebp + 0xC) = eax;
    goto loc_00154FA1;

loc_00154F6E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154F8C; /* je: equal / zero */

loc_00154F73: ;
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 4;
    eax = ecx + eax * 8;
    goto loc_00154F91;

loc_00154F8C: ;
    eax = 0x2FD44C;

loc_00154F91: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154FA4; /* je: equal / zero */

loc_00154F97: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154FA1u); RECOMP_ABI_CALL(0x001591FEu, sub_001591FE); /* call 0x001591FE */

loc_00154FA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00154FA4: ;
    eax = MEM32(esi + 8);
    SET_LO8(ecx, MEM8(ebp + 8));
    MEM8(eax) = LO8(ecx);
    goto loc_00154FC2;

loc_00154FAE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00154FBCu); RECOMP_ABI_CALL(0x00157CE7u, sub_00157CE7); /* call 0x00157CE7 */

loc_00154FBC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = eax;

loc_00154FC2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00154FCE; /* je: equal / zero */

loc_00154FC8: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00154FDE;

loc_00154FCE: ;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00154FE1;

loc_00154FD8: ;
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;

loc_00154FDE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00154FE1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00154FE5
 * Original: 0x00154FE5 - 0x00155018 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154FE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154FE5: ;
    _fa = (uint32_t)(MEM8(ecx + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00154FF1; /* je: equal / zero */

loc_00154FEB: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155015; /* je: equal / zero */

loc_00154FF1: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00155001; /* js: sign (negative) */

loc_00154FF6: ;
    edx = MEM32(ecx);
    MEM8(edx) = LO8(eax);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    goto loc_0015500D;

loc_00155001: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015500Bu); RECOMP_ABI_CALL(0x00154ECCu, sub_00154ECC); /* call 0x00154ECC */

loc_0015500B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015500D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155015; /* jne: not equal / not zero */

loc_00155012: ;
    MEM32(esi) = MEM32(esi) | eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_00155015: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00155018
 * Original: 0x00155018 - 0x0015503C (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155018: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_00155033;

loc_00155020: ;
    ecx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015502Eu); RECOMP_ABI_CALL(0x00154FE5u, sub_00154FE5); /* call 0x00154FE5 */

loc_0015502E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155039; /* je: equal / zero */

loc_00155033: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00155020; /* jg: greater (signed >) */

loc_00155039: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0015503C
 * Original: 0x0015503C - 0x00155073 (55 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015503C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015503C: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00155069; /* je: equal / zero */

loc_00155048: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155069; /* jne: not equal / not zero */

loc_0015504E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00155070;

loc_00155056: ;
    SET_LO8(eax, MEM8(ebx));
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    PUSH32(esp, 0x00155063u); RECOMP_ABI_CALL(0x00154FE5u, sub_00154FE5); /* call 0x00154FE5 */

loc_00155063: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155070; /* je: equal / zero */

loc_00155069: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00155056; /* jg: greater (signed >) */

loc_00155070: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00155092
 * Original: 0x00155092 - 0x001557F9 (1895 bytes, 607 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155092(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00155092: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x250) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x250));
    esp = esp - 0x250;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001557F3; /* je: equal / zero */

loc_001550B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    goto loc_001550BD;

loc_001550BA: ;
    ecx = MEM32(ebp + -52);

loc_001550BD: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0xC) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001557F1; /* jl: less (signed <) */

loc_001550CB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x20 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001550E4; /* jl: less (signed <) */

loc_001550D0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001550E4; /* jg: greater (signed >) */

loc_001550D5: ;
    eax = SX8(LO8(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2B0F78);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001550E6;

loc_001550E4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001550E6: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x2B0F98);
    PUSH32(esp, 7);
    if (((4) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((4) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -52) = eax;
    if (CMP_A(_fa, _fb)) goto loc_001557E4; /* ja: above (unsigned >) */

loc_001550FF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1557F9); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00155106u) goto loc_00155106;
    if (_jt == 0x00155123u) goto loc_00155123;
    if (_jt == 0x0015516Fu) goto loc_0015516F;
    if (_jt == 0x001551AAu) goto loc_001551AA;
    if (_jt == 0x001551B3u) goto loc_001551B3;
    if (_jt == 0x001551EBu) goto loc_001551EB;
    if (_jt == 0x00155284u) goto loc_00155284;
    if (_jt == 0x001552BDu) goto loc_001552BD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00155106: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -36) = eax;
    goto loc_001557E4;

loc_00155123: ;
    eax = SX8(LO8(ebx));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x20));
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00155166; /* je: equal / zero */

loc_0015512B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015515D; /* je: equal / zero */

loc_00155130: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(8));
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00155154; /* je: equal / zero */

loc_00155135: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015514B; /* je: equal / zero */

loc_00155139: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001557E4; /* jne: not equal / not zero */

loc_00155142: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_0015514B: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_00155154: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_0015515D: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001557E4;

loc_00155166: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 2;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_0015516F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155195; /* jne: not equal / not zero */

loc_00155174: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001557E4; /* jge: greater or equal (signed >=) */

loc_00155189: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = (int)((MEM32(ebp + -32)) != 0);
    MEM32(ebp + -32) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -32)));
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_001557E4;

loc_00155195: ;
    eax = MEM32(ebp + -32);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    goto loc_001557E4;

loc_001551AA: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001557E4;

loc_001551B3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2A (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001551D6; /* jne: not equal / not zero */

loc_001551B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001557E4; /* jge: greater or equal (signed >=) */

loc_001551CD: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_001551D6: ;
    eax = MEM32(ebp + -8);
    ecx = SX8(LO8(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    goto loc_001557E4;

loc_001551EB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x49) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x49 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015521E; /* je: equal / zero */

loc_001551F0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x68) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x68 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00155215; /* je: equal / zero */

loc_001551F5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x6C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x6C (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015520C; /* je: equal / zero */

loc_001551FA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x77) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x77 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001557E4; /* jne: not equal / not zero */

loc_00155203: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001557E4;

loc_0015520C: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_00155215: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x20;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001557E4;

loc_0015521E: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x36 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155238; /* jne: not equal / not zero */

loc_00155224: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x34 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155238; /* jne: not equal / not zero */

loc_0015522A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = edi;
    goto loc_001557E4;

loc_00155238: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x33 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155250; /* jne: not equal / not zero */

loc_0015523C: ;
    _fa = (uint32_t)(MEM8(edi + 1)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 1), 0x32 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155250; /* jne: not equal / not zero */

loc_00155242: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(ebp + 0xC) = edi;
    goto loc_001557E4;

loc_00155250: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155258: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155260: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155268: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x75 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155270: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155278: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_00155280: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -52) = MEM32(ebp + -52) & 0;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155284: ;
    ecx = MEM32(0x2FD3C0);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001552AB; /* je: equal / zero */

loc_00155298: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001552A5u); RECOMP_ABI_CALL(0x00154FE5u, sub_00154FE5); /* call 0x00154FE5 */

loc_001552A5: ;
    SET_LO8(ebx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;

loc_001552AB: ;
    ecx = MEM32(ebp + 8);
    esi = ebp + -20;
    SET_LO8(eax, LO8(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001552B8u); RECOMP_ABI_CALL(0x00154FE5u, sub_00154FE5); /* call 0x00154FE5 */

loc_001552B8: ;
    goto loc_001557E4;

loc_001552BD: ;
    eax = SX8(LO8(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0015551A; /* jg: greater (signed >) */

loc_001552C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_0015534D; /* jge: greater or equal (signed >=) */

loc_001552CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_001553AE; /* jg: greater (signed >) */

loc_001552D7: ;
    if (CMP_EQ(_fa, _fb)) goto loc_0015559A; /* je: equal / zero */

loc_001552DD: ;
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x43));
    eax = eax - 0x43;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00155370; /* je: equal / zero */

loc_001552E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155343; /* je: equal / zero */

loc_001552EA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155343; /* je: equal / zero */

loc_001552EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC));
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001556E2; /* jne: not equal / not zero */

loc_001552F7: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00155303; /* jne: not equal / not zero */

loc_001552FF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00155303: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155310; /* jne: not equal / not zero */

loc_0015530B: ;
    ecx = 0x7FFFFFFF;

loc_00155310: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x810) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x810 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00155570; /* je: equal / zero */

loc_00155329: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155334; /* jne: not equal / not zero */

loc_0015532D: ;
    MEM32(ebp + -12) = 0x2B0FFC;

loc_00155334: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -36) = 1;
    goto loc_00155562;

loc_00155343: ;
    MEM32(ebp + -56) = 1;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ebx)) + (uint64_t)(0x20)) >> 8) & 1);
    SET_LO8(ebx, LO8(ebx) + 0x20);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_0015534D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = ebp + -592;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0015545D; /* jge: greater or equal (signed >=) */

loc_00155364: ;
    MEM32(ebp + -8) = 6;
    goto loc_001554A4;

loc_00155370: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015537C; /* jne: not equal / not zero */

loc_00155378: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015537C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x810) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x810 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001553ED; /* je: equal / zero */

loc_0015538B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);
    PUSH32(esp, eax);
    eax = ebp + -592;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015539Cu); RECOMP_ABI_CALL(0x0015B30Bu, sub_0015B30B); /* call 0x0015B30B */

loc_0015539C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -16) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001553FD; /* jge: greater or equal (signed >=) */

loc_001553A5: ;
    MEM32(ebp + -48) = 1;
    goto loc_001553FD;

loc_001553AE: ;
    _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x5A));
    eax = eax - 0x5A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015540B; /* je: equal / zero */

loc_001553B3: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(9));
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015537C; /* je: equal / zero */

loc_001553B8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001556E2; /* jne: not equal / not zero */

loc_001553BF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001553C3: ;
    MEM32(ebp + -16) = 0xA;

loc_001553CA: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ebx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015560A; /* je: equal / zero */

loc_001553DA: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = ecx;
    goto loc_00155632;

loc_001553ED: ;
    SET_LO8(eax, MEM8(eax + -4));
    MEM8(ebp + -592) = LO8(eax);
    MEM32(ebp + -16) = 1;

loc_001553FD: ;
    eax = ebp + -592;
    MEM32(ebp + -12) = eax;
    goto loc_001556E2;

loc_0015540B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00155446; /* je: equal / zero */

loc_00155419: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00155446; /* je: equal / zero */

loc_00155420: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0015543D; /* je: equal / zero */

loc_0015542C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -36) = 1;
    goto loc_001556DF;

loc_0015543D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001556DF;

loc_00155446: ;
    eax = 0x2B0FF4;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_00155451: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155451; /* jne: not equal / not zero */

loc_00155458: ;
    goto loc_00155513;

loc_0015545D: ;
    if (CMP_NE(_fa, _fb)) goto loc_0015546D; /* jne: not equal / not zero */

loc_0015545F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x67 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001554A4; /* jne: not equal / not zero */

loc_00155464: ;
    MEM32(ebp + -8) = 1;
    goto loc_001554A4;

loc_0015546D: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015547A; /* jle: less or equal (signed <=) */

loc_00155477: ;
    MEM32(ebp + -8) = eax;

loc_0015547A: ;
    esi = 0xA3;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_001554A4; /* jle: less or equal (signed <=) */

loc_00155484: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x15D)) >> 32) & 1);
    eax = eax + 0x15D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155492u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00155492: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    MEM32(ebp + -40) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001554A1; /* je: equal / zero */

loc_0015549A: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_001554A4;

loc_001554A1: ;
    MEM32(ebp + -8) = esi;

loc_001554A4: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -56));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -68) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -72) = ecx;
    { uint32_t _icall_target = MEM32(0x2FCF50); PUSH32(esp, 0x001554CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001554C7u); } /* indirect call */
    }

loc_001554CD: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001554E9; /* je: equal / zero */

loc_001554DB: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001554E9; /* jne: not equal / not zero */

loc_001554E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF5C); PUSH32(esp, 0x001554E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001554E2u); } /* indirect call */
    }

loc_001554E8: ;
    POP32(esp, ecx);

loc_001554E9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x67 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001554FA; /* jne: not equal / not zero */

loc_001554EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001554FA; /* jne: not equal / not zero */

loc_001554F2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF54); PUSH32(esp, 0x001554F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001554F3u); } /* indirect call */
    }

loc_001554F9: ;
    POP32(esp, ecx);

loc_001554FA: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00155507; /* jne: not equal / not zero */

loc_001554FF: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_00155507: ;
    eax = edi;
    edx = eax + 1;

loc_0015550C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015550C; /* jne: not equal / not zero */

loc_00155513: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001556DF;

loc_0015551A: ;
    _fb = (uint32_t)(0x69) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x69));
    eax = eax - 0x69;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001553BF; /* je: equal / zero */

loc_00155523: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001555E0; /* je: equal / zero */

loc_0015552C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001555C6; /* je: equal / zero */

loc_00155533: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155593; /* je: equal / zero */

loc_00155536: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00155303; /* je: equal / zero */

loc_0015553F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001553C3; /* je: equal / zero */

loc_00155547: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001556E2; /* jne: not equal / not zero */

loc_00155550: ;
    MEM32(ebp + -44) = 0x27;
    goto loc_0015559D;

loc_00155559: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00155566; /* je: equal / zero */

loc_00155560: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00155562: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155559; /* jne: not equal / not zero */

loc_00155566: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -12)));
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((1) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_001556DF;

loc_00155570: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015557B; /* jne: not equal / not zero */

loc_00155574: ;
    MEM32(ebp + -12) = 0x2B0FF4;

loc_0015557B: ;
    eax = MEM32(ebp + -12);
    goto loc_00155587;

loc_00155580: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015558B; /* je: equal / zero */

loc_00155586: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00155587: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00155580; /* jne: not equal / not zero */

loc_0015558B: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + -12)));
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001556DF;

loc_00155593: ;
    MEM32(ebp + -8) = 8;

loc_0015559A: ;
    MEM32(ebp + -44) = ecx;

loc_0015559D: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(_fa, _fb)) goto loc_001553CA; /* je: equal / zero */

loc_001555AE: ;
    SET_LO8(eax, MEM8(ebp + -44));
    _fb = (uint32_t)(0x51) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x51)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x51);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ebp + -24) = 0x30;
    MEM8(ebp + -23) = LO8(eax);
    MEM32(ebp + -28) = 2;
    goto loc_001553CA;

loc_001555C6: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(_fa, _fb)) goto loc_001553CA; /* je: equal / zero */

loc_001555D7: ;
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_001553CA;

loc_001555E0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(_fa, _fb)) goto loc_001555F9; /* je: equal / zero */

loc_001555F0: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_001555FE;

loc_001555F9: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_001555FE: ;
    MEM32(ebp + -48) = 1;
    goto loc_001557D1;

loc_0015560A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_00155628; /* je: equal / zero */

loc_00155616: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00155622; /* je: equal / zero */

loc_0015561B: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_0015561F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00155632;

loc_00155622: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_0015561F;

loc_00155628: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax + -4);
    if (TEST_NZ(_fa, _fb)) goto loc_0015561F; /* jne: not equal / not zero */

loc_00155630: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00155632: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015564C; /* je: equal / zero */

loc_00155637: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015564C; /* jg: greater (signed >) */

loc_0015563B: ;
    if (CMP_L(_fas, _fbs)) goto loc_00155641; /* jl: less (signed <) */

loc_0015563D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_0015564C; /* jae: above or equal (unsigned >=) */

loc_00155641: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0015564C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00155657; /* jne: not equal / not zero */

loc_00155655: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00155657: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00155666; /* jge: greater or equal (signed >=) */

loc_0015565D: ;
    MEM32(ebp + -8) = 1;
    goto loc_00155677;

loc_00155666: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00155677; /* jle: less or equal (signed <=) */

loc_00155674: ;
    MEM32(ebp + -8) = eax;

loc_00155677: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00155681; /* jne: not equal / not zero */

loc_0015567D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155681: ;
    esi = ebp + -81;

loc_00155684: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00155694; /* jg: greater (signed >) */

loc_0015568E: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001556B8; /* je: equal / zero */

loc_00155694: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001556A1u); RECOMP_ABI_CALL(0x0015B340u, sub_0015B340); /* call 0x0015B340 */

loc_001556A1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -60) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001556B3; /* jle: less or equal (signed <=) */

loc_001556B0: ;
    _fb = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -44))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001556B3: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00155684;

loc_001556B8: ;
    eax = ebp + -81;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001556E2; /* je: equal / zero */

loc_001556CA: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001556D5; /* jne: not equal / not zero */

loc_001556D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001556E2; /* jne: not equal / not zero */

loc_001556D5: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001556DF: ;
    MEM32(ebp + -16) = eax;

loc_001556E2: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001557D1; /* jne: not equal / not zero */

loc_001556EC: ;
    ebx = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015571A; /* je: equal / zero */

loc_001556F4: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001556FF; /* je: equal / zero */

loc_001556F9: ;
    MEM8(ebp + -24) = 0x2D;
    goto loc_00155713;

loc_001556FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015570A; /* je: equal / zero */

loc_00155704: ;
    MEM8(ebp + -24) = 0x2B;
    goto loc_00155713;

loc_0015570A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015571A; /* je: equal / zero */

loc_0015570F: ;
    MEM8(ebp + -24) = 0x20;

loc_00155713: ;
    MEM32(ebp + -28) = 1;

loc_0015571A: ;
    esi = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(ebp + -28)));
    esi = esi - MEM32(ebp + -28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(MEM32(ebp + -16)));
    esi = esi - MEM32(ebp + -16);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0xC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00155739; /* jne: not equal / not zero */

loc_00155728: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155736u); RECOMP_ABI_CALL(0x00155018u, sub_00155018); /* call 0x00155018 */

loc_00155736: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155739: ;
    PUSH32(esp, MEM32(ebp + -28));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015574Au); RECOMP_ABI_CALL(0x0015503Cu, sub_0015503C); /* call 0x0015503C */

loc_0015574A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00155764; /* je: equal / zero */

loc_00155750: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00155764; /* jne: not equal / not zero */

loc_00155755: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155761u); RECOMP_ABI_CALL(0x00155018u, sub_00155018); /* call 0x00155018 */

loc_00155761: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155764: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001557AB; /* je: equal / zero */

loc_0015576A: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001557AB; /* jle: less or equal (signed <=) */

loc_00155770: ;
    eax = MEM32(ebp + -16);
    ebx = MEM32(ebp + -12);
    MEM32(ebp + -60) = eax;

loc_00155779: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) - 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = ebp + -80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015578Bu); RECOMP_ABI_CALL(0x0015B30Bu, sub_0015B30B); /* call 0x0015B30B */

loc_0015578B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_001557BA; /* jle: less or equal (signed <=) */

loc_00155793: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = ebp + -20;
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001557A2u); RECOMP_ABI_CALL(0x0015503Cu, sub_0015503C); /* call 0x0015503C */

loc_001557A2: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00155779; /* jne: not equal / not zero */

loc_001557A9: ;
    goto loc_001557BA;

loc_001557AB: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001557B9u); RECOMP_ABI_CALL(0x0015503Cu, sub_0015503C); /* call 0x0015503C */

loc_001557B9: ;
    POP32(esp, ecx);

loc_001557BA: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001557D1; /* je: equal / zero */

loc_001557C0: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001557CEu); RECOMP_ABI_CALL(0x00155018u, sub_00155018); /* call 0x00155018 */

loc_001557CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001557D1: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001557E4; /* je: equal / zero */

loc_001557D7: ;
    PUSH32(esp, MEM32(ebp + -40));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001557DFu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_001557DF: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001557E4: ;
    edi = MEM32(ebp + 0xC);
    SET_LO8(ebx, MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001550BA; /* jne: not equal / not zero */

loc_001557F1: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001557F3: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00155819
 * Original: 0x00155819 - 0x0015582A (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155819(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00155819: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(esp + 0xC)); /* fld double */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(esp)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015582A
 * Original: 0x0015582A - 0x00155ACE (676 bytes, 246 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015582A(void)
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

loc_0015582A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xC) = eax;
    SET_LO8(ecx, MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0015585C; /* je: equal / zero */

loc_0015584F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | ebx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x10) = 0xC000008Fu;

loc_0015585C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015586F; /* je: equal / zero */

loc_00155861: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 2;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x10) = 0xC0000093u;

loc_0015586F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155881; /* je: equal / zero */

loc_00155873: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 4;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x10) = 0xC0000091u;

loc_00155881: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155894; /* je: equal / zero */

loc_00155886: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 8;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x10) = 0xC000008Eu;

loc_00155894: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001558A7; /* je: equal / zero */

loc_00155899: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = MEM32(eax + 4) | 0x10;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0x10) = 0xC0000090u;

loc_001558A7: ;
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 2);
    ecx = ecx & 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    ecx = ecx & 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esi);
    eax = MEM32(ebp + 8);
    ecx = ecx >> 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ~ecx;
    ecx = ecx ^ MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) ^ ecx;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015590Du); RECOMP_ABI_CALL(0x0015616Eu, sub_0015616E); /* call 0x0015616E */

loc_0015590D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155918; /* je: equal / zero */

loc_00155911: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 0x10;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155918: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155923; /* je: equal / zero */

loc_0015591C: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 8;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155923: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015592E; /* je: equal / zero */

loc_00155927: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | 4;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015592E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155938; /* je: equal / zero */

loc_00155932: ;
    ecx = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) | edi;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155938: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155942; /* je: equal / zero */

loc_0015593C: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | ebx;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155942: ;
    eax = MEM32(esi);
    ecx = 0xC00;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00155981; /* je: equal / zero */

loc_0015594D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155973; /* je: equal / zero */

loc_00155954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155967; /* je: equal / zero */

loc_0015595B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155987; /* jne: not equal / not zero */

loc_0015595F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) | 3;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00155987;

loc_00155967: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0015597D;

loc_00155973: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015597D: ;
    MEM32(eax) = ecx;
    goto loc_00155987;

loc_00155981: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155987: ;
    eax = MEM32(esi);
    ecx = 0x300;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001559B2; /* je: equal / zero */

loc_00155992: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001559A5; /* je: equal / zero */

loc_00155999: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001559BF; /* jne: not equal / not zero */

loc_0015599D: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFE3u;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_001559BF;

loc_001559A5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFE7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001559BD;

loc_001559B2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax);
    ecx = ecx & 0xFFFFFFEBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001559BD: ;
    MEM32(eax) = ecx;

loc_001559BF: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 0x1FFE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = MEM32(eax) ^ ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) | ebx;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x20);
    ecx = ecx & 0xFFFFFFE3u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x20) = ecx;
    eax = MEM32(ebp + 0x18);
    fp_push(MEMD(eax)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x10) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) | ebx;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x60);
    ecx = ecx & 0xFFFFFFE3u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(ebp + 0x1C);
    MEM32(eax + 0x60) = ecx;
    fp_push(MEMD(edi)); /* fld double */
    eax = MEM32(ebp + 8);
    MEMD(eax + 0x50) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155A15u); RECOMP_ABI_CALL(0x00156179u, sub_00156179); /* call 0x00156179 */

loc_00155A15: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155A24u); RECOMP_ABI_CALL(0x000AD0FAu, sub_000AD0FA); /* call 0x000AD0FA */

loc_00155A24: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155A30; /* je: equal / zero */

loc_00155A2D: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A30: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155A39; /* je: equal / zero */

loc_00155A36: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A39: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155A42; /* je: equal / zero */

loc_00155A3F: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A42: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155A4B; /* je: equal / zero */

loc_00155A48: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFEFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A4B: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155A53; /* je: equal / zero */

loc_00155A50: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A53: ;
    ecx = MEM32(eax);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0xFFFFF3FFu;
    if ((_fa == 0)) goto loc_00155A93; /* je: equal / zero */

loc_00155A62: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155A81; /* je: equal / zero */

loc_00155A65: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155A71; /* je: equal / zero */

loc_00155A68: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00155A95; /* jne: not equal / not zero */

loc_00155A6B: ;
    MEM8(esi + 1) = MEM8(esi + 1) | 0xC;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00155A95;

loc_00155A71: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFFBFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00155A8F;

loc_00155A81: ;
    ecx = MEM32(esi);
    ecx = ecx & 0xFFFFF7FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155A8F: ;
    MEM32(esi) = ecx;
    goto loc_00155A95;

loc_00155A93: ;
    MEM32(esi) = MEM32(esi) & edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155A95: ;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00155AB8; /* je: equal / zero */

loc_00155AA2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00155AAC; /* je: equal / zero */

loc_00155AA5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00155AC4; /* jne: not equal / not zero */

loc_00155AA8: ;
    MEM32(esi) = MEM32(esi) & edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00155AC4;

loc_00155AAC: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x200;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00155AC2;

loc_00155AB8: ;
    ecx = MEM32(esi);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x300;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00155AC2: ;
    MEM32(esi) = ecx;

loc_00155AC4: ;
    fp_push(MEMD(eax + 0x50)); /* fld double */
    MEMD(edi) = fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155ACE
 * Original: 0x00155ACE - 0x00155CBB (493 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155ACE(void)
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

loc_00155ACE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(ebp + -4) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00155AFC; /* je: equal / zero */

loc_00155AE8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155AFC; /* je: equal / zero */

loc_00155AED: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155AF3u); RECOMP_ABI_CALL(0x001561A9u, sub_001561A9); /* call 0x001561A9 */

loc_00155AF3: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFF7u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00155C99;

loc_00155AFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155B16; /* je: equal / zero */

loc_00155B00: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155B16; /* je: equal / zero */

loc_00155B06: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155B0Du); RECOMP_ABI_CALL(0x001561A9u, sub_001561A9); /* call 0x001561A9 */

loc_00155B0D: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFFBu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00155C99;

loc_00155B16: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155BC8; /* je: equal / zero */

loc_00155B1E: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155BC8; /* je: equal / zero */

loc_00155B28: ;
    PUSH32(esp, 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155B2Fu); RECOMP_ABI_CALL(0x001561A9u, sub_001561A9); /* call 0x001561A9 */

loc_00155B2F: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, ecx);
    ecx = 0xC00;
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00155BA4; /* je: equal / zero */

loc_00155B3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155B8A; /* je: equal / zero */

loc_00155B43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x800 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155B68; /* je: equal / zero */

loc_00155B4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155BC0; /* jne: not equal / not zero */

loc_00155B4E: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    fp_push(MEMD(0x2FD060)); /* fld double */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155BBE; /* je: equal / zero */

loc_00155B66: ;
    goto loc_00155BBC;

loc_00155B68: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00155B82; /* jne: not equal / not zero */

loc_00155B7A: ;
    fp_push(MEMD(0x2FD050)); /* fld double */
    goto loc_00155BBE;

loc_00155B82: ;
    fp_push(MEMD(0x2FD060)); /* fld double */
    goto loc_00155BBC;

loc_00155B8A: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00155BB6; /* jne: not equal / not zero */

loc_00155B9C: ;
    fp_push(MEMD(0x2FD060)); /* fld double */
    goto loc_00155BBE;

loc_00155BA4: ;
    ecx = MEM32(ebp + 0xC);
    fp_push(MEMD(ecx)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155B7A; /* je: equal / zero */

loc_00155BB6: ;
    fp_push(MEMD(0x2FD050)); /* fld double */

loc_00155BBC: ;
    fp_top() = -fp_top(); /* fchs */

loc_00155BBE: ;
    MEMD(ecx) = fp_top(); fp_pop(); /* fstp */

loc_00155BC0: ;
    esi = esi & 0xFFFFFFFEu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00155C99;

loc_00155BC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155C99; /* je: equal / zero */

loc_00155BD0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155C99; /* je: equal / zero */

loc_00155BDA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155BE2; /* je: equal / zero */

loc_00155BE0: ;
    esi = ebx;

loc_00155BE2: ;
    fp_push(MEMD(0x22CA68)); /* fld double */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    fp_push(MEMD(edi)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00155C83; /* jnp: not parity */

loc_00155BFB: ;
    fp_push(MEMD(edi)); /* fld double */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155C0Bu); RECOMP_ABI_CALL(0x001560BAu, sub_001560BA); /* call 0x001560BA */

loc_00155C0B: ;
    ecx = MEM32(ebp + -8);
    MEMD(ebp + -16) = fp_top(); /* fst */
    _fb = (uint32_t)(0xFFFFFA00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFA00u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFBCEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFBCEu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00155C2C; /* jge: greater or equal (signed >=) */

loc_00155C22: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22CA68)); /* fmul qword ptr [0x22ca68] */
    esi = ebx;
    goto loc_00155C7F;

loc_00155C2C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00155C3D; /* jp: parity */

loc_00155C39: ;
    edx = ebx;
    goto loc_00155C3F;

loc_00155C3D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00155C3F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebp + -10));
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + -10) = LO16(eax);
    eax = 0xFFFFFC03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00155C76; /* jge: greater or equal (signed >=) */

loc_00155C57: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00155C59: ;
    _fa = (uint32_t)(MEM8(ebp + -16)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -16), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155C64; /* je: equal / zero */

loc_00155C5E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155C64; /* jne: not equal / not zero */

loc_00155C62: ;
    esi = ebx;

loc_00155C64: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) >> 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + -12)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -12), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155C70; /* je: equal / zero */

loc_00155C6C: ;
    MEM8(ebp + -13) = MEM8(ebp + -13) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00155C70: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) >> 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00155C59; /* jne: not equal / not zero */

loc_00155C76: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push(MEMD(ebp + -16)); /* fld double */
    if (CMP_EQ(_fa, _fb)) goto loc_00155C7F; /* je: equal / zero */

loc_00155C7D: ;
    fp_top() = -fp_top(); /* fchs */

loc_00155C7F: ;
    MEMD(edi) = fp_top(); fp_pop(); /* fstp */
    goto loc_00155C85;

loc_00155C83: ;
    esi = ebx;

loc_00155C85: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00155C92; /* je: equal / zero */

loc_00155C8A: ;
    PUSH32(esp, 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155C91u); RECOMP_ABI_CALL(0x001561A9u, sub_001561A9); /* call 0x001561A9 */

loc_00155C91: ;
    POP32(esp, ecx);

loc_00155C92: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + -4);

loc_00155C99: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155CB0; /* je: equal / zero */

loc_00155C9F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155CB0; /* je: equal / zero */

loc_00155CA5: ;
    PUSH32(esp, 0x20);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155CACu); RECOMP_ABI_CALL(0x001561A9u, sub_001561A9); /* call 0x001561A9 */

loc_00155CAC: ;
    POP32(esp, ecx);
    esi = esi & 0xFFFFFFEFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00155CB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155CBB
 * Original: 0x00155CBB - 0x00155CE3 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155CBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155CBB: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155CD7; /* je: equal / zero */

loc_00155CC4: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00155CE2; /* jle: less or equal (signed <=) */

loc_00155CC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00155CE2; /* jg: greater (signed >) */

loc_00155CCB: ;
    PUSH32(esp, 0x00155CD0u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00155CD0: ;
    MEM32(eax) = 0x22;
    esp += 4; return; /* ret */

loc_00155CD7: ;
    PUSH32(esp, 0x00155CDCu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00155CDC: ;
    MEM32(eax) = 0x21;

loc_00155CE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00155D03
 * Original: 0x00155D03 - 0x00155D30 (45 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D03(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155D03: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155D0F; /* je: equal / zero */

loc_00155D0B: ;
    PUSH32(esp, 5);
    goto loc_00155D25;

loc_00155D0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155D17; /* je: equal / zero */

loc_00155D13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00155D17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155D1F; /* je: equal / zero */

loc_00155D1B: ;
    PUSH32(esp, 2);
    goto loc_00155D25;

loc_00155D1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155D27; /* je: equal / zero */

loc_00155D23: ;
    PUSH32(esp, 3);

loc_00155D25: ;
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00155D27: ;
    eax = ZX8(LO8(eax));
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00155D30
 * Original: 0x00155D30 - 0x00155DCE (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155D30(void)
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

loc_00155D30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00155D38: ;
    ecx = MEM32(eax * 8 + 0x2FCF68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155DA8; /* je: equal / zero */

loc_00155D44: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00155D38; /* jl: less (signed <) */

loc_00155D4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00155D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00155DB1; /* je: equal / zero */

loc_00155D53: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D8Bu); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155D8B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155D94u); RECOMP_ABI_CALL(0x0015B3D5u, sub_0015B3D5); /* call 0x0015B3D5 */

loc_00155D94: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155DA2; /* jne: not equal / not zero */

loc_00155D9B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DA1u); RECOMP_ABI_CALL(0x00155CBBu, sub_00155CBB); /* call 0x00155CBB */

loc_00155DA1: ;
    POP32(esp, ecx);

loc_00155DA2: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00155DA8: ;
    eax = MEM32(eax * 8 + 0x2FCF6C);
    goto loc_00155D4C;

loc_00155DB1: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DBEu); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155DBE: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DC6u); RECOMP_ABI_CALL(0x00155CBBu, sub_00155CBB); /* call 0x00155CBB */

loc_00155DC6: ;
    fp_push(MEMD(ebp + 0x20)); /* fld double */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155DCE
 * Original: 0x00155DCE - 0x00155E21 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155DCE(void)
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

loc_00155DCE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155E02; /* jne: not equal / not zero */

loc_00155DDA: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155DFDu); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_00155DFD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00155E02: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E07u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00155E07: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(eax) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E1Au); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155E1A: ;
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155E21
 * Original: 0x00155E21 - 0x00155E80 (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155E21(void)
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

loc_00155E21: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(ebp + 0x14)); /* fadd qword ptr [ebp + 0x14] */
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00155E61; /* jne: not equal / not zero */

loc_00155E38: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    fp_push(MEMD(ebp + -8)); /* fld double */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x14)); /* fld double */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0xC)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E5Cu); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_00155E5C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00155E61: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E66u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00155E66: ;
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(eax) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E79u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155E79: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155E80
 * Original: 0x00155E80 - 0x00155F20 (160 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155E80(void)
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

loc_00155E80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155E98u); RECOMP_ABI_CALL(0x00155ACEu, sub_00155ACE); /* call 0x00155ACE */

loc_00155E98: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155EC3; /* jne: not equal / not zero */

loc_00155E9F: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x20;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155EC0u); RECOMP_ABI_CALL(0x0015582Au, sub_0015582A); /* call 0x0015582A */

loc_00155EC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155EC3: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155ECBu); RECOMP_ABI_CALL(0x00155D03u, sub_00155D03); /* call 0x00155D03 */

loc_00155ECB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155F02; /* jne: not equal / not zero */

loc_00155ED7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155F02; /* je: equal / zero */

loc_00155EDB: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155EFDu); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_00155EFD: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00155F1C;

loc_00155F02: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F08u); RECOMP_ABI_CALL(0x00155CBBu, sub_00155CBB); /* call 0x00155CBB */

loc_00155F08: ;
    MEM32(esp) = 0xFFFF;
    PUSH32(esp, MEM32(ebp + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F17u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155F17: ;
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00155F1C: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155F20
 * Original: 0x00155F20 - 0x00155FD1 (177 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155F20(void)
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

loc_00155F20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F38u); RECOMP_ABI_CALL(0x00155ACEu, sub_00155ACE); /* call 0x00155ACE */

loc_00155F38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155F73; /* jne: not equal / not zero */

loc_00155F3F: ;
    eax = MEM32(esp + 0x40);
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    eax = eax & 0xFFFFFFE3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMD(esp + 0x30) = fp_top(); fp_pop(); /* fstp */
    eax = eax | 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x40) = eax;
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x28;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F70u); RECOMP_ABI_CALL(0x0015582Au, sub_0015582A); /* call 0x0015582A */

loc_00155F70: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155F73: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F7Bu); RECOMP_ABI_CALL(0x00155D03u, sub_00155D03); /* call 0x00155D03 */

loc_00155F7B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155FB3; /* jne: not equal / not zero */

loc_00155F87: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155FB3; /* je: equal / zero */

loc_00155F8B: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    fp_push(MEMD(ebp + 0x20)); /* fld double */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x18)); /* fld double */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155FAEu); RECOMP_ABI_CALL(0x00155D30u, sub_00155D30); /* call 0x00155D30 */

loc_00155FAE: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00155FCD;

loc_00155FB3: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155FB9u); RECOMP_ABI_CALL(0x00155CBBu, sub_00155CBB); /* call 0x00155CBB */

loc_00155FB9: ;
    MEM32(esp) = 0xFFFF;
    PUSH32(esp, MEM32(ebp + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155FC8u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00155FC8: ;
    fp_push(MEMD(ebp + 0x20)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00155FCD: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00155FD1
 * Original: 0x00155FD1 - 0x00155FFB (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155FD1(void)
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

loc_00155FD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMD(ebp + 8)); /* fld double */
    ecx = MEM32(ebp + 0xE);
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3FE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFF800Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + -2) = LO16(eax);
    fp_push(MEMD(ebp + -8)); /* fld double */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015603A
 * Original: 0x0015603A - 0x0015605F (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015603A(void)
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

loc_0015603A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    fp_push(MEMD(ebp + 8)); /* fld double */
    ecx = MEM32(ebp + 0xE);
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFF800Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ebp + -2) = LO16(eax);
    fp_push(MEMD(ebp + -8)); /* fld double */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015605F
 * Original: 0x0015605F - 0x001560BA (91 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015605F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015605F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x7FF00000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156077; /* jne: not equal / not zero */

loc_0015606D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156089; /* jne: not equal / not zero */

loc_00156072: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00156077: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF00000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0xFFF00000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156089; /* jne: not equal / not zero */

loc_00156080: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156089; /* jne: not equal / not zero */

loc_00156085: ;
    PUSH32(esp, 2);
    goto loc_001560B3;

loc_00156089: ;
    ecx = MEM32(ebp + 0xE);
    eax = 0x7FF8;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015609C; /* jne: not equal / not zero */

loc_00156098: ;
    PUSH32(esp, 3);
    goto loc_001560B3;

loc_0015609C: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x7FF0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001560B6; /* jne: not equal / not zero */

loc_001560A3: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0x7FFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001560B1; /* jne: not equal / not zero */

loc_001560AC: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001560B6; /* je: equal / zero */

loc_001560B1: ;
    PUSH32(esp, 4);

loc_001560B3: ;
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001560B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001560BA
 * Original: 0x001560BA - 0x0015616E (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001560BA(void)
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

loc_001560BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(0x22CA68)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001560D8; /* jp: parity */

loc_001560CF: ;
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00156167;

loc_001560D8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + 0xE), 0x7FF0 (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00156144; /* jne: not equal / not zero */

loc_001560E2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC), 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001560F0; /* jne: not equal / not zero */

loc_001560EB: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156144; /* je: equal / zero */

loc_001560F0: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    edx = 0xFFFFFC03u;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0015610A; /* jp: parity */

loc_00156105: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015611F;

loc_0015610A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0015611F;

loc_0015610E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) << 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015611B; /* je: equal / zero */

loc_00156117: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) | 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0015611B: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) << 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015611F: ;
    _fa = (uint32_t)(MEM8(ebp + 0xE)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xE), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015610E; /* je: equal / zero */

loc_00156125: ;
    MEM8(ebp + 0xE) = MEM8(ebp + 0xE) & 0xEF;
    _fa = (uint32_t)(MEM8(ebp + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156131; /* je: equal / zero */

loc_0015612D: ;
    MEM8(ebp + 0xF) = MEM8(ebp + 0xF) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00156131: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015613Fu); RECOMP_ABI_CALL(0x00155FD1u, sub_00155FD1); /* call 0x00155FD1 */

loc_0015613F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156167;

loc_00156144: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156152u); RECOMP_ABI_CALL(0x00155FD1u, sub_00155FD1); /* call 0x00155FD1 */

loc_00156152: ;
    edx = MEM32(ebp + 0xE);
    edx = edx >> 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x3FE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x3FE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00156167: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015616E
 * Original: 0x0015616E - 0x00156179 (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015616E(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0015616E: ;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    MEM16(esp) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [esp] */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156179
 * Original: 0x00156179 - 0x00156185 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156179(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00156179: ;
    PUSH32(esp, ecx);
    MEM16(esp) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [esp] */
    /* FPU: fnclex  */
    eax = (uint32_t)(int32_t)SMEM16(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00156185
 * Original: 0x00156185 - 0x001561A9 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156185(void)
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

loc_00156185: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    /* wait - FPU sync */
    MEM16(ebp + -4) = g_fp_control_word; /* fnstcw word ptr [ebp - 4] */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    ecx = ecx & MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ~eax;
    eax = eax & MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + 0xC) = eax;
    g_fp_control_word = MEM16(ebp + 0xC); /* fldcw word ptr [ebp + 0xc] */
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001561A9
 * Original: 0x001561A9 - 0x001561FF (86 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001561A9(void)
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

loc_001561A9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001561BF; /* je: equal / zero */

loc_001561B4: ;
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD078) + 4) << 32) | MEM32(0x2FD078), MEM16((0x2FD078) + 8))); /* fld tbyte */
    SMEM32(esp + 0xC) = (int32_t)recomp_fist(fp_top(), g_fp_control_word, 32); fp_pop(); /* fistp */
    /* wait - FPU sync */

loc_001561BF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001561D4; /* je: equal / zero */

loc_001561C4: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD078) + 4) << 32) | MEM32(0x2FD078), MEM16((0x2FD078) + 8))); /* fld tbyte */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */

loc_001561D4: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001561E3; /* je: equal / zero */

loc_001561D9: ;
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD084) + 4) << 32) | MEM32(0x2FD084), MEM16((0x2FD084) + 8))); /* fld tbyte */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */

loc_001561E3: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001561F1; /* je: equal / zero */

loc_001561E8: ;
    fp_push(0.0); /* fldz */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_pop(); /* fstp st(0) */
    /* wait - FPU sync */

loc_001561F1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001561FC; /* je: equal / zero */

loc_001561F6: ;
    fp_push(3.14159265358979323846); /* fldpi */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    /* wait - FPU sync */

loc_001561FC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001561FF
 * Original: 0x001561FF - 0x00156245 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001561FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001561FF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156222; /* jne: not equal / not zero */

loc_0015620E: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156222; /* jne: not equal / not zero */

loc_00156214: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156222; /* jne: not equal / not zero */

loc_0015621D: ;
    PUSH32(esp, 0x00156222u); RECOMP_ABI_CALL(0x00156DEEu, sub_00156DEE); /* call 0x00156DEE */

loc_00156222: ;
    eax = MEM32(0x98B250);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015623F; /* je: equal / zero */

loc_0015622B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00156231u); RECOMP_ABI_CALL(0x0015B40Eu, sub_0015B40E); /* call 0x0015B40E */

loc_00156231: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0015623F; /* je: equal / zero */

loc_00156236: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x98B250); PUSH32(esp, 0x0015623Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156237u); } /* indirect call */
    }

loc_0015623D: ;
    goto loc_00156241;

loc_0015623F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00156241: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00156245
 * Original: 0x00156245 - 0x00156257 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00156245(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156245: ;
    PUSH32(esp, 0x1561FF);
    PUSH32(esp, 0x0015624Fu); RECOMP_ABI_CALL(0x000AD1F1u, sub_000AD1F1); /* call 0x000AD1F1 */

loc_0015624F: ;
    MEM32(0x98B250) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00156257
 * Original: 0x00156257 - 0x00156263 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156257(void)
{

loc_00156257: ;
    PUSH32(esp, MEM32(0x98B250));
    PUSH32(esp, 0x00156262u); RECOMP_ABI_CALL(0x000AD1F1u, sub_000AD1F1); /* call 0x000AD1F1 */

loc_00156262: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00156263
 * Original: 0x00156263 - 0x001562D5 (114 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156263(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00156263: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001562D0; /* je: equal / zero */

loc_0015626B: ;
    esi = eax + 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001562D0; /* je: equal / zero */

loc_00156273: ;
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001562AA; /* je: equal / zero */

loc_0015627A: ;
    eax = ecx + 8;
    PUSH32(esp, ebx);

loc_0015627E: ;
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001562A0; /* jne: not equal / not zero */

loc_00156286: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015629C; /* je: equal / zero */

loc_0015628A: ;
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001562A0; /* jne: not equal / not zero */

loc_00156294: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015627E; /* jne: not equal / not zero */

loc_0015629C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001562A5;

loc_001562A0: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001562A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001562CC; /* jne: not equal / not zero */

loc_001562AA: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001562B4; /* je: equal / zero */

loc_001562AF: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001562CC; /* je: equal / zero */

loc_001562B4: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001562C3; /* je: equal / zero */

loc_001562BE: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001562CC; /* je: equal / zero */

loc_001562C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001562D0; /* je: equal / zero */

loc_001562C7: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001562D0; /* jne: not equal / not zero */

loc_001562CC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001562D0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001562D5
 * Original: 0x001562D5 - 0x001562F3 (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001562D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001562D5: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001562E2; /* je: equal / zero */

loc_001562DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001562E2: ;
    PUSH32(esp, 0x001562E7u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001562E7: ;
    MEM32(eax + 0x80) = MEM32(eax + 0x80) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_001562F3
 * Original: 0x001562F3 - 0x0015631B (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001562F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001562F3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B10D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001562FFu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001562FF: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebx + 8);
    MEM32(ebp + -28) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015630Du); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015630D: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 0x10);

    g_seh_ebp = ebp; sub_0015631B(); return; /* fallthrough 0x0015631B */

}

/**
 * sub_0015631B
 * Original: 0x0015631B - 0x001563A0 (133 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015631B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015631B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156384; /* je: equal / zero */

loc_00156320: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015632A; /* jle: less or equal (signed <=) */

loc_00156325: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015632F; /* jl: less (signed <) */

loc_0015632A: ;
    PUSH32(esp, 0x0015632Fu); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_0015632F: ;
    eax = esi;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx);
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156360; /* je: equal / zero */

loc_0015634B: ;
    MEM32(ebx + 8) = esi;
    PUSH32(esp, 0x103);
    PUSH32(esp, ebx);
    ecx = MEM32(edi + 8);
    PUSH32(esp, MEM32(ecx + eax + 4));
    PUSH32(esp, 0x00156360u); RECOMP_ABI_CALL(0x00156E70u, sub_00156E70); /* call 0x00156E70 */

loc_00156360: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015637F;

    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x0015636Eu); RECOMP_ABI_CALL(0x001562D5u, sub_001562D5); /* call 0x001562D5 */

loc_0015636E: ;
    esp += 4; return; /* ret */

loc_0015637F: ;
    MEM32(ebp + -28) = esi;
    goto loc_0015631B;

loc_00156384: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015638Du); RECOMP_ABI_CALL(0x001563A6u, sub_001563A6); /* call 0x001563A6 */

loc_0015638D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156397; /* je: equal / zero */

loc_00156392: ;
    PUSH32(esp, 0x00156397u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156397: ;
    MEM32(ebx + 8) = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015639Fu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015639F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00156366
 * Original: 0x00156366 - 0x001563A0 (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156366(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156366: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x0015636Eu); RECOMP_ABI_CALL(0x001562D5u, sub_001562D5); /* call 0x001562D5 */

loc_0015636E: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0015638Du); RECOMP_ABI_CALL(0x001563A6u, sub_001563A6); /* call 0x001563A6 */

loc_0015638D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156397; /* je: equal / zero */

loc_00156392: ;
    PUSH32(esp, 0x00156397u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156397: ;
    MEM32(ebx + 8) = esi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015639Fu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015639F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001563A6
 * Original: 0x001563A6 - 0x001563C1 (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001563A6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001563A6: ;
    PUSH32(esp, 0x001563ABu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001563AB: ;
    _fa = (uint32_t)(MEM32(eax + 0x80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x80), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001563C0; /* jle: less or equal (signed <=) */

loc_001563B4: ;
    PUSH32(esp, 0x001563B9u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001563B9: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) - 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001563C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001563E7
 * Original: 0x001563E7 - 0x0015641B (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001563E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001563E7: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B10F0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001563F3u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001563F3: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156415; /* je: equal / zero */

loc_001563FA: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156415; /* je: equal / zero */

loc_00156404: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156411u); RECOMP_ABI_CALL(0x00150AC3u, sub_00150AC3); /* call 0x00150AC3 */

loc_00156411: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00156415: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015641Au); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015641A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015641B
 * Original: 0x0015641B - 0x00156424 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015641B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015641B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00156424
 * Original: 0x00156424 - 0x0015642C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156424(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156424: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_0015642C
 * Original: 0x0015642C - 0x0015644B (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015642C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015642C: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156449; /* jl: less (signed <) */

loc_00156439: ;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    esi = MEM32(edx + esi);
    ecx = MEM32(esi + ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156449: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00156524
 * Original: 0x00156524 - 0x001565AA (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156524(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156524: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001565A8; /* je: equal / zero */

loc_0015652F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156535u); RECOMP_ABI_CALL(0x00150DF1u, sub_00150DF1); /* call 0x00150DF1 */

loc_00156535: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00156592; /* jne: not equal / not zero */

loc_0015653D: ;
    PUSH32(esp, 0x00156542u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156542: ;
    eax = MEM32(eax + 0x78);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156592; /* jne: not equal / not zero */

loc_0015654D: ;
    PUSH32(esp, 0x00156552u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156552: ;
    eax = MEM32(eax + 0x78);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156592; /* jne: not equal / not zero */

loc_0015655B: ;
    PUSH32(esp, 0x00156560u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156560: ;
    eax = MEM32(eax + 0x78);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156592; /* jne: not equal / not zero */

loc_0015656C: ;
    PUSH32(esp, 0x00156571u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156571: ;
    eax = MEM32(eax + 0x78);
    PUSH32(esp, MEM32(eax + 0x18));
    PUSH32(esp, 0x0015657Cu); RECOMP_ABI_CALL(0x00150DD0u, sub_00150DD0); /* call 0x00150DD0 */

loc_0015657C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00156592; /* je: equal / zero */

loc_00156581: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00156588u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156588: ;
    PUSH32(esp, MEM32(eax + 0x78));
    PUSH32(esp, 0x00156590u); RECOMP_ABI_CALL(0x001563E7u, sub_001563E7); /* call 0x001563E7 */

loc_00156590: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00156592: ;
    PUSH32(esp, 0x00156597u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156597: ;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x78) = ecx;
    PUSH32(esp, 0x001565A2u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001565A2: ;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0x7C) = ecx;

loc_001565A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001565C6
 * Original: 0x001565C6 - 0x001565CF (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001565C6: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x001565CEu); RECOMP_ABI_CALL(0x001562D5u, sub_001562D5); /* call 0x001562D5 */

loc_001565CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001565CF
 * Original: 0x001565CF - 0x001565FD (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001565CF: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001565DBu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001565DB: ;
    esp += 4; return; /* ret */

    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x001565FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001565F8u); } /* indirect call */
    }

loc_001565FB: ;
    g_seh_ebp = ebp; sub_00156609(); return; /* tail jmp 0x00156609 */

}

/**
 * sub_001565FD
 * Original: 0x001565FD - 0x00156609 (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001565FD: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x00156605u); RECOMP_ABI_CALL(0x001562D5u, sub_001562D5); /* call 0x001562D5 */

loc_00156605: ;
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00156609(); return; /* fallthrough 0x00156609 */

}

/**
 * sub_00156609
 * Original: 0x00156609 - 0x00156613 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156609(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156609: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00156612u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156612: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00156613
 * Original: 0x00156613 - 0x00156750 (317 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156613(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156613: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x2B1120);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015661Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015661F: ;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = ebx;
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi + -4);
    MEM32(ebp + -56) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    eax = ebp + -80;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156640u); RECOMP_ABI_CALL(0x00150DA8u, sub_00150DA8); /* call 0x00150DA8 */

loc_00156640: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015664Au); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015664A: ;
    eax = MEM32(eax + 0x78);
    MEM32(ebp + -64) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156655u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156655: ;
    eax = MEM32(eax + 0x7C);
    MEM32(ebp + -68) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156660u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156660: ;
    MEM32(eax + 0x78) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156668u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156668: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x7C) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = 1;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156689u); RECOMP_ABI_CALL(0x00150E3Du, sub_00150E3D); /* call 0x00150E3D */

loc_00156689: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_0015673B;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566AB: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566B4: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566C0: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    MEM32(ebp + -36) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001566D7; /* je: equal / zero */

loc_001566D0: ;
    MEM32(ebp + -36) = 0;

loc_001566D7: ;
    eax = MEM32(ebp + -36);
    esp += 4; return; /* ret */

loc_001566F8: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00156724; /* jae: above or equal (unsigned >=) */

loc_00156700: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015674D; /* jle: less or equal (signed <=) */

loc_00156710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015674D; /* jg: greater (signed >) */

loc_00156715: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00156724: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015672Fu); RECOMP_ABI_CALL(0x001562F3u, sub_001562F3); /* call 0x001562F3 */

loc_0015672F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);

loc_0015673B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156744u); RECOMP_ABI_CALL(0x00156756u, sub_00156756); /* call 0x00156756 */

loc_00156744: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015674Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015674C: ;
    esp += 4; return; /* ret */

loc_0015674D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001566F8;

}

/**
 * sub_00156698
 * Original: 0x00156698 - 0x00156750 (184 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156698(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156698: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566AB: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566B4: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001566D0; /* jne: not equal / not zero */

loc_001566C0: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    MEM32(ebp + -36) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001566D7; /* je: equal / zero */

loc_001566D0: ;
    MEM32(ebp + -36) = 0;

loc_001566D7: ;
    eax = MEM32(ebp + -36);
    esp += 4; return; /* ret */

loc_001566F8: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00156724; /* jae: above or equal (unsigned >=) */

loc_00156700: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015674D; /* jle: less or equal (signed <=) */

loc_00156710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015674D; /* jg: greater (signed >) */

loc_00156715: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00156724: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015672Fu); RECOMP_ABI_CALL(0x001562F3u, sub_001562F3); /* call 0x001562F3 */

loc_0015672F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00156744u); RECOMP_ABI_CALL(0x00156756u, sub_00156756); /* call 0x00156756 */

loc_00156744: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015674Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015674C: ;
    esp += 4; return; /* ret */

loc_0015674D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001566F8;

}

/**
 * sub_001566DB
 * Original: 0x001566DB - 0x00156750 (117 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001566DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001566DB: ;
    esp = MEM32(ebp + -24);
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 8);
    MEM32(ebp + -48) = eax;
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    MEM32(ebp + -40) = eax;
    edx = MEM32(ecx + 0x10);
    MEM32(ebp + -44) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001566F8: ;
    MEM32(ebp + -52) = edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00156724; /* jae: above or equal (unsigned >=) */

loc_00156700: ;
    esi = edx + edx * 4;
    ebx = MEM32(ebp + -44);
    esi = ebx + esi * 4;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015674D; /* jle: less or equal (signed <=) */

loc_00156710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0015674D; /* jg: greater (signed >) */

loc_00156715: ;
    eax = ebx + 1;
    MEM32(ebp + -40) = eax;
    edx = MEM32(ebp + -48);
    eax = MEM32(edx + eax * 8);
    MEM32(ebp + -40) = eax;

loc_00156724: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015672Fu); RECOMP_ABI_CALL(0x001562F3u, sub_001562F3); /* call 0x001562F3 */

loc_0015672F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00156744u); RECOMP_ABI_CALL(0x00156756u, sub_00156756); /* call 0x00156756 */

loc_00156744: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015674Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015674C: ;
    esp += 4; return; /* ret */

loc_0015674D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001566F8;

}

/**
 * sub_00156756
 * Original: 0x00156756 - 0x001567BA (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156756(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156756: ;
    eax = MEM32(ebp + -56);
    MEM32(edi + -4) = eax;
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, 0x00156764u); RECOMP_ABI_CALL(0x00150DF1u, sub_00150DF1); /* call 0x00150DF1 */

loc_00156764: ;
    POP32(esp, ecx);
    PUSH32(esp, 0x0015676Au); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_0015676A: ;
    ecx = MEM32(ebp + -64);
    MEM32(eax + 0x78) = ecx;
    PUSH32(esp, 0x00156775u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156775: ;
    ecx = MEM32(ebp + -68);
    MEM32(eax + 0x7C) = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001567B9; /* jne: not equal / not zero */

loc_00156783: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001567B9; /* jne: not equal / not zero */

loc_00156789: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001567B9; /* jne: not equal / not zero */

loc_00156792: ;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -72), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001567B9; /* jne: not equal / not zero */

loc_00156798: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001567B9; /* je: equal / zero */

loc_0015679E: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, 0x001567A6u); RECOMP_ABI_CALL(0x00150DD0u, sub_00150DD0); /* call 0x00150DD0 */

loc_001567A6: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001567B9; /* je: equal / zero */

loc_001567AB: ;
    PUSH32(esp, 0x001567B0u); RECOMP_ABI_CALL(0x00150F42u, sub_00150F42); /* call 0x00150F42 */

loc_001567B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001567B7u); RECOMP_ABI_CALL(0x001563E7u, sub_001563E7); /* call 0x001563E7 */

loc_001567B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_001567B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001567BA
 * Original: 0x001567BA - 0x0015692A (368 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001567BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001567BA: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B1138);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001567C6u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001567C6: ;
    esi = ecx;
    eax = MEM32(ebp + 0xC);
    edi = edx;
    ebx = MEM32(ebp + 8);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156924; /* je: equal / zero */

loc_001567DB: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156924; /* je: equal / zero */

loc_001567E5: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001567F6; /* jne: not equal / not zero */

loc_001567EC: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 3), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00156924; /* je: equal / zero */

loc_001567F6: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00156800; /* js: sign (negative) */

loc_001567FC: ;
    edi = ecx + edi + 0xC;

loc_00156800: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebx + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00156842; /* je: equal / zero */

loc_0015680D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156812u); RECOMP_ABI_CALL(0x0015B3D8u, sub_0015B3D8); /* call 0x0015B3D8 */

loc_00156812: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_0015681C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156824u); RECOMP_ABI_CALL(0x0015B3F3u, sub_0015B3F3); /* call 0x0015B3F3 */

loc_00156824: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_0015682E: ;
    eax = MEM32(ebx + 0x18);
    MEM32(edi) = eax;

loc_00156833: ;
    ecx = esi + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015683Bu); RECOMP_ABI_CALL(0x0015642Cu, sub_0015642C); /* call 0x0015642C */

loc_0015683B: ;
    MEM32(edi) = eax;
    goto loc_00156920;

loc_00156842: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015688D; /* je: equal / zero */

loc_00156847: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015684Cu); RECOMP_ABI_CALL(0x0015B3D8u, sub_0015B3D8); /* call 0x0015B3D8 */

loc_0015684C: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_00156856: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015685Eu); RECOMP_ABI_CALL(0x0015B3F3u, sub_0015B3F3); /* call 0x0015B3F3 */

loc_0015685E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_00156868: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(ebx + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156874u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_00156874: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156920; /* jne: not equal / not zero */

loc_00156881: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156920; /* je: equal / zero */

loc_0015688B: ;
    goto loc_00156833;

loc_0015688D: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001568C6; /* jne: not equal / not zero */

loc_00156893: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156898u); RECOMP_ABI_CALL(0x0015B3D8u, sub_0015B3D8); /* call 0x0015B3D8 */

loc_00156898: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_0015689E: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568A6u); RECOMP_ABI_CALL(0x0015B3F3u, sub_0015B3F3); /* call 0x0015B3F3 */

loc_001568A6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_001568AC: ;
    PUSH32(esp, MEM32(esi + 0x14));
    ecx = esi + 8;
    eax = MEM32(ebx + 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568BAu); RECOMP_ABI_CALL(0x0015642Cu, sub_0015642C); /* call 0x0015642C */

loc_001568BA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568C1u); RECOMP_ABI_CALL(0x00150700u, sub_00150700); /* call 0x00150700 */

loc_001568C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156920;

loc_001568C6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568CBu); RECOMP_ABI_CALL(0x0015B3D8u, sub_0015B3D8); /* call 0x0015B3D8 */

loc_001568CB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_001568D1: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568D9u); RECOMP_ABI_CALL(0x0015B3F3u, sub_0015B3F3); /* call 0x0015B3F3 */

loc_001568D9: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_001568DF: ;
    PUSH32(esp, MEM32(esi + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568E7u); RECOMP_ABI_CALL(0x0015B40Eu, sub_0015B40E); /* call 0x0015B40E */

loc_001568E7: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015691B; /* je: equal / zero */

loc_001568EC: ;
    eax = MEM32(ebx + 0x18);
    ecx = esi + 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015690A; /* je: equal / zero */

loc_001568F7: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001568FEu); RECOMP_ABI_CALL(0x0015642Cu, sub_0015642C); /* call 0x0015642C */

loc_001568FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156908u); RECOMP_ABI_CALL(0x00150AD1u, sub_00150AD1); /* call 0x00150AD1 */

loc_00156908: ;
    goto loc_00156920;

loc_0015690A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015690Fu); RECOMP_ABI_CALL(0x0015642Cu, sub_0015642C); /* call 0x0015642C */

loc_0015690F: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156919u); RECOMP_ABI_CALL(0x00150ACAu, sub_00150ACA); /* call 0x00150ACA */

loc_00156919: ;
    goto loc_00156920;

loc_0015691B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156920u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156920: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00156924: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156929u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156929: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015692A
 * Original: 0x0015692A - 0x0015692E (4 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015692A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015692A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0015692E
 * Original: 0x0015692E - 0x00156936 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015692E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015692E: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156936
 * Original: 0x00156936 - 0x00156A48 (274 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156936(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156936: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015694D; /* jne: not equal / not zero */

loc_00156946: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00156A45;

loc_0015694D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_00156A0A; /* je: equal / zero */

loc_0015695C: ;
    _fa = (uint32_t)(MEM8(ebx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A0A; /* je: equal / zero */

loc_00156966: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A30; /* jne: not equal / not zero */

loc_00156972: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A30; /* jne: not equal / not zero */

loc_0015697C: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A30; /* jne: not equal / not zero */

loc_00156989: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001569A4; /* jne: not equal / not zero */

loc_0015698E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156993u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156993: ;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x78), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A30; /* je: equal / zero */

loc_0015699C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001569A1u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001569A1: ;
    esi = MEM32(eax + 0x78);

loc_001569A4: ;
    eax = MEM32(ebp + 0x10);
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC);
    MEM32(ebp + -16) = ebx;
    ebx = eax + 4;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00156A30; /* jle: less or equal (signed <=) */

loc_001569C4: ;
    edx = MEM32(ebx);
    PUSH32(esp, MEM32(esi + 0x1C));
    edi = ebp + -20;
    MEM32(ebp + -4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001569D4u); RECOMP_ABI_CALL(0x00156263u, sub_00156263); /* call 0x00156263 */

loc_001569D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001569E6; /* jne: not equal / not zero */

loc_001569D9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001569C4; /* jg: greater (signed >) */

loc_001569E4: ;
    goto loc_00156A30;

loc_001569E6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001569EBu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_001569EB: ;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A40; /* je: equal / zero */

loc_001569F9: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A06u); RECOMP_ABI_CALL(0x001567BAu, sub_001567BA); /* call 0x001567BA */

loc_00156A06: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00156A40;

loc_00156A0A: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A34; /* jne: not equal / not zero */

loc_00156A12: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A34; /* jne: not equal / not zero */

loc_00156A18: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19930520) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 0x19930520 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A34; /* jne: not equal / not zero */

loc_00156A21: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A34; /* jne: not equal / not zero */

loc_00156A26: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A2Bu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156A2B: ;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x78), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A34; /* jne: not equal / not zero */

loc_00156A30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00156A43;

loc_00156A34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A39u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156A39: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156A40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156A43: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00156A45: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00156A48
 * Original: 0x00156A48 - 0x00156AAF (103 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156A48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156A48: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A5C; /* je: equal / zero */

loc_00156A4F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A5Au); RECOMP_ABI_CALL(0x001567BAu, sub_001567BA); /* call 0x001567BA */

loc_00156A5A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00156A5C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_NE(_fa, _fb)) goto loc_00156A68; /* jne: not equal / not zero */

loc_00156A65: ;
    PUSH32(esp, esi);
    goto loc_00156A6B;

loc_00156A68: ;
    PUSH32(esp, MEM32(ebp + 0x1C));

loc_00156A6B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A70u); RECOMP_ABI_CALL(0x00150AD8u, sub_00150AD8); /* call 0x00150AD8 */

loc_00156A70: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A7Eu); RECOMP_ABI_CALL(0x001562F3u, sub_001562F3); /* call 0x001562F3 */

loc_00156A7E: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0x100);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 8) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156A9Fu); RECOMP_ABI_CALL(0x00156613u, sub_00156613); /* call 0x00156613 */

loc_00156A9F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156AAD; /* je: equal / zero */

loc_00156AA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156AADu); RECOMP_ABI_CALL(0x00150A93u, sub_00150A93); /* call 0x00150A93 */

loc_00156AAD: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00156AAF
 * Original: 0x00156AAF - 0x00156B6D (190 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156AAF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156AAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000003u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x80000003u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B6A; /* je: equal / zero */

loc_00156AC4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156AC9u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156AC9: ;
    _fa = (uint32_t)(MEM32(eax + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x70), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156AEE; /* je: equal / zero */

loc_00156ACF: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156AE7u); RECOMP_ABI_CALL(0x00150BB5u, sub_00150BB5); /* call 0x00150BB5 */

loc_00156AE7: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B6A; /* jne: not equal / not zero */

loc_00156AEE: ;
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B06u); RECOMP_ABI_CALL(0x00150D2Eu, sub_00150D2E); /* call 0x00150D2E */

loc_00156B06: ;
    edi = eax;
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00156B69; /* jae: above or equal (unsigned >=) */

loc_00156B13: ;
    PUSH32(esp, ebx);

loc_00156B14: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156B5A; /* jl: less (signed <) */

loc_00156B18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00156B5A; /* jg: greater (signed >) */

loc_00156B1D: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B35; /* je: equal / zero */

loc_00156B2F: ;
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B5A; /* jne: not equal / not zero */

loc_00156B35: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = eax + -16;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B54u); RECOMP_ABI_CALL(0x00156A48u, sub_00156A48); /* call 0x00156A48 */

loc_00156B54: ;
    esi = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156B5A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00156B14; /* jb: below (unsigned <) */

loc_00156B68: ;
    POP32(esp, ebx);

loc_00156B69: ;
    POP32(esp, edi);

loc_00156B6A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00156B6D
 * Original: 0x00156B6D - 0x00156C57 (234 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156B6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156B6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(ebp + -1) = 0;
    MEM32(ebp + -28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00156B8D; /* jl: less (signed <) */

loc_00156B85: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156B92; /* jl: less (signed <) */

loc_00156B8D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156B92u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156B92: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = 0xE06D7363u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D21(); return; } /* jne: not equal / not zero */

loc_00156BA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    ebx = 0x19930520;
    if (CMP_NE(_fa, _fb)) goto loc_00156C1B; /* jne: not equal / not zero */

loc_00156BB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156C1B; /* jne: not equal / not zero */

loc_00156BB5: ;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156C1B; /* jne: not equal / not zero */

loc_00156BBB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BC0u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156BC0: ;
    _fa = (uint32_t)(MEM32(eax + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x78), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D19(); return; } /* je: equal / zero */

loc_00156BCA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BCFu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156BCF: ;
    esi = MEM32(eax + 0x78);
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BDAu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156BDA: ;
    eax = MEM32(eax + 0x7C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(ebp + 0x10) = eax;
    MEM8(ebp + -1) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BECu); RECOMP_ABI_CALL(0x0015B3D8u, sub_0015B3D8); /* call 0x0015B3D8 */

loc_00156BEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00156BF7; /* jne: not equal / not zero */

loc_00156BF2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156BF7u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156BF7: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D1E(); return; } /* jne: not equal / not zero */

loc_00156BFF: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156C18; /* jne: not equal / not zero */

loc_00156C08: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156C18; /* jne: not equal / not zero */

loc_00156C0D: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156C18; /* jne: not equal / not zero */

loc_00156C13: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C18u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156C18: ;
    esi = MEM32(ebp + 8);

loc_00156C1B: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D21(); return; } /* jne: not equal / not zero */

loc_00156C23: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D21(); return; } /* jne: not equal / not zero */

loc_00156C2D: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00156D21(); return; } /* jne: not equal / not zero */

loc_00156C36: ;
    edi = MEM32(ebp + -28);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156C4Du); RECOMP_ABI_CALL(0x00150D2Eu, sub_00150D2E); /* call 0x00150D2E */

loc_00156C4D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    g_seh_ebp = ebp; sub_00156CFA(); return; /* tail jmp 0x00156CFA */

}

/**
 * sub_00156C57
 * Original: 0x00156C57 - 0x00156D1E (199 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156C57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156C57: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00156CF4; /* jg: greater (signed >) */

loc_00156C5F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00156CF4; /* jg: greater (signed >) */

loc_00156C68: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00156CF1; /* jle: less or equal (signed <=) */

loc_00156C78: ;
    eax = MEM32(esi + 0x1C);
    eax = MEM32(eax + 0xC);
    ecx = eax + 4;
    eax = MEM32(eax);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = eax;

loc_00156C89: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + -44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00156CBA; /* jle: less or equal (signed <=) */

loc_00156C99: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, MEM32(esi + 0x1C));
    edx = MEM32(eax);
    edi = MEM32(ebp + -8);
    PUSH32(esp, 0x00156CA9u); RECOMP_ABI_CALL(0x00156263u, sub_00156263); /* call 0x00156263 */

loc_00156CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00156CC9; /* jne: not equal / not zero */

loc_00156CAE: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 4;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00156C99; /* jg: greater (signed >) */

loc_00156CBA: ;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x10;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00156C89; /* jg: greater (signed >) */

loc_00156CC7: ;
    goto loc_00156CF1;

loc_00156CC9: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ebx;
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 0x00156CE8u); RECOMP_ABI_CALL(0x00156A48u, sub_00156A48); /* call 0x00156A48 */

loc_00156CE8: ;
    esi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156CF1: ;
    edi = MEM32(ebp + -28);

loc_00156CF4: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    MEM32(ebp + -32) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00156C57; /* jb: below (unsigned <) */

loc_00156D09: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156D19; /* je: equal / zero */

loc_00156D0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156D17u); RECOMP_ABI_CALL(0x001563E7u, sub_001563E7); /* call 0x001563E7 */

loc_00156D17: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00156D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00156CFA
 * Original: 0x00156CFA - 0x00156D1E (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156CFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156CFA: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -36) (32-bit) */
    MEM32(ebp + -32) = ebx;
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00156C57(); return; } /* jb: below (unsigned <) */

loc_00156D09: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156D19; /* je: equal / zero */

loc_00156D0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156D17u); RECOMP_ABI_CALL(0x001563E7u, sub_001563E7); /* call 0x001563E7 */

loc_00156D17: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00156D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00156D19
 * Original: 0x00156D19 - 0x00156D1E (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D19(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156D19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00156D1E
 * Original: 0x00156D1E - 0x00156D4C (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D1E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156D1E: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156D47; /* jne: not equal / not zero */

loc_00156D27: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156D42u); RECOMP_ABI_CALL(0x00156AAFu, sub_00156AAF); /* call 0x00156AAF */

loc_00156D42: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00156D19(); return; /* tail jmp 0x00156D19 */

loc_00156D47: ;
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156D21
 * Original: 0x00156D21 - 0x00156D4C (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D21(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156D21: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156D47; /* jne: not equal / not zero */

loc_00156D27: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156D42u); RECOMP_ABI_CALL(0x00156AAFu, sub_00156AAF); /* call 0x00156AAF */

loc_00156D42: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00156D19(); return; /* tail jmp 0x00156D19 */

loc_00156D47: ;
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156D4C
 * Original: 0x00156D4C - 0x00156DEE (162 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156D4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156D4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    eax = eax & 0x1FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 0x19930520;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156D69; /* je: equal / zero */

loc_00156D64: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156D69u); RECOMP_ABI_CALL(0x00156E42u, sub_00156E42); /* call 0x00156E42 */

loc_00156D69: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x66 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00156D91; /* je: equal / zero */

loc_00156D72: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156DE7; /* je: equal / zero */

loc_00156D78: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156DE7; /* jne: not equal / not zero */

loc_00156D7E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156D8Cu); RECOMP_ABI_CALL(0x001562F3u, sub_001562F3); /* call 0x001562F3 */

loc_00156D8C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156DE7;

loc_00156D91: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156DE7; /* je: equal / zero */

loc_00156D97: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE06D7363u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0xE06D7363u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156DCB; /* jne: not equal / not zero */

loc_00156D9F: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00156DCB; /* jbe: below or equal (unsigned <=) */

loc_00156DA4: ;
    ecx = MEM32(eax + 0x1C);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156DCB; /* je: equal / zero */

loc_00156DAE: ;
    edx = ZX8(MEM8(ebp + 0x24));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00156DC6u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00156DC4u); } /* indirect call */
    }

loc_00156DC6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156DEA;

loc_00156DCB: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156DE4u); RECOMP_ABI_CALL(0x00156B6Du, sub_00156B6D); /* call 0x00156B6D */

loc_00156DE4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156DE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156DEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00156DEE
 * Original: 0x00156DEE - 0x00156E42 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156DEE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156DEE: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B1148);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156DFAu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156DFA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156DFFu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156DFF: ;
    _fa = (uint32_t)(MEM32(eax + 0x68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x68), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E1E; /* je: equal / zero */

loc_00156E05: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E0Eu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E0E: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00156E11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E0Eu); } /* indirect call */
    }

loc_00156E11: ;
    goto loc_00156E1A;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00156E1A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00156E1E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0000144u);
    { uint32_t _icall_target = MEM32(0x22BC70); PUSH32(esp, 0x00156E29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E23u); } /* indirect call */
    }

loc_00156E29: ;
    /* int3: debug-trap slide byte, stepped over */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E2Fu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E2F: ;
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E3D; /* je: equal / zero */

loc_00156E35: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E3Au); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E3A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00156E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E3Au); } /* indirect call */
    }

loc_00156E3D: ;
    goto loc_00156DEE;

}

/**
 * sub_00156E13
 * Original: 0x00156E13 - 0x00156E42 (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E13(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156E13: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, 0x00156E2Fu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E2F: ;
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E3D; /* je: equal / zero */

loc_00156E35: ;
    PUSH32(esp, 0x00156E3Au); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E3A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00156E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E3Au); } /* indirect call */
    }

loc_00156E3D: ;
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156E17
 * Original: 0x00156E17 - 0x00156E42 (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E17(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156E17: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC0000144u);
    { uint32_t _icall_target = MEM32(0x22BC70); PUSH32(esp, 0x00156E29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E23u); } /* indirect call */
    }

loc_00156E29: ;
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, 0x00156E2Fu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E2F: ;
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x6C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E3D; /* je: equal / zero */

loc_00156E35: ;
    PUSH32(esp, 0x00156E3Au); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00156E3A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00156E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E3Au); } /* indirect call */
    }

loc_00156E3D: ;
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156E42
 * Original: 0x00156E42 - 0x00156E6F (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156E42: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B1158);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E4Eu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156E4E: ;
    eax = MEM32(0x2FD094);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156E6A; /* je: equal / zero */

loc_00156E57: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00156E5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E5Bu); } /* indirect call */
    }

loc_00156E5D: ;
    goto loc_00156E66;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00156E66: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00156E6A: ;
    g_seh_ebp = ebp; sub_00156DEE(); return; /* tail jmp 0x00156DEE */

}

/**
 * sub_00156E5F
 * Original: 0x00156E5F - 0x00156E6F (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156E5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00156E70
 * Original: 0x00156E70 - 0x00156EBC (76 bytes, 34 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00156E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebp + 0x10);
    ebp = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156E93u); RECOMP_ABI_CALL(0x00150F65u, sub_00150F65); /* call 0x00150F65 */

loc_00156E93: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00156E97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E95u); } /* indirect call */
    }

loc_00156E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ebx = ebp;
    POP32(esp, ebp);
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebp);
    ebp = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156EAF; /* jne: not equal / not zero */

loc_00156EAA: ;
    ecx = 2;

loc_00156EAF: ;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156EB5u); RECOMP_ABI_CALL(0x00150F65u, sub_00150F65); /* call 0x00150F65 */

loc_00156EB5: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00156EBC
 * Original: 0x00156EBC - 0x00156F05 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156EBC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156EBC: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x98B258;

loc_00156EC5: ;
    _fa = (uint32_t)(MEM32(esi * 8 + 0x2FD0A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi * 8 + 0x2FD0A4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156EED; /* jne: not equal / not zero */

loc_00156ECF: ;
    eax = esi * 8 + 0x2FD0A0;
    MEM32(eax) = edi;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, MEM32(eax));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00156EE7u); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_00156EE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00156EF9; /* je: equal / zero */

loc_00156EED: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x24 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156EC5; /* jl: less (signed <) */

loc_00156EF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156EF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00156EF9: ;
    MEM32(esi * 8 + 0x2FD0A0) = MEM32(esi * 8 + 0x2FD0A0) & 0;
    _fa = (uint32_t)(MEM32(esi * 8 + 0x2FD0A0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00156EF6;

}

/**
 * sub_00156F05
 * Original: 0x00156F05 - 0x00156F2E (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F05(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156F05: ;
    PUSH32(esp, esi);
    esi = 0x2FD0A0;

loc_00156F0B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156F21; /* je: equal / zero */

loc_00156F11: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156F21; /* je: equal / zero */

loc_00156F17: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00156F1Du); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00156F1D: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00156F21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FD1C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FD1C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156F0B; /* jl: less (signed <) */

loc_00156F2C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00156F2E
 * Original: 0x00156F2E - 0x00156F40 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F2E(void)
{

loc_00156F2E: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax * 8 + 0x2FD0A0));
    { uint32_t _icall_target = MEM32(0x22BBBC); PUSH32(esp, 0x00156F3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156F39u); } /* indirect call */
    }

loc_00156F3F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00156F54
 * Original: 0x00156F54 - 0x00156FEB (151 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156F54: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x2B1168);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F60u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156F60: ;
    esi = MEM32(ebp + 8);
    esi = esi * 8 + 0x2FD0A0;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156FE2; /* jne: not equal / not zero */

loc_00156F70: ;
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F77u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00156F77: ;
    POP32(esp, ecx);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156F8B; /* jne: not equal / not zero */

loc_00156F7E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F83u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00156F83: ;
    MEM32(eax) = 0xC;
    goto loc_00156FCA;

loc_00156F8B: ;
    PUSH32(esp, 0xA);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156F92u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00156F92: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156FD2; /* jne: not equal / not zero */

loc_00156F9A: ;
    PUSH32(esp, 0xFA0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FA5u); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_00156FA5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156FCE; /* jne: not equal / not zero */

loc_00156FAB: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FB1u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00156FB1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FB6u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00156FB6: ;
    MEM32(eax) = 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FC7u); RECOMP_ABI_CALL(0x00150EDAu, sub_00150EDA); /* call 0x00150EDA */

loc_00156FC7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156FCA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00156FE5;

loc_00156FCE: ;
    MEM32(esi) = edi;
    goto loc_00156FD9;

loc_00156FD2: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FD8u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00156FD8: ;
    POP32(esp, ecx);

loc_00156FD9: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FE2u); RECOMP_ABI_CALL(0x00156FEBu, sub_00156FEB); /* call 0x00156FEB */

loc_00156FE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00156FE5: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156FEAu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00156FEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00156FEB
 * Original: 0x00156FEB - 0x00156FF4 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156FEB(void)
{

loc_00156FEB: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x00156FF2u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00156FF2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00156FF4
 * Original: 0x00156FF4 - 0x00157022 (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156FF4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156FF4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax * 8 + 0x2FD0A0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157018; /* jne: not equal / not zero */

loc_00157005: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015700Bu); RECOMP_ABI_CALL(0x00156F54u, sub_00156F54); /* call 0x00156F54 */

loc_0015700B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00157018; /* jne: not equal / not zero */

loc_00157010: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00157017u); RECOMP_ABI_CALL(0x00159170u, sub_00159170); /* call 0x00159170 */

loc_00157017: ;
    POP32(esp, ecx);

loc_00157018: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi));
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x00157020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015701Au); } /* indirect call */
    }

loc_00157020: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157024
 * Original: 0x00157024 - 0x00157082 (94 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157024(void)
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

loc_00157024: ;
    MEM8(ebp + -144) = 0xFE;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_0015706A; /* jne: not equal / not zero */

loc_0015702F: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00157031: ;
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    goto loc_00157042;

    MEM8(ebp + -144) = 0xFE;
    SET_HI8(ecx, 0); /* xor self */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */

loc_00157042: ;
    PUSH32(esp, 0x00157047u); RECOMP_ABI_CALL(0x00157172u, sub_00157172); /* call 0x00157172 */

loc_00157047: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157058; /* je: equal / zero */

loc_00157054: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */

loc_00157058: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015705F; /* jne: not equal / not zero */

loc_0015705D: ;
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */

loc_0015705F: ;
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00157065; /* je: equal / zero */

loc_00157063: ;
    fp_top() = -fp_top(); /* fchs */

loc_00157065: ;
    g_seh_ebp = ebp; sub_00157314(); return; /* tail jmp 0x00157314 */

loc_0015706A: ;
    PUSH32(esp, 0x0015706Fu); RECOMP_ABI_CALL(0x001571B5u, sub_001571B5); /* call 0x001571B5 */

loc_0015706F: ;
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00157087(); return; } /* je: equal / zero */

loc_00157073: ;
    SET_HI8(ecx, 0); /* xor self */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015707C; /* je: equal / zero */

loc_0015707A: ;
    SET_HI8(ecx, ~HI8(ecx));

loc_0015707C: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fabs(fp_top()); /* fabs */
    goto loc_00157031;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157087
 * Original: 0x00157087 - 0x0015708C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157087(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157087: ;
    g_seh_ebp = ebp; sub_001573C2(); return; /* tail jmp 0x001573C2 */

}

/**
 * sub_00157124
 * Original: 0x00157124 - 0x00157155 (49 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00157124(void)
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

loc_00157124: ;
    POP32(esp, eax);
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157147; /* jne: not equal / not zero */

loc_00157138: ;
    fp_pop(); /* fstp st(0) */
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD1C0) + 4) << 32) | MEM32(0x2FD1C0), MEM16((0x2FD1C0) + 8))); /* fld tbyte */
    SET_HI8(ecx, HI8(ecx) | HI8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00157146; /* je: equal / zero */

loc_00157144: ;
    fp_top() = -fp_top(); /* fchs */

loc_00157146: ;
    esp += 4; return; /* ret */

loc_00157147: ;
    MEM8(ebp + -144) = 4;
    g_seh_ebp = ebp; sub_00157322(); return; /* tail jmp 0x00157322 */

    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_00157155(); return; /* fallthrough 0x00157155 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157155
 * Original: 0x00157155 - 0x00157165 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00157155(void)
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

loc_00157155: ;
    fp_pop(); /* fstp st(0) */
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD1C0) + 4) << 32) | MEM32(0x2FD1C0), MEM16((0x2FD1C0) + 8))); /* fld tbyte */
    MEM8(ebp + -144) = 3;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157172
 * Original: 0x00157172 - 0x001571B5 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157172(void)
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

loc_00157172: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD1DE) + 4) << 32) | MEM32(0x2FD1DE), MEM16((0x2FD1DE) + 8))); /* fld tbyte */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00157124(); return; } /* jne: not equal / not zero */

loc_0015718F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    SET_LO8(edx, MEM8(ebp + -159));
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), 0.0); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* ftst */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_top() = expm1(fp_top() * 0.69314718055994530942); /* f2xm1 */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001571B5
 * Original: 0x001571B5 - 0x001571E9 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001571B5(void)
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

loc_001571B5: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    if (!(_fa & 0x40u) /* sahf */) goto loc_001571DB; /* jne: not equal / not zero */

loc_001571C1: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2FD1F2)); /* fmul qword ptr [0x2fd1f2] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (((_fa >> 11) & 1u) /* sahf */) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    if ((_fa & 0x40u) /* sahf */) goto loc_001571E2; /* je: equal / zero */

loc_001571D5: ;
    eax = 1;

loc_001571DA: ;
    esp += 4; return; /* ret */

loc_001571DB: ;
    eax = 0;
    goto loc_001571DA;

loc_001571E2: ;
    eax = 2;
    goto loc_001571DA;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015721C
 * Original: 0x0015721C - 0x00157283 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015721C(void)
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

loc_0015721C: ;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157233; /* jne: not equal / not zero */

loc_00157222: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, 0x3F);
    goto loc_00157237;

loc_00157233: ;
    SET_LO16(ebx, 0x133F);

loc_00157237: ;
    MEM16(ebp + -162) = LO16(ebx);
    g_fp_control_word = MEM16(ebp + -162); /* fldcw word ptr [ebp - 0xa2] */
    ebx = 0x2FD238;
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    MEM32(ebp + -148) = edx;
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    MEM8(ebp + -144) = 0;
    /* wait - FPU sync */
    SET_LO8(ecx, MEM8(ebp + -159));
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((1) & 31u)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(ecx, ROL8(LO8(ecx), 1));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    eax = SX8(LO8(eax));
    ecx = ecx & 0x404;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157283
 * Original: 0x00157283 - 0x0015730F (140 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157283(void)
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

loc_00157283: ;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0xE), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015729A; /* jne: not equal / not zero */

loc_00157289: ;
    SET_LO16(ebx, MEM16(ebp + -164));
    SET_HI8(ebx, HI8(ebx) | 2);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_HI8(ebx, HI8(ebx) & 0xFE);
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, 0x3F);
    goto loc_0015729E;

loc_0015729A: ;
    SET_LO16(ebx, 0x133F);

loc_0015729E: ;
    MEM16(ebp + -162) = LO16(ebx);
    g_fp_control_word = MEM16(ebp + -162); /* fldcw word ptr [ebp - 0xa2] */
    ebx = 0x2FD238;
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    MEM32(ebp + -148) = edx;
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    MEM8(ebp + -144) = 0;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    SET_LO8(ecx, MEM8(ebp + -159));
    g_fp_cc = recomp_fxam(fp_top()); /* fxam */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    SET_HI8(ecx, MEM8(ebp + -159));
    SET_HI8(ecx, HI8(ecx) << 1);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_HI8(ecx, (uint32_t)(((int32_t)(int8_t)(HI8(ecx))) >> ((1) & 31u)));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_HI8(ecx, ROL8(HI8(ecx), 1));
    SET_LO8(eax, HI8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    SET_HI8(eax, LO8(eax));
    SET_LO8(ecx, LO8(ecx) << 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(ecx, (uint32_t)(((int32_t)(int8_t)(LO8(ecx))) >> ((1) & 31u)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    SET_LO8(ecx, ROL8(LO8(ecx), 1));
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    SET_HI8(eax, HI8(eax) << 1);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_HI8(eax, HI8(eax) << 1);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) | HI8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = SX8(LO8(eax));
    ecx = ecx & 0x404;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157314
 * Original: 0x00157314 - 0x00157319 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00157314(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00157314: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157322
 * Original: 0x00157322 - 0x00157327 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00157322(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00157322: ;
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157329
 * Original: 0x00157329 - 0x0015732E (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00157329(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00157329: ;
    fp_pop(); /* fstp st(0) */
    fp_push(1.0); /* fld1 */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001573C2
 * Original: 0x001573C2 - 0x001573C4 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001573C2(void)
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

loc_001573C2: ;
    fp_pop(); /* fstp st(0) */

    g_seh_ebp = ebp; sub_001573C4(); return; /* fallthrough 0x001573C4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001573C4
 * Original: 0x001573C4 - 0x001573D5 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001573C4(void)
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

loc_001573C4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(recomp_f80_load(((uint64_t)MEM32((0x2FD21C) + 4) << 32) | MEM32(0x2FD21C), MEM16((0x2FD21C) + 8))); /* fld tbyte */
    _fa = (uint32_t)(MEM8(ebp + -144)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -144), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001573DC(); return; } /* jg: greater (signed >) */

    g_seh_ebp = ebp; sub_001573D5(); return; /* fallthrough 0x001573D5 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001573D5
 * Original: 0x001573D5 - 0x001573DC (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001573D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001573D5: ;
    MEM8(ebp + -144) = 1;

    g_seh_ebp = ebp; sub_001573DC(); return; /* fallthrough 0x001573DC */

}

/**
 * sub_001573DC
 * Original: 0x001573DC - 0x001573DF (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001573DC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001573DC: ;
    SET_LO8(ecx, LO8(ecx) | LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_001573E8
 * Original: 0x001573E8 - 0x001573FF (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001573E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001573E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFFE0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -12) = eax;
    g_seh_ebp = ebp; sub_00157408(); return; /* tail jmp 0x00157408 */

}

/**
 * sub_001573FF
 * Original: 0x001573FF - 0x0015743B (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001573FF(void)
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

loc_001573FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFFE0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -32) = eax;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157428u); RECOMP_ABI_CALL(0x0015B496u, sub_0015B496); /* call 0x0015B496 */

loc_00157428: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMD(ebp + -8)); /* fld double */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157439; /* je: equal / zero */

loc_00157436: ;
    g_fp_control_word = MEM16(ebp + 8); /* fldcw word ptr [ebp + 8] */

loc_00157439: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157408
 * Original: 0x00157408 - 0x0015743B (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157408(void)
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

loc_00157408: ;
    MEMD(ebp + -8) = fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -28) = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = ecx;
    eax = ebp + 8;
    ecx = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00157428u); RECOMP_ABI_CALL(0x0015B496u, sub_0015B496); /* call 0x0015B496 */

loc_00157428: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMD(ebp + -8)); /* fld double */
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157439; /* je: equal / zero */

loc_00157436: ;
    g_fp_control_word = MEM16(ebp + 8); /* fldcw word ptr [ebp + 8] */

loc_00157439: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015743C
 * Original: 0x0015743C - 0x00157451 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0015743C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0015743C: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    fp_st1() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsubr st(1), st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = expm1(fp_top() * 0.69314718055994530942); /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157451
 * Original: 0x00157451 - 0x00157468 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157451(void)
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

loc_00157451: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x300;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esp + 6) = LO16(edx);
    g_fp_control_word = MEM16(esp + 6); /* fldcw word ptr [esp + 6] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157468
 * Original: 0x00157468 - 0x00157481 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157468(void)
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

loc_00157468: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157475; /* je: equal / zero */

loc_0015746F: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00157475: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x2B1174)); /* fadd qword ptr [0x2b1174] */
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157481
 * Original: 0x00157481 - 0x001574C4 (67 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157481(void)
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

loc_00157481: ;
    eax = MEM32(edx + 4);
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157493; /* je: equal / zero */

loc_00157490: ;
    fp_push(MEMD(edx)); /* fld double */
    esp += 4; return; /* ret */

loc_00157493: ;
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0x7FFF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 6) = eax;
    eax = MEM32(edx + 4);
    ecx = MEM32(edx);
    { uint32_t _c = (uint32_t)(0xB) & 31u; if (_c && _c < 32u) { eax = (eax << _c) | (ecx >> (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 4) = eax;
    MEM32(esp) = ecx;
    fp_push(recomp_f80_load(((uint64_t)MEM32((esp) + 4) << 32) | MEM32(esp), MEM16((esp) + 8))); /* fld tbyte */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0 (32-bit) */
    eax = MEM32(edx + 4);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001574C4
 * Original: 0x001574C4 - 0x001574DA (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001574C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001574C4: ;
    eax = MEM32(esp + 8);
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574D5; /* je: equal / zero */

loc_001574D4: ;
    esp += 4; return; /* ret */

loc_001574D5: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001574DA
 * Original: 0x001574DA - 0x001574E7 (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001574DA(void)
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

loc_001574DA: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574E5; /* je: equal / zero */

loc_001574E2: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_001574E5: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001574E7
 * Original: 0x001574E7 - 0x00157511 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001574E7(void)
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

loc_001574E7: ;
    SET_LO16(eax, MEM16(esp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015750F; /* je: equal / zero */

loc_001574F1: ;
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0015750C; /* je: equal / zero */

loc_001574F7: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0015750C; /* je: equal / zero */

loc_00157500: ;
    eax = 8;
    PUSH32(esp, 0x0015750Au); RECOMP_ABI_CALL(0x001573FFu, sub_001573FF); /* call 0x001573FF */

loc_0015750A: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_0015750C: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_0015750F: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157511
 * Original: 0x00157511 - 0x00157525 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157511(void)
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

loc_00157511: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); /* fst */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00157539(); return; /* tail jmp 0x00157539 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157525
 * Original: 0x00157525 - 0x00157539 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157525(void)
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

loc_00157525: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); /* fst */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x7FF00000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00157576(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_00157539(); return; /* fallthrough 0x00157539 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157539
 * Original: 0x00157539 - 0x00157576 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157539(void)
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

loc_00157539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FF00000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015759F(); return; } /* je: equal / zero */

loc_00157540: ;
    SET_LO16(eax, MEM16(esp));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157574; /* je: equal / zero */

loc_0015754A: ;
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00157571; /* jne: not equal / not zero */

loc_00157550: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00157571; /* je: equal / zero */

loc_00157559: ;
    eax = 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015756A; /* je: equal / zero */

loc_00157563: ;
    PUSH32(esp, 0x00157568u); RECOMP_ABI_CALL(0x001573FFu, sub_001573FF); /* call 0x001573FF */

loc_00157568: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_0015756A: ;
    PUSH32(esp, 0x0015756Fu); RECOMP_ABI_CALL(0x001573E8u, sub_001573E8); /* call 0x001573E8 */

loc_0015756F: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_00157571: ;
    g_fp_control_word = MEM16(esp); /* fldcw word ptr [esp] */

loc_00157574: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015755E
 * Original: 0x0015755E - 0x00157576 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015755E(void)
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

loc_0015755E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015756A; /* je: equal / zero */

loc_00157563: ;
    PUSH32(esp, 0x00157568u); RECOMP_ABI_CALL(0x001573FFu, sub_001573FF); /* call 0x001573FF */

loc_00157568: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

loc_0015756A: ;
    PUSH32(esp, 0x0015756Fu); RECOMP_ABI_CALL(0x001573E8u, sub_001573E8); /* call 0x001573E8 */

loc_0015756F: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157576
 * Original: 0x00157576 - 0x0015759F (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157576(void)
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

loc_00157576: ;
    fp_push(MEMD(0x2B11A0)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x2B1190)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x2b1190] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    eax = 4;
    if (!(_fa & 1u) /* sahf */) { g_seh_ebp = ebp; sub_0015755E(); return; } /* jae: above or equal (unsigned >=) */

loc_00157597: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2B11B0)); /* fmul qword ptr [0x2b11b0] */
    g_seh_ebp = ebp; sub_0015755E(); return; /* tail jmp 0x0015755E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015759F
 * Original: 0x0015759F - 0x001575C8 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015759F(void)
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

loc_0015759F: ;
    fp_push(MEMD(0x2B1198)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x2B1188)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x2b1188] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    eax = 3;
    if (((_fa & 1u) || (_fa & 0x40u)) /* sahf */) { g_seh_ebp = ebp; sub_0015755E(); return; } /* jbe: below or equal (unsigned <=) */

loc_001575C0: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2B11A8)); /* fmul qword ptr [0x2b11a8] */
    g_seh_ebp = ebp; sub_0015755E(); return; /* tail jmp 0x0015755E */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001575C8
 * Original: 0x001575C8 - 0x0015762D (101 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001575C8(void)
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

loc_001575C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001575DAu); RECOMP_ABI_CALL(0x00152FD7u, sub_00152FD7); /* call 0x00152FD7 */

loc_001575DA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x90 (8-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(_fa, _fb)) goto loc_00157629; /* jne: not equal / not zero */

loc_001575E0: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001575EDu); RECOMP_ABI_CALL(0x00155819u, sub_00155819); /* call 0x00155819 */

loc_001575ED: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00157629; /* jp: parity */

loc_001575FB: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x281BD0)); /* fmul qword ptr [0x281bd0] */
    PUSH32(esp, ecx);
    MEMD(ebp + -8) = fp_top(); /* fst */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157611u); RECOMP_ABI_CALL(0x00155819u, sub_00155819); /* call 0x00155819 */

loc_00157611: ;
    fp_push(MEMD(ebp + -8)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    POP32(esp, ecx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00157624; /* jp: parity */

loc_0015761F: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00157624: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00157629: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0015762D
 * Original: 0x0015762D - 0x0015777F (338 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015762D(void)
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

loc_0015762D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, esi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x22ca68] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00157647; /* jp: parity */

loc_00157645: ;
    fp_top() = -fp_top(); /* fchs */

loc_00157647: ;
    eax = 0x7FF00000;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), eax (32-bit) */
    ecx = 0xFFF00000u;
    if (CMP_NE(_fa, _fb)) goto loc_0015768E; /* jne: not equal / not zero */

loc_00157656: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001576C9; /* jne: not equal / not zero */

loc_0015765B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015766C; /* jne: not equal / not zero */

loc_00157668: ;
    fp_pop(); /* fstp st(0) */
    goto loc_001576E9;

loc_0015766C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00157707; /* jnp: not parity */

loc_00157680: ;
    fp_push(MEMD(0x2FD058)); /* fld double */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00157778;

loc_0015768E: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001576C9; /* jne: not equal / not zero */

loc_00157693: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001576C9; /* jne: not equal / not zero */

loc_00157698: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001576AE; /* jne: not equal / not zero */

loc_001576A5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(0.0); /* fldz */
    goto loc_00157775;

loc_001576AE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22C178)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22c178] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00157680; /* jp: parity */

loc_001576BE: ;
    fp_push(MEMD(0x2FD050)); /* fld double */
    goto loc_00157778;

loc_001576C9: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_NE(_fa, _fb)) goto loc_0015770F; /* jne: not equal / not zero */

loc_001576D0: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015777A; /* jne: not equal / not zero */

loc_001576D9: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001576F4; /* jne: not equal / not zero */

loc_001576E9: ;
    fp_push(MEMD(0x2FD050)); /* fld double */
    goto loc_00157775;

loc_001576F4: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(ebp + 0x18);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0015770B; /* jp: parity */

loc_00157707: ;
    fp_push(0.0); /* fldz */
    goto loc_00157778;

loc_0015770B: ;
    fp_push(1.0); /* fld1 */
    goto loc_00157778;

loc_0015770F: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015777A; /* jne: not equal / not zero */

loc_00157714: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015777A; /* jne: not equal / not zero */

loc_00157719: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157726u); RECOMP_ABI_CALL(0x001575C8u, sub_001575C8); /* call 0x001575C8 */

loc_00157726: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    POP32(esp, ecx);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    POP32(esp, ecx);
    ecx = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157752; /* jne: not equal / not zero */

loc_0015773A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    fp_push(MEMD(0x2FD050)); /* fld double */
    if (CMP_NE(_fa, _fb)) goto loc_00157747; /* jne: not equal / not zero */

loc_00157745: ;
    fp_top() = -fp_top(); /* fchs */

loc_00157747: ;
    eax = MEM32(ebp + 0x18);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    goto loc_0015777A;

loc_00157752: ;
    fp_push(MEMD(ebp + 0x10)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x22CA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x22ca68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00157773; /* jp: parity */

loc_00157762: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015776F; /* jne: not equal / not zero */

loc_00157767: ;
    fp_push(MEMD(0x2FD070)); /* fld double */
    goto loc_00157747;

loc_0015776F: ;
    fp_push(0.0); /* fldz */
    goto loc_00157747;

loc_00157773: ;
    fp_push(1.0); /* fld1 */

loc_00157775: ;
    eax = MEM32(ebp + 0x18);

loc_00157778: ;
    MEMD(eax) = fp_top(); fp_pop(); /* fstp */

loc_0015777A: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00157787
 * Original: 0x00157787 - 0x001577B8 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157787(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157787: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_001577A1; /* jle: less or equal (signed <=) */

loc_00157795: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015779Du); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015779D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_001577AD;

loc_001577A1: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001577AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi + 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_001577B6; /* jne: not equal / not zero */

loc_001577B4: ;
    eax = esi;

loc_001577B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001577C0
 * Original: 0x001577C0 - 0x0015780E (78 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001577C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001577C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, 0xFF);
    edi = edi;

loc_001577D0: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00157806; /* je: equal / zero */

loc_001577D4: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_HI8(eax, MEM8(edi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001577D0; /* je: equal / zero */

loc_001577E2: ;
    _fb = (uint32_t)(0x41) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x41));
    SET_LO8(eax, LO8(eax) - 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x41) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x41)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = LO8(eax);
    SET_LO8(eax, HI8(eax));
    SET_HI8(eax, _tmp); }
    _fb = (uint32_t)(0x41) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x41));
    SET_LO8(eax, LO8(eax) - 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x20);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x41) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x41)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x41);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001577D0; /* je: equal / zero */

loc_00157802: ;
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xFF) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */

loc_00157806: ;
    eax = SX8(LO8(eax));
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00157841
 * Original: 0x00157841 - 0x0015785C (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00157841(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157841: ;
    eax = MEM32(0x98B400);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157859; /* je: equal / zero */

loc_0015784A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00157850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015784Eu); } /* indirect call */
    }

loc_00157850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00157859; /* je: equal / zero */

loc_00157855: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00157859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015785C
 * Original: 0x0015785C - 0x001578DD (129 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015785C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015785C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00157868u); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_00157868: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001578A8; /* je: equal / zero */

loc_0015786E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157878; /* je: equal / zero */

loc_00157873: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015788E; /* jne: not equal / not zero */

loc_00157878: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x0015787Fu); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_0015787F: ;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, 0x00157888u); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_00157888: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001578A8; /* je: equal / zero */

loc_0015788E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00157894u); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_00157894: ;
    POP32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015789Bu); RECOMP_ABI_CALL(0x000AA2B8u, sub_000AA2B8); /* call 0x000AA2B8 */

loc_0015789B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001578A8; /* jne: not equal / not zero */

loc_0015789F: ;
    PUSH32(esp, 0x001578A4u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001578A4: ;
    edi = eax;
    goto loc_001578AA;

loc_001578A8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001578AA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001578B0u); RECOMP_ABI_CALL(0x0015B5B9u, sub_0015B5B9); /* call 0x0015B5B9 */

loc_001578B0: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = MEM32(eax * 4 + 0xA9E320);
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ecx);
    ecx = esi + esi * 4;
    MEM8(eax + ecx * 8 + 4) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001578D8; /* je: equal / zero */

loc_001578CC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001578D2u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_001578D2: ;
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001578DA;

loc_001578D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001578DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001578DD
 * Original: 0x001578DD - 0x00157951 (116 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001578DD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001578DD: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B11B8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001578E9u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001578E9: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015795C(); return; } /* jae: above or equal (unsigned >=) */

loc_001578F4: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015795C(); return; } /* je: equal / zero */

loc_00157914: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015791Au); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015791A: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157934; /* je: equal / zero */

loc_00157928: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015792Eu); RECOMP_ABI_CALL(0x0015785Cu, sub_0015785C); /* call 0x0015785C */

loc_0015792E: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    goto loc_00157943;

loc_00157934: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157939u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157939: ;
    MEM32(eax) = 9;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00157943: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015794Cu); RECOMP_ABI_CALL(0x00157954u, sub_00157954); /* call 0x00157954 */

loc_0015794C: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00157972(); return; /* tail jmp 0x00157972 */

}

/**
 * sub_00157954
 * Original: 0x00157954 - 0x0015795C (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157954(void)
{

loc_00157954: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015795Au); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015795A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015795C
 * Original: 0x0015795C - 0x00157978 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015795C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015795C: ;
    PUSH32(esp, 0x00157961u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157961: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015796Cu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015796C: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00157977u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157977: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157972
 * Original: 0x00157972 - 0x00157978 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157972(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157972: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00157977u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157977: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157978
 * Original: 0x00157978 - 0x001579A3 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157978(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157978: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001579A1; /* je: equal / zero */

loc_00157984: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001579A1; /* je: equal / zero */

loc_00157988: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x00157990u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00157990: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0xFBF7;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    MEM32(esi) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = eax;

loc_001579A1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001579A3
 * Original: 0x001579A3 - 0x00157A00 (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001579A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001579A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001579F2; /* jne: not equal / not zero */

loc_001579B8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x108) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x108 (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001579F2; /* je: equal / zero */

loc_001579BE: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001579F1; /* jle: less or equal (signed <=) */

loc_001579CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001579D4u); RECOMP_ABI_CALL(0x00157CE7u, sub_00157CE7); /* call 0x00157CE7 */

loc_001579D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001579EA; /* jne: not equal / not zero */

loc_001579DB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001579F1; /* jns: not sign (positive) */

loc_001579E2: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = eax;
    goto loc_001579F1;

loc_001579EA: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001579F1: ;
    POP32(esp, edi);

loc_001579F2: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157A00
 * Original: 0x00157A00 - 0x00157A2E (46 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00157A00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00157A0Bu); RECOMP_ABI_CALL(0x001579A3u, sub_001579A3); /* call 0x001579A3 */

loc_00157A0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00157A15; /* je: equal / zero */

loc_00157A10: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00157A15: ;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00157A2A; /* je: equal / zero */

loc_00157A1B: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x00157A23u); RECOMP_ABI_CALL(0x0015B919u, sub_0015B919); /* call 0x0015B919 */

loc_00157A23: ;
    POP32(esp, ecx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00157A2A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157A2E
 * Original: 0x00157A2E - 0x00157AC9 (155 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157A2E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157A2E: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x2B11C8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A3Au); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157A3A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -36) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A49u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00157A49: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00157A4F: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E42C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0xA9E42C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00157ADF(); return; } /* jge: greater or equal (signed >=) */

loc_00157A5E: ;
    eax = MEM32(0xA9E428);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157AC6; /* je: equal / zero */

loc_00157A6A: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157AC6; /* je: equal / zero */

loc_00157A70: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A77u); RECOMP_ABI_CALL(0x001538CFu, sub_001538CF); /* call 0x001538CF */

loc_00157A77: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = edx;
    eax = MEM32(0xA9E428);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157ABE; /* je: equal / zero */

loc_00157A8F: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157AA5; /* jne: not equal / not zero */

loc_00157A94: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157A9Au); RECOMP_ABI_CALL(0x00157A00u, sub_00157A00); /* call 0x00157A00 */

loc_00157A9A: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157ABE; /* je: equal / zero */

loc_00157AA0: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00157ABE;

loc_00157AA5: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157ABE; /* jne: not equal / not zero */

loc_00157AAA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157ABE; /* je: equal / zero */

loc_00157AAF: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157AB5u); RECOMP_ABI_CALL(0x00157A00u, sub_00157A00); /* call 0x00157A00 */

loc_00157AB5: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157ABE; /* jne: not equal / not zero */

loc_00157ABB: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | eax;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00157ABE: ;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157AC6u); RECOMP_ABI_CALL(0x00157ACEu, sub_00157ACE); /* call 0x00157ACE */

loc_00157AC6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00157A4F;

}

/**
 * sub_00157ACE
 * Original: 0x00157ACE - 0x00157ADF (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157ACE(void)
{

loc_00157ACE: ;
    eax = MEM32(0xA9E428);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00157ADCu); RECOMP_ABI_CALL(0x00153921u, sub_00153921); /* call 0x00153921 */

loc_00157ADC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157ADF
 * Original: 0x00157ADF - 0x00157AFA (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157ADF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157ADF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00157AE8u); RECOMP_ABI_CALL(0x00157AFAu, sub_00157AFA); /* call 0x00157AFA */

loc_00157AE8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    eax = MEM32(ebp + -28);
    if (CMP_EQ(_fa, _fb)) goto loc_00157AF4; /* je: equal / zero */

loc_00157AF1: ;
    eax = MEM32(ebp + -36);

loc_00157AF4: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00157AF9u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157AF9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157AFA
 * Original: 0x00157AFA - 0x00157B03 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157AFA(void)
{

loc_00157AFA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00157B01u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00157B01: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157B03
 * Original: 0x00157B03 - 0x00157B49 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B03(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157B03: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B11E0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B0Fu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157B0F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157B1F; /* jne: not equal / not zero */

loc_00157B16: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B1Cu); RECOMP_ABI_CALL(0x00157A2Eu, sub_00157A2E); /* call 0x00157A2E */

loc_00157B1C: ;
    POP32(esp, ecx);
    goto loc_00157B43;

loc_00157B1F: ;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B27u); RECOMP_ABI_CALL(0x001538A0u, sub_001538A0); /* call 0x001538A0 */

loc_00157B27: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B33u); RECOMP_ABI_CALL(0x00157A00u, sub_00157A00); /* call 0x00157A00 */

loc_00157B33: ;
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B40u); RECOMP_ABI_CALL(0x00157B49u, sub_00157B49); /* call 0x00157B49 */

loc_00157B40: ;
    eax = MEM32(ebp + -28);

loc_00157B43: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157B48u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157B48: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157B49
 * Original: 0x00157B49 - 0x00157B53 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157B49: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00157B51u); RECOMP_ABI_CALL(0x001538F2u, sub_001538F2); /* call 0x001538F2 */

loc_00157B51: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157B53
 * Original: 0x00157B53 - 0x00157B5C (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157B53(void)
{

loc_00157B53: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00157B5Au); RECOMP_ABI_CALL(0x00157A2Eu, sub_00157A2E); /* call 0x00157A2E */

loc_00157B5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157B5C
 * Original: 0x00157B5C - 0x00157C51 (245 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00157B5C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157B5C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x41C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x41C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -20) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00157B7A; /* jne: not equal / not zero */

loc_00157B73: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00157CE4(); return; /* tail jmp 0x00157CE4 */

loc_00157B7A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((5) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    ebx = ebx * 4 + 0xA9E320;
    eax = MEM32(ebx);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157BAD; /* je: equal / zero */

loc_00157B9E: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157BAAu); RECOMP_ABI_CALL(0x0015B9D3u, sub_0015B9D3); /* call 0x0015B9D3 */

loc_00157BAA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00157BAD: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00157C7D(); return; } /* je: equal / zero */

loc_00157BBB: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = edi;
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00157CB3(); return; } /* jbe: below or equal (unsigned <=) */

loc_00157BCD: ;
    ecx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + -1052;
    MEM32(ebp + -8) = edi;

loc_00157BDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00157C08; /* jae: above or equal (unsigned >=) */

loc_00157BE1: ;
    edx = MEM32(ebp + -12);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, MEM8(edx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157BF9; /* jne: not equal / not zero */

loc_00157BEF: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) + 1;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 0xD;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00157BF9: ;
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157BDC; /* jl: less (signed <) */

loc_00157C08: ;
    edi = eax;
    eax = ebp + -1052;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -1052;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157C2Au); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_00157C2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C47; /* je: equal / zero */

loc_00157C2E: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -16) = MEM32(ebp + -16) + eax;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00157C4F; /* jl: less (signed <) */

loc_00157C38: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00157BCD; /* jb: below (unsigned <) */

loc_00157C45: ;
    g_seh_ebp = ebp; sub_00157C51(); return; /* tail jmp 0x00157C51 */

loc_00157C47: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157C4Cu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00157C4C: ;
    MEM32(ebp + -4) = eax;

loc_00157C4F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_00157C51(); return; /* fallthrough 0x00157C51 */

}

/**
 * sub_00157C51
 * Original: 0x00157C51 - 0x00157C7D (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C51(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157C51: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00157CDF(); return; } /* jne: not equal / not zero */

loc_00157C5C: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00157CB3(); return; } /* je: equal / zero */

loc_00157C61: ;
    PUSH32(esp, 5);
    POP32(esp, esi);
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00157CA8(); return; } /* jne: not equal / not zero */

loc_00157C69: ;
    PUSH32(esp, 0x00157C6Eu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157C6E: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x00157C79u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_00157C79: ;
    MEM32(eax) = esi;
    g_seh_ebp = ebp; sub_00157CDA(); return; /* tail jmp 0x00157CDA */

}

/**
 * sub_00157C7D
 * Original: 0x00157C7D - 0x00157CA8 (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157C7D: ;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x00157C8Fu); RECOMP_ABI_CALL(0x000AA875u, sub_000AA875); /* call 0x000AA875 */

loc_00157C8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C9E; /* je: equal / zero */

loc_00157C93: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_00157C51(); return; /* tail jmp 0x00157C51 */

loc_00157C9E: ;
    PUSH32(esp, 0x00157CA3u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_00157CA3: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_00157C51(); return; /* tail jmp 0x00157C51 */

}

/**
 * sub_00157CA8
 * Original: 0x00157CA8 - 0x00157CB3 (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CA8: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x00157CB0u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_00157CB0: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00157CDA(); return; /* tail jmp 0x00157CDA */

}

/**
 * sub_00157CB3
 * Original: 0x00157CB3 - 0x00157CDF (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CB3: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157CC8; /* je: equal / zero */

loc_00157CBC: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x1A (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157CC8; /* jne: not equal / not zero */

loc_00157CC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00157CE2(); return; /* tail jmp 0x00157CE2 */

loc_00157CC8: ;
    PUSH32(esp, 0x00157CCDu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157CCD: ;
    MEM32(eax) = 0x1C;
    PUSH32(esp, 0x00157CD8u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_00157CD8: ;
    MEM32(eax) = edi;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00157CE2(); return; /* tail jmp 0x00157CE2 */

}

/**
 * sub_00157CDA
 * Original: 0x00157CDA - 0x00157CDF (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CDA: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_00157CE2(); return; /* tail jmp 0x00157CE2 */

}

/**
 * sub_00157CDF
 * Original: 0x00157CDF - 0x00157CE7 (8 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CDF: ;
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00157CE2
 * Original: 0x00157CE2 - 0x00157CE7 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CE2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CE2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00157CE4
 * Original: 0x00157CE4 - 0x00157CE7 (3 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CE4: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00157CE7
 * Original: 0x00157CE7 - 0x00157D6B (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157CE7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157CE7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B11F0);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157CF3u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157CF3: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_00157D76(); return; } /* jae: above or equal (unsigned >=) */

loc_00157CFE: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_00157D76(); return; } /* je: equal / zero */

loc_00157D1E: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D24u); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_00157D24: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00157D46; /* je: equal / zero */

loc_00157D32: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D3Eu); RECOMP_ABI_CALL(0x00157B5Cu, sub_00157B5C); /* call 0x00157B5C */

loc_00157D3E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    goto loc_00157D5D;

loc_00157D46: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D4Bu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157D4B: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D56u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_00157D56: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00157D5D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157D66u); RECOMP_ABI_CALL(0x00157D6Eu, sub_00157D6E); /* call 0x00157D6E */

loc_00157D66: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_00157D8C(); return; /* tail jmp 0x00157D8C */

}

/**
 * sub_00157D6E
 * Original: 0x00157D6E - 0x00157D76 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157D6E(void)
{

loc_00157D6E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00157D74u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_00157D74: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157D76
 * Original: 0x00157D76 - 0x00157D92 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157D76(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157D76: ;
    PUSH32(esp, 0x00157D7Bu); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00157D7B: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x00157D86u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_00157D86: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00157D91u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157D91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157D8C
 * Original: 0x00157D8C - 0x00157D92 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157D8C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157D8C: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00157D91u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157D91: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00157D92
 * Original: 0x00157D92 - 0x00157EFA (360 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00157D92(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157D92: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x98B418);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(edi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x61) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x61 (8-bit) */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00157DCB; /* je: equal / zero */

loc_00157DB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x72) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x72 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157DC4; /* je: equal / zero */

loc_00157DB5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x77) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x77 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157ED7; /* jne: not equal / not zero */

loc_00157DBD: ;
    ecx = 0x301;
    goto loc_00157DD0;

loc_00157DC4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157DD3;

loc_00157DCB: ;
    ecx = 0x109;

loc_00157DD0: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00157DD3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00157EB2;

loc_00157DDB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157EBD; /* je: equal / zero */

loc_00157DE3: ;
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x54) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x54 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00157E5C; /* jg: greater (signed >) */

loc_00157DEB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00157E4F; /* je: equal / zero */

loc_00157DED: ;
    _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x2B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00157E39; /* je: equal / zero */

loc_00157DF2: ;
    _fb = (uint32_t)(0x19) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00157E2F; /* je: equal / zero */

loc_00157DF7: ;
    _fb = (uint32_t)(0xE) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00157E1B; /* je: equal / zero */

loc_00157DFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E03: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E0C: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E1B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E20: ;
    MEM32(ebp + -4) = 1;
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E2F: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E34: ;
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E39: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E3E: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & 0xFFFFFFFCu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E4F: ;
    eax = 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E58: ;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E5C: ;
    _fb = (uint32_t)(0x62) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x62;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00157EA7; /* je: equal / zero */

loc_00157E61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00157E8F; /* je: equal / zero */

loc_00157E64: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00157E7B; /* je: equal / zero */

loc_00157E69: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E6E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E73: ;
    ecx = ecx | 0x4000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157E7B: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157E80: ;
    MEM32(ebp + -8) = 1;
    esi = esi & 0xFFFFBFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00157EB2;

loc_00157E8F: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157E98; /* je: equal / zero */

loc_00157E94: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00157EB2;

loc_00157E98: ;
    MEM32(ebp + -8) = 1;
    esi = esi | 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00157EB2;

loc_00157EA7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC0 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00157E94; /* jne: not equal / not zero */

loc_00157EAC: ;
    ecx = ecx | 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00157EB2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157DDB; /* jne: not equal / not zero */

loc_00157EBD: ;
    PUSH32(esp, 0x1A4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157ECEu); RECOMP_ABI_CALL(0x0015BDFDu, sub_0015BDFD); /* call 0x0015BDFD */

loc_00157ECE: ;
    ecx = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00157EDB; /* jge: greater or equal (signed >=) */

loc_00157ED7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00157EF5;

loc_00157EDB: ;
    eax = MEM32(ebp + 0x14);
    MEM32(0x98B22C) = MEM32(0x98B22C) + 1;
    _fa = (uint32_t)(MEM32(0x98B22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 4) = ebx;
    MEM32(eax) = ebx;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x10) = ecx;

loc_00157EF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00157EFA
 * Original: 0x00157EFA - 0x00157F03 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157EFA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157EFA: ;
    PUSH32(esp, 0x00157EFFu); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157EFF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00157F03
 * Original: 0x00157F03 - 0x00157F0C (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F03(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157F03: ;
    PUSH32(esp, 0x00157F08u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00157F0C
 * Original: 0x00157F0C - 0x00157F7F (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157F0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00157F12u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F12: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00157F1B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi * 8 + 0x2FD258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi * 8 + 0x2FD258) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157F42; /* je: equal / zero */

loc_00157F24: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2D (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00157F1B; /* jb: below (unsigned <) */

loc_00157F2A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00157F53; /* jb: below (unsigned <) */

loc_00157F2F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x24 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00157F53; /* ja: above (unsigned >) */

loc_00157F34: ;
    PUSH32(esp, 0x00157F39u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F39: ;
    MEM32(eax + 8) = 0xD;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00157F42: ;
    PUSH32(esp, 0x00157F47u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F47: ;
    ecx = MEM32(esi * 8 + 0x2FD25C);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00157F53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xBC (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00157F71; /* jb: below (unsigned <) */

loc_00157F5B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xCA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xCA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00157F71; /* ja: above (unsigned >) */

loc_00157F63: ;
    PUSH32(esp, 0x00157F68u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F68: ;
    MEM32(eax + 8) = 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00157F71: ;
    PUSH32(esp, 0x00157F76u); RECOMP_ABI_CALL(0x00154CB3u, sub_00154CB3); /* call 0x00154CB3 */

loc_00157F76: ;
    MEM32(eax + 8) = 0x16;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00157F7F
 * Original: 0x00157F7F - 0x00158095 (278 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157F7F: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1200);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F8Bu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00157F8B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157F99u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00157F99: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00157F9F: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E42C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0xA9E42C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015806E; /* jge: greater or equal (signed >=) */

loc_00157FAE: ;
    eax = MEM32(0xA9E428);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015800A; /* je: equal / zero */

loc_00157FBA: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00158003; /* jne: not equal / not zero */

loc_00157FC0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00157FDC; /* jle: less or equal (signed <=) */

loc_00157FC5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00157FDC; /* jge: greater or equal (signed >=) */

loc_00157FCA: ;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157FD3u); RECOMP_ABI_CALL(0x00156F54u, sub_00156F54); /* call 0x00156F54 */

loc_00157FD3: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015806E; /* je: equal / zero */

loc_00157FDC: ;
    eax = MEM32(0xA9E428);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00157FEAu); RECOMP_ABI_CALL(0x001538CFu, sub_001538CF); /* call 0x001538CF */

loc_00157FEA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = MEM32(0xA9E428);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00158006; /* je: equal / zero */

loc_00157FFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158001u); RECOMP_ABI_CALL(0x00153921u, sub_00153921); /* call 0x00153921 */

loc_00158001: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00158003: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00157F9F;

loc_00158006: ;
    edi = eax;
    goto loc_0015806B;

loc_0015800A: ;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x3C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158014u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00158014: ;
    POP32(esp, ecx);
    ecx = MEM32(0xA9E428);
    MEM32(esi + ecx) = eax;
    eax = MEM32(0xA9E428);
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015806E; /* je: equal / zero */

loc_0015802A: ;
    PUSH32(esp, 0xFA0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158038u); RECOMP_ABI_CALL(0x0015B435u, sub_0015B435); /* call 0x0015B435 */

loc_00158038: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0xA9E428);
    if (CMP_NE(_fa, _fb)) goto loc_00158056; /* jne: not equal / not zero */

loc_00158043: ;
    PUSH32(esp, MEM32(esi + eax));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015804Bu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_0015804B: ;
    POP32(esp, ecx);
    eax = MEM32(0xA9E428);
    MEM32(esi + eax) = ebx;
    goto loc_0015806E;

loc_00158056: ;
    eax = MEM32(esi + eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BBC0); PUSH32(esp, 0x00158063u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015805Du); } /* indirect call */
    }

loc_00158063: ;
    eax = MEM32(0xA9E428);
    edi = MEM32(esi + eax);

loc_0015806B: ;
    MEM32(ebp + -28) = edi;

loc_0015806E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158084; /* je: equal / zero */

loc_00158072: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi) = ebx;
    MEM32(edi + 0x1C) = ebx;
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00158084: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015808Du); RECOMP_ABI_CALL(0x00158098u, sub_00158098); /* call 0x00158098 */

loc_0015808D: ;
    eax = edi;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158094u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00158098
 * Original: 0x00158098 - 0x001580A1 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158098(void)
{

loc_00158098: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0015809Fu); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_0015809F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001580A1
 * Original: 0x001580A1 - 0x001580C6 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001580A1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001580A1: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001580AD; /* je: equal / zero */

loc_001580A7: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001580C3; /* je: equal / zero */

loc_001580AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001580B7u); RECOMP_ABI_CALL(0x0015BE52u, sub_0015BE52); /* call 0x0015BE52 */

loc_001580B7: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001580C3; /* jne: not equal / not zero */

loc_001580BF: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001580C3: ;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001580C6
 * Original: 0x001580C6 - 0x001580EB (37 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001580C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001580C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = eax;
    goto loc_001580E2;

loc_001580CE: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001580DCu); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_001580DC: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_001580E8; /* je: equal / zero */

loc_001580E2: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001580CE; /* jg: greater (signed >) */

loc_001580E8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001580EB
 * Original: 0x001580EB - 0x00158128 (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001580EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001580EB: ;
    _fa = (uint32_t)(MEM8(edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xC), 0x40 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0015811E; /* je: equal / zero */

loc_001580F7: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015811E; /* jne: not equal / not zero */

loc_001580FD: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00158125;

loc_00158105: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx));
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0x00158116u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158116: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00158125; /* je: equal / zero */

loc_0015811E: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00158105; /* jg: greater (signed >) */

loc_00158125: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015813D
 * Original: 0x0015813D - 0x00158167 (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015813D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015813D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x454) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x454;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(edx));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588DB(); return; } /* je: equal / zero */

loc_00158163: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_0015816A(); return; /* tail jmp 0x0015816A */

}

/**
 * sub_00158167
 * Original: 0x00158167 - 0x001583B4 (589 bytes, 161 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158167(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158167: ;
    ecx = MEM32(ebp + -60);
    PUSH32(esp, 2);
    POP32(esp, edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588D9(); return; } /* jl: less (signed <) */

loc_0015817A: ;
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(esi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158197; /* jb: below (unsigned <) */

loc_00158182: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x78 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158197; /* ja: above (unsigned >) */

loc_00158188: ;
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2B0F78);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00158199;

loc_00158197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158199: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x2B0F98);
    PUSH32(esp, 7);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -60) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* ja: above (unsigned >) */

loc_001581B2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1588E1); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001581B9u) goto loc_001581B9;
    if (_jt == 0x001581D6u) goto loc_001581D6;
    if (_jt == 0x00158220u) goto loc_00158220;
    if (_jt == 0x0015825Cu) goto loc_0015825C;
    if (_jt == 0x00158265u) goto loc_00158265;
    if (_jt == 0x0015829Eu) goto loc_0015829E;
    if (_jt == 0x00158353u) goto loc_00158353;
    if (_jt == 0x0015836Bu) goto loc_0015836B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001581B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001581D6: ;
    eax = ZX16(LO16(ebx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00158218; /* je: equal / zero */

loc_001581DD: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015820F; /* je: equal / zero */

loc_001581E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00158206; /* je: equal / zero */

loc_001581E7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001581FD; /* je: equal / zero */

loc_001581EB: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jne: not equal / not zero */

loc_001581F4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001581FD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158206: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015820F: ;
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158218: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158220: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158247; /* jne: not equal / not zero */

loc_00158226: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jge: greater or equal (signed >=) */

loc_0015823B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -32) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -32)));
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158247: ;
    eax = MEM32(ebp + -32);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015825C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158265: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158289; /* jne: not equal / not zero */

loc_0015826B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jge: greater or equal (signed >=) */

loc_00158280: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158289: ;
    eax = MEM32(ebp + -8);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015829E: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582D3; /* je: equal / zero */

loc_001582A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582CB; /* je: equal / zero */

loc_001582AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582C2; /* je: equal / zero */

loc_001582B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jne: not equal / not zero */

loc_001582B9: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582C2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582CB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582D3: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x36 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001582F6; /* jne: not equal / not zero */

loc_001582DF: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x34 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001582F6; /* jne: not equal / not zero */

loc_001582E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582F6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x33 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158313; /* jne: not equal / not zero */

loc_001582FC: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x32 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158313; /* jne: not equal / not zero */

loc_00158306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158313: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015831D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x69 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158327: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x6F (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158331: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x75 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015833B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x78 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158345: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x58 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015834F: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00158353: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    esi = ebp + -20;
    MEM32(ebp + -28) = 1;
    PUSH32(esp, 0x00158366u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158366: ;
    g_seh_ebp = ebp; sub_001588C9(); return; /* tail jmp 0x001588C9 */

loc_0015836B: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001585FD(); return; } /* jg: greater (signed >) */

loc_00158377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00158424(); return; } /* jge: greater or equal (signed >=) */

loc_00158380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00158495(); return; } /* jg: greater (signed >) */

loc_00158389: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00158671(); return; } /* je: equal / zero */

loc_0015838F: ;
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x43;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00158447(); return; } /* je: equal / zero */

loc_00158398: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015841B(); return; } /* je: equal / zero */

loc_0015839C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015841B(); return; } /* je: equal / zero */

loc_001583A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jne: not equal / not zero */

loc_001583A9: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001583B4(); return; } /* jne: not equal / not zero */

loc_001583B1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001583B4(); return; /* fallthrough 0x001583B4 */

}

/**
 * sub_0015816A
 * Original: 0x0015816A - 0x001583B4 (586 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015816A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015816A: ;
    PUSH32(esp, 2);
    POP32(esp, edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edi;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588D9(); return; } /* jl: less (signed <) */

loc_0015817A: ;
    PUSH32(esp, 0x20);
    POP32(esp, esi);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(esi) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158197; /* jb: below (unsigned <) */

loc_00158182: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x78 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158197; /* ja: above (unsigned >) */

loc_00158188: ;
    eax = ZX16(LO16(ebx));
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x2B0F78);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00158199;

loc_00158197: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158199: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + eax * 8 + 0x2B0F98);
    PUSH32(esp, 7);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -60) = eax;
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* ja: above (unsigned >) */

loc_001581B2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1588E1); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001581B9u) goto loc_001581B9;
    if (_jt == 0x001581D6u) goto loc_001581D6;
    if (_jt == 0x00158220u) goto loc_00158220;
    if (_jt == 0x0015825Cu) goto loc_0015825C;
    if (_jt == 0x00158265u) goto loc_00158265;
    if (_jt == 0x0015829Eu) goto loc_0015829E;
    if (_jt == 0x00158353u) goto loc_00158353;
    if (_jt == 0x0015836Bu) goto loc_0015836B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001581B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -28) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001581D6: ;
    eax = ZX16(LO16(ebx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00158218; /* je: equal / zero */

loc_001581DD: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015820F; /* je: equal / zero */

loc_001581E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00158206; /* je: equal / zero */

loc_001581E7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001581FD; /* je: equal / zero */

loc_001581EB: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jne: not equal / not zero */

loc_001581F4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 8;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001581FD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158206: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015820F: ;
    MEM8(ebp + -4) = MEM8(ebp + -4) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158218: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158220: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158247; /* jne: not equal / not zero */

loc_00158226: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -32) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jge: greater or equal (signed >=) */

loc_0015823B: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -32) = (uint32_t)(0u - (uint32_t)(MEM32(ebp + -32)));
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158247: ;
    eax = MEM32(ebp + -32);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -32) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015825C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158265: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x2A (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158289; /* jne: not equal / not zero */

loc_0015826B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jge: greater or equal (signed >=) */

loc_00158280: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158289: ;
    eax = MEM32(ebp + -8);
    ecx = ZX16(LO16(ebx));
    eax = eax + eax * 4;
    eax = ecx + eax * 2 + -48;
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_0015829E: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x49 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582D3; /* je: equal / zero */

loc_001582A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x68 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582CB; /* je: equal / zero */

loc_001582AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001582C2; /* je: equal / zero */

loc_001582B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x77 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* jne: not equal / not zero */

loc_001582B9: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 8;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582C2: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x10;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582CB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582D3: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x36) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x36 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001582F6; /* jne: not equal / not zero */

loc_001582DF: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x34 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001582F6; /* jne: not equal / not zero */

loc_001582E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 0x80;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_001582F6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x33) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x33 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158313; /* jne: not equal / not zero */

loc_001582FC: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0x32 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158313; /* jne: not equal / not zero */

loc_00158306: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -3) = MEM8(ebp + -3) & 0x7F;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001588CA(); return; /* tail jmp 0x001588CA */

loc_00158313: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x64 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015831D: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x69 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158327: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x6F (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158331: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x75) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x75 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015833B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x78 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_00158345: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x58 (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_0015834F: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00158353: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    esi = ebp + -20;
    MEM32(ebp + -28) = 1;
    PUSH32(esp, 0x00158366u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158366: ;
    g_seh_ebp = ebp; sub_001588C9(); return; /* tail jmp 0x001588C9 */

loc_0015836B: ;
    eax = ZX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x67 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_001585FD(); return; } /* jg: greater (signed >) */

loc_00158377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x65 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00158424(); return; } /* jge: greater or equal (signed >=) */

loc_00158380: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x58 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00158495(); return; } /* jg: greater (signed >) */

loc_00158389: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00158671(); return; } /* je: equal / zero */

loc_0015838F: ;
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x43;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00158447(); return; } /* je: equal / zero */

loc_00158398: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015841B(); return; } /* je: equal / zero */

loc_0015839C: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015841B(); return; } /* je: equal / zero */

loc_001583A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jne: not equal / not zero */

loc_001583A9: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001583B4(); return; } /* jne: not equal / not zero */

loc_001583B1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001583B4(); return; /* fallthrough 0x001583B4 */

}

/**
 * sub_001583B4
 * Original: 0x001583B4 - 0x0015841B (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001583B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001583B4: ;
    edx = MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001583C1; /* jne: not equal / not zero */

loc_001583BC: ;
    edx = 0x7FFFFFFF;

loc_001583C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015863C(); return; } /* je: equal / zero */

loc_001583D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001583E3; /* jne: not equal / not zero */

loc_001583DC: ;
    MEM32(ebp + -12) = 0x2B0FF4;

loc_001583E3: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(ebp + -12);
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jle: less or equal (signed <=) */

loc_001583F2: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* je: equal / zero */

loc_001583FC: ;
    esi = MEM32(0x2FD3C0);
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(MEM8(esi + ecx * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ecx * 2 + 1), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015840D; /* je: equal / zero */

loc_0015840C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0015840D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001583F2; /* jl: less (signed <) */

loc_00158416: ;
    g_seh_ebp = ebp; sub_001587BF(); return; /* tail jmp 0x001587BF */

}

/**
 * sub_0015841B
 * Original: 0x0015841B - 0x00158447 (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015841B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015841B: ;
    MEM32(ebp + -64) = 1;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    edi = ebp + -1108;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0015853E(); return; } /* jge: greater or equal (signed >=) */

loc_0015843B: ;
    MEM32(ebp + -8) = 6;
    g_seh_ebp = ebp; sub_00158586(); return; /* tail jmp 0x00158586 */

}

/**
 * sub_00158424
 * Original: 0x00158424 - 0x00158447 (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158424(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158424: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    edi = ebp + -1108;
    MEM32(ebp + -12) = edi;
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0015853E(); return; } /* jge: greater or equal (signed >=) */

loc_0015843B: ;
    MEM32(ebp + -8) = 6;
    g_seh_ebp = ebp; sub_00158586(); return; /* tail jmp 0x00158586 */

}

/**
 * sub_00158447
 * Original: 0x00158447 - 0x00158452 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158447(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158447: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0x830) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebp + -4), 0x830 (16-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_00158452(); return; } /* jne: not equal / not zero */

loc_0015844F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | esi;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_00158452(); return; /* fallthrough 0x00158452 */

}

/**
 * sub_00158452
 * Original: 0x00158452 - 0x00158495 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158452(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158452: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(eax + -4));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -68) = eax;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001584D4(); return; } /* je: equal / zero */

loc_0015846C: ;
    PUSH32(esp, MEM32(0x2FD3D0));
    MEM8(ebp + -40) = LO8(eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -1108;
    PUSH32(esp, eax);
    MEM8(ebp + -39) = 0;
    PUSH32(esp, 0x00158489u); RECOMP_ABI_CALL(0x0015BF64u, sub_0015BF64); /* call 0x0015BF64 */

loc_00158489: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_001584DB(); return; } /* jge: greater or equal (signed >=) */

loc_00158490: ;
    MEM32(ebp + -52) = esi;
    g_seh_ebp = ebp; sub_001584DB(); return; /* tail jmp 0x001584DB */

}

/**
 * sub_00158495
 * Original: 0x00158495 - 0x001584A6 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158495(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158495: ;
    _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x5A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001584EC(); return; } /* je: equal / zero */

loc_0015849A: ;
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 9;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_00158452(); return; } /* je: equal / zero */

loc_0015849F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001584A6(); return; /* fallthrough 0x001584A6 */

}

/**
 * sub_001584A6
 * Original: 0x001584A6 - 0x001584AA (4 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584A6: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0x40;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001584AA(); return; /* fallthrough 0x001584AA */

}

/**
 * sub_001584AA
 * Original: 0x001584AA - 0x001584B1 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584AA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584AA: ;
    MEM32(ebp + -16) = 0xA;

    g_seh_ebp = ebp; sub_001584B1(); return; /* fallthrough 0x001584B1 */

}

/**
 * sub_001584B1
 * Original: 0x001584B1 - 0x001584D4 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584B1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584B1: ;
    ebx = MEM32(ebp + -4);
    esi = 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001586E1(); return; } /* je: equal / zero */

loc_001584C1: ;
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_00158709(); return; /* tail jmp 0x00158709 */

}

/**
 * sub_001584D4
 * Original: 0x001584D4 - 0x001584EC (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584D4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584D4: ;
    MEM16(ebp + -1108) = LO16(eax);
    eax = ebp + -1108;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = esi;
    g_seh_ebp = ebp; sub_001587BF(); return; /* tail jmp 0x001587BF */

}

/**
 * sub_001584DB
 * Original: 0x001584DB - 0x001584EC (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584DB: ;
    eax = ebp + -1108;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = esi;
    g_seh_ebp = ebp; sub_001587BF(); return; /* tail jmp 0x001587BF */

}

/**
 * sub_001584EC
 * Original: 0x001584EC - 0x0015853E (82 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001584EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001584EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158527; /* je: equal / zero */

loc_001584FA: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158527; /* je: equal / zero */

loc_00158501: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 8 (8-bit) */
    eax = (uint32_t)(int32_t)SMEM16(eax);
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0015851E; /* je: equal / zero */

loc_0015850D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -28) = 1;
    g_seh_ebp = ebp; sub_001587BC(); return; /* tail jmp 0x001587BC */

loc_0015851E: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001587BC(); return; /* tail jmp 0x001587BC */

loc_00158527: ;
    eax = 0x2B0FF4;
    MEM32(ebp + -12) = eax;
    edx = eax + 1;

loc_00158532: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158532; /* jne: not equal / not zero */

loc_00158539: ;
    g_seh_ebp = ebp; sub_001585F6(); return; /* tail jmp 0x001585F6 */

}

/**
 * sub_0015853E
 * Original: 0x0015853E - 0x001585F6 (184 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015853E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015853E: ;
    if (_flags /* jne: not equal / not zero */) goto loc_0015854F;

loc_00158540: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x67 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158586; /* jne: not equal / not zero */

loc_00158546: ;
    MEM32(ebp + -8) = 1;
    goto loc_00158586;

loc_0015854F: ;
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015855C; /* jle: less or equal (signed <=) */

loc_00158559: ;
    MEM32(ebp + -8) = eax;

loc_0015855C: ;
    esi = 0xA3;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158586; /* jle: less or equal (signed <=) */

loc_00158566: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x15D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00158574u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00158574: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(ebp + -44) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00158583; /* je: equal / zero */

loc_0015857C: ;
    MEM32(ebp + -12) = eax;
    edi = eax;
    goto loc_00158586;

loc_00158583: ;
    MEM32(ebp + -8) = esi;

loc_00158586: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -64));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -80) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -84) = ecx;
    { uint32_t _icall_target = MEM32(0x2FCF50); PUSH32(esp, 0x001585AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585A9u); } /* indirect call */
    }

loc_001585AF: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001585CB; /* je: equal / zero */

loc_001585BD: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585CB; /* jne: not equal / not zero */

loc_001585C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF5C); PUSH32(esp, 0x001585CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585C4u); } /* indirect call */
    }

loc_001585CA: ;
    POP32(esp, ecx);

loc_001585CB: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x67 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585DD; /* jne: not equal / not zero */

loc_001585D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585DD; /* jne: not equal / not zero */

loc_001585D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF54); PUSH32(esp, 0x001585DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585D6u); } /* indirect call */
    }

loc_001585DC: ;
    POP32(esp, ecx);

loc_001585DD: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585EA; /* jne: not equal / not zero */

loc_001585E2: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_001585EA: ;
    eax = edi;
    edx = eax + 1;

loc_001585EF: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585EF; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001585F6(); return; /* fallthrough 0x001585F6 */

}

/**
 * sub_00158586
 * Original: 0x00158586 - 0x001585F6 (112 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158586: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -64));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(eax + -4);
    MEM32(ebp + -80) = eax;
    eax = SX8(LO8(ebx));
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(ebp + -84) = ecx;
    { uint32_t _icall_target = MEM32(0x2FCF50); PUSH32(esp, 0x001585AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585A9u); } /* indirect call */
    }

loc_001585AF: ;
    esi = MEM32(ebp + -4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001585CB; /* je: equal / zero */

loc_001585BD: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585CB; /* jne: not equal / not zero */

loc_001585C3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF5C); PUSH32(esp, 0x001585CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585C4u); } /* indirect call */
    }

loc_001585CA: ;
    POP32(esp, ecx);

loc_001585CB: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x67 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585DD; /* jne: not equal / not zero */

loc_001585D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585DD; /* jne: not equal / not zero */

loc_001585D5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x2FCF54); PUSH32(esp, 0x001585DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585D6u); } /* indirect call */
    }

loc_001585DC: ;
    POP32(esp, ecx);

loc_001585DD: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585EA; /* jne: not equal / not zero */

loc_001585E2: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = edi;

loc_001585EA: ;
    eax = edi;
    edx = eax + 1;

loc_001585EF: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001585EF; /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001585F6(); return; /* fallthrough 0x001585F6 */

}

/**
 * sub_001585F6
 * Original: 0x001585F6 - 0x001585FD (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001585F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001585F6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001587BC(); return; /* tail jmp 0x001587BC */

}

/**
 * sub_001585FD
 * Original: 0x001585FD - 0x0015863C (63 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001585FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001585FD: ;
    _fb = (uint32_t)(0x69) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x69;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001584A6(); return; } /* je: equal / zero */

loc_00158606: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001586B7(); return; } /* je: equal / zero */

loc_0015860F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015869D(); return; } /* je: equal / zero */

loc_00158616: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_0015866A(); return; } /* je: equal / zero */

loc_00158619: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001583B4(); return; } /* je: equal / zero */

loc_00158622: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001584AA(); return; } /* je: equal / zero */

loc_0015862A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jne: not equal / not zero */

loc_00158633: ;
    MEM32(ebp + -48) = 0x27;
    g_seh_ebp = ebp; sub_00158674(); return; /* tail jmp 0x00158674 */

}

/**
 * sub_0015863C
 * Original: 0x0015863C - 0x0015866A (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015863C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015863C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158647; /* jne: not equal / not zero */

loc_00158640: ;
    MEM32(ebp + -12) = 0x2B0FFC;

loc_00158647: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + -28) = 1;
    goto loc_0015865C;

loc_00158653: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158660; /* je: equal / zero */

loc_0015865A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015865C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158653; /* jne: not equal / not zero */

loc_00158660: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    g_seh_ebp = ebp; sub_001587BC(); return; /* tail jmp 0x001587BC */

}

/**
 * sub_0015866A
 * Original: 0x0015866A - 0x00158671 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015866A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015866A: ;
    MEM32(ebp + -8) = 8;

    g_seh_ebp = ebp; sub_00158671(); return; /* fallthrough 0x00158671 */

}

/**
 * sub_00158671
 * Original: 0x00158671 - 0x0015869D (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158671(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158671: ;
    MEM32(ebp + -48) = ecx;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001584B1(); return; } /* je: equal / zero */

loc_00158685: ;
    eax = MEM32(ebp + -48);
    _fb = (uint32_t)(0x51) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x51;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -36) = 0x30;
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -24) = edi;
    g_seh_ebp = ebp; sub_001584B1(); return; /* tail jmp 0x001584B1 */

}

/**
 * sub_00158674
 * Original: 0x00158674 - 0x0015869D (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158674(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158674: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    MEM32(ebp + -16) = 0x10;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001584B1(); return; } /* je: equal / zero */

loc_00158685: ;
    eax = MEM32(ebp + -48);
    _fb = (uint32_t)(0x51) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x51;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebp + -36) = 0x30;
    MEM16(ebp + -34) = LO16(eax);
    MEM32(ebp + -24) = edi;
    g_seh_ebp = ebp; sub_001584B1(); return; /* tail jmp 0x001584B1 */

}

/**
 * sub_0015869D
 * Original: 0x0015869D - 0x001586B7 (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015869D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015869D: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x80 (8-bit) */
    MEM32(ebp + -16) = 8;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001584B1(); return; } /* je: equal / zero */

loc_001586AE: ;
    MEM8(ebp + -3) = MEM8(ebp + -3) | 2;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001584B1(); return; /* tail jmp 0x001584B1 */

}

/**
 * sub_001586B7
 * Original: 0x001586B7 - 0x001588D9 (546 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001586B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + -4);
    if (TEST_Z(_fa, _fb)) goto loc_001586D0; /* je: equal / zero */

loc_001586C7: ;
    SET_LO16(ecx, MEM16(ebp + -20));
    MEM16(eax) = LO16(ecx);
    goto loc_001586D5;

loc_001586D0: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_001586D5: ;
    MEM32(ebp + -52) = 1;
    goto loc_001588B7;

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001586FF; /* je: equal / zero */

loc_001586ED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001586F9; /* je: equal / zero */

loc_001586F2: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_001586F6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00158709;

loc_001586F9: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_001586F6;

loc_001586FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax + -4);
    if (TEST_NZ(_fa, _fb)) goto loc_001586F6; /* jne: not equal / not zero */

loc_00158707: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158709: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00158723; /* je: equal / zero */

loc_0015870E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00158723; /* jg: greater (signed >) */

loc_00158712: ;
    if (CMP_L(_fas, _fbs)) goto loc_00158718; /* jl: less (signed <) */

loc_00158714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00158723; /* jae: above or equal (unsigned >=) */

loc_00158718: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00158723: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015872E; /* jne: not equal / not zero */

loc_0015872C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015872E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0015873D; /* jge: greater or equal (signed >=) */

loc_00158734: ;
    MEM32(ebp + -8) = 1;
    goto loc_0015874E;

loc_0015873D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015874E; /* jle: less or equal (signed <=) */

loc_0015874B: ;
    MEM32(ebp + -8) = eax;

loc_0015874E: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00158758; /* jne: not equal / not zero */

loc_00158754: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00158758: ;
    esi = ebp + -597;

loc_0015875E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015876E; /* jg: greater (signed >) */

loc_00158768: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158792; /* je: equal / zero */

loc_0015876E: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015877Bu); RECOMP_ABI_CALL(0x0015B340u, sub_0015B340); /* call 0x0015B340 */

loc_0015877B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015878D; /* jle: less or equal (signed <=) */

loc_0015878A: ;
    _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -48))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015878D: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0015875E;

loc_00158792: ;
    eax = ebp + -597;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001587BF; /* je: equal / zero */

loc_001587A7: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001587B2; /* jne: not equal / not zero */

loc_001587AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001587BF; /* jne: not equal / not zero */

loc_001587B2: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = eax;

loc_001587BF: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001588B7; /* jne: not equal / not zero */

loc_001587C9: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587D0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587DD; /* je: equal / zero */

loc_001587D5: ;
    MEM16(ebp + -36) = 0x2D;
    goto loc_001587F3;

loc_001587DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587E9; /* je: equal / zero */

loc_001587E1: ;
    MEM16(ebp + -36) = 0x2B;
    goto loc_001587F3;

loc_001587E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587ED: ;
    MEM16(ebp + -36) = 0x20;

loc_001587F3: ;
    MEM32(ebp + -24) = 1;

loc_001587FA: ;
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -24)));
    ebx = ebx - MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -16)));
    ebx = ebx - MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0xC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015881A; /* jne: not equal / not zero */

loc_00158809: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00158817u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158817: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015881A: ;
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    PUSH32(esp, 0x0015882Bu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015882B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00158847; /* je: equal / zero */

loc_00158832: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00158847; /* jne: not equal / not zero */

loc_00158838: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0x00158844u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158844: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158847: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00158891; /* jne: not equal / not zero */

loc_0015884D: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00158891; /* jle: less or equal (signed <=) */

loc_00158854: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_0015885A: ;
    PUSH32(esp, MEM32(0x2FD3D0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015886Du); RECOMP_ABI_CALL(0x0015BF64u, sub_0015BF64); /* call 0x0015BF64 */

loc_0015886D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001588A0; /* jle: less or equal (signed <=) */

loc_00158877: ;
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    PUSH32(esp, 0x00158885u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158885: ;
    _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -72))) >> 32) & 1);
    edi = edi + MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0015885A; /* jg: greater (signed >) */

loc_0015888F: ;
    goto loc_001588A0;

loc_00158891: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0x0015889Fu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015889F: ;
    POP32(esp, ecx);

loc_001588A0: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001588B7; /* je: equal / zero */

loc_001588A6: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001588B4u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_001588B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001588B7: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001588CA; /* je: equal / zero */

loc_001588BD: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x001588C5u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_001588C5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001588CA: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00158167(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001588D9(); return; /* fallthrough 0x001588D9 */

}

/**
 * sub_001586E1
 * Original: 0x001586E1 - 0x001588D9 (504 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001586E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001586E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + 0x10)) + (uint64_t)(4)) >> 32) & 1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001586FF; /* je: equal / zero */

loc_001586ED: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001586F9; /* je: equal / zero */

loc_001586F2: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + -4);

loc_001586F6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    goto loc_00158709;

loc_001586F9: ;
    eax = ZX16(MEM16(eax + -4));
    goto loc_001586F6;

loc_001586FF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(eax + -4);
    if (TEST_NZ(_fa, _fb)) goto loc_001586F6; /* jne: not equal / not zero */

loc_00158707: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158709: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00158723; /* je: equal / zero */

loc_0015870E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00158723; /* jg: greater (signed >) */

loc_00158712: ;
    if (CMP_L(_fas, _fbs)) goto loc_00158718; /* jl: less (signed <) */

loc_00158714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00158723; /* jae: above or equal (unsigned >=) */

loc_00158718: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00158723: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015872E; /* jne: not equal / not zero */

loc_0015872C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015872E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0015873D; /* jge: greater or equal (signed >=) */

loc_00158734: ;
    MEM32(ebp + -8) = 1;
    goto loc_0015874E;

loc_0015873D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015874E; /* jle: less or equal (signed <=) */

loc_0015874B: ;
    MEM32(ebp + -8) = eax;

loc_0015874E: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00158758; /* jne: not equal / not zero */

loc_00158754: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00158758: ;
    esi = ebp + -597;

loc_0015875E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015876E; /* jg: greater (signed >) */

loc_00158768: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158792; /* je: equal / zero */

loc_0015876E: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015877Bu); RECOMP_ABI_CALL(0x0015B340u, sub_0015B340); /* call 0x0015B340 */

loc_0015877B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015878D; /* jle: less or equal (signed <=) */

loc_0015878A: ;
    _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -48))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015878D: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0015875E;

loc_00158792: ;
    eax = ebp + -597;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001587BF; /* je: equal / zero */

loc_001587A7: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001587B2; /* jne: not equal / not zero */

loc_001587AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001587BF; /* jne: not equal / not zero */

loc_001587B2: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -16) = eax;

loc_001587BF: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001588B7; /* jne: not equal / not zero */

loc_001587C9: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587D0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587DD; /* je: equal / zero */

loc_001587D5: ;
    MEM16(ebp + -36) = 0x2D;
    goto loc_001587F3;

loc_001587DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587E9; /* je: equal / zero */

loc_001587E1: ;
    MEM16(ebp + -36) = 0x2B;
    goto loc_001587F3;

loc_001587E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587ED: ;
    MEM16(ebp + -36) = 0x20;

loc_001587F3: ;
    MEM32(ebp + -24) = 1;

loc_001587FA: ;
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -24)));
    ebx = ebx - MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(MEM32(ebp + -16)));
    ebx = ebx - MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0xC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015881A; /* jne: not equal / not zero */

loc_00158809: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00158817u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158817: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015881A: ;
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    PUSH32(esp, 0x0015882Bu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015882B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00158847; /* je: equal / zero */

loc_00158832: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00158847; /* jne: not equal / not zero */

loc_00158838: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0x00158844u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158844: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158847: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00158891; /* jne: not equal / not zero */

loc_0015884D: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00158891; /* jle: less or equal (signed <=) */

loc_00158854: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_0015885A: ;
    PUSH32(esp, MEM32(0x2FD3D0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015886Du); RECOMP_ABI_CALL(0x0015BF64u, sub_0015BF64); /* call 0x0015BF64 */

loc_0015886D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001588A0; /* jle: less or equal (signed <=) */

loc_00158877: ;
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    PUSH32(esp, 0x00158885u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158885: ;
    _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(MEM32(ebp + -72))) >> 32) & 1);
    edi = edi + MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0015885A; /* jg: greater (signed >) */

loc_0015888F: ;
    goto loc_001588A0;

loc_00158891: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0x0015889Fu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015889F: ;
    POP32(esp, ecx);

loc_001588A0: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001588B7; /* je: equal / zero */

loc_001588A6: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001588B4u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_001588B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001588B7: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001588CA; /* je: equal / zero */

loc_001588BD: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x001588C5u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_001588C5: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_001588CA: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00158167(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001588D9(); return; /* fallthrough 0x001588D9 */

}

/**
 * sub_00158709
 * Original: 0x00158709 - 0x001587BC (179 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158709(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158709: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00158723; /* je: equal / zero */

loc_0015870E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00158723; /* jg: greater (signed >) */

loc_00158712: ;
    if (CMP_L(_fas, _fbs)) goto loc_00158718; /* jl: less (signed <) */

loc_00158714: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_AE(_fa, _fb)) goto loc_00158723; /* jae: above or equal (unsigned >=) */

loc_00158718: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(0u - (uint32_t)(edx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = 0; /* logical op clears CF */
    MEM8(ebp + -3) = MEM8(ebp + -3) | 1;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00158723: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -4), esi (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = eax;
    edi = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0015872E; /* jne: not equal / not zero */

loc_0015872C: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015872E: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_0015873D; /* jge: greater or equal (signed >=) */

loc_00158734: ;
    MEM32(ebp + -8) = 1;
    goto loc_0015874E;

loc_0015873D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015874E; /* jle: less or equal (signed <=) */

loc_0015874B: ;
    MEM32(ebp + -8) = eax;

loc_0015874E: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00158758; /* jne: not equal / not zero */

loc_00158754: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00158758: ;
    esi = ebp + -597;

loc_0015875E: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_0015876E; /* jg: greater (signed >) */

loc_00158768: ;
    eax = ebx;
    _cf = 0; /* logical op clears CF */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158792; /* je: equal / zero */

loc_0015876E: ;
    eax = MEM32(ebp + -16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015877Bu); RECOMP_ABI_CALL(0x0015B340u, sub_0015B340); /* call 0x0015B340 */

loc_0015877B: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x30)) >> 32) & 1);
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x39) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x39 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ebp + -72) = ebx;
    ebx = eax;
    edi = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0015878D; /* jle: less or equal (signed <=) */

loc_0015878A: ;
    _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + -48))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015878D: ;
    MEM8(esi) = LO8(ecx);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_0015875E;

loc_00158792: ;
    eax = ebp + -597;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -3), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = esi;
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* je: equal / zero */

loc_001587A7: ;
    ecx = esi;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x30 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001587B2; /* jne: not equal / not zero */

loc_001587AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001587BF(); return; } /* jne: not equal / not zero */

loc_001587B2: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -12);
    MEM8(ecx) = 0x30;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001587BC(); return; /* fallthrough 0x001587BC */

}

/**
 * sub_001587BC
 * Original: 0x001587BC - 0x001587BF (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001587BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001587BC: ;
    MEM32(ebp + -16) = eax;

    g_seh_ebp = ebp; sub_001587BF(); return; /* fallthrough 0x001587BF */

}

/**
 * sub_001587BF
 * Original: 0x001587BF - 0x001588C9 (266 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001587BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001587BF: ;
    _fa = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -52), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001588B7; /* jne: not equal / not zero */

loc_001587C9: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587D0: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001587DD; /* je: equal / zero */

loc_001587D5: ;
    MEM16(ebp + -36) = 0x2D;
    goto loc_001587F3;

loc_001587DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001587E9; /* je: equal / zero */

loc_001587E1: ;
    MEM16(ebp + -36) = 0x2B;
    goto loc_001587F3;

loc_001587E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001587FA; /* je: equal / zero */

loc_001587ED: ;
    MEM16(ebp + -36) = 0x20;

loc_001587F3: ;
    MEM32(ebp + -24) = 1;

loc_001587FA: ;
    ebx = MEM32(ebp + -32);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -16);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 0xC (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015881A; /* jne: not equal / not zero */

loc_00158809: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00158817u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158817: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015881A: ;
    PUSH32(esp, MEM32(ebp + -24));
    edi = MEM32(ebp + 8);
    eax = ebp + -20;
    ecx = ebp + -36;
    PUSH32(esp, 0x0015882Bu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015882B: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 8 (8-bit) */
    POP32(esp, ecx);
    if (TEST_Z(_fa, _fb)) goto loc_00158847; /* je: equal / zero */

loc_00158832: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00158847; /* jne: not equal / not zero */

loc_00158838: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x30);
    eax = ebp + -20;
    PUSH32(esp, 0x00158844u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_00158844: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158847: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158891; /* jne: not equal / not zero */

loc_0015884D: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158891; /* jle: less or equal (signed <=) */

loc_00158854: ;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -56) = eax;

loc_0015885A: ;
    PUSH32(esp, MEM32(0x2FD3D0));
    MEM32(ebp + -56) = MEM32(ebp + -56) - 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ebp + -68;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015886Du); RECOMP_ABI_CALL(0x0015BF64u, sub_0015BF64); /* call 0x0015BF64 */

loc_0015886D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -72) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001588A0; /* jle: less or equal (signed <=) */

loc_00158877: ;
    PUSH32(esp, MEM32(ebp + -68));
    eax = MEM32(ebp + 8);
    esi = ebp + -20;
    PUSH32(esp, 0x00158885u); RECOMP_ABI_CALL(0x001580A1u, sub_001580A1); /* call 0x001580A1 */

loc_00158885: ;
    _fb = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -72);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_G(_fas, _fbs)) goto loc_0015885A; /* jg: greater (signed >) */

loc_0015888F: ;
    goto loc_001588A0;

loc_00158891: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -12);
    eax = ebp + -20;
    PUSH32(esp, 0x0015889Fu); RECOMP_ABI_CALL(0x001580EBu, sub_001580EB); /* call 0x001580EB */

loc_0015889F: ;
    POP32(esp, ecx);

loc_001588A0: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001588B7; /* je: equal / zero */

loc_001588A6: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -20;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001588B4u); RECOMP_ABI_CALL(0x001580C6u, sub_001580C6); /* call 0x001580C6 */

loc_001588B4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001588B7: ;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -44), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001588CA(); return; } /* je: equal / zero */

loc_001588BD: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x001588C5u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_001588C5: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) & 0;
    _fa = (uint32_t)(MEM32(ebp + -44)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001588C9(); return; /* fallthrough 0x001588C9 */

}

/**
 * sub_001588C9
 * Original: 0x001588C9 - 0x001588CA (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001588C9: ;
    POP32(esp, ecx);

    g_seh_ebp = ebp; sub_001588CA(); return; /* fallthrough 0x001588CA */

}

/**
 * sub_001588CA
 * Original: 0x001588CA - 0x001588D9 (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001588CA: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ebx, MEM16(eax));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00158167(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001588D9(); return; /* fallthrough 0x001588D9 */

}

/**
 * sub_001588D9
 * Original: 0x001588D9 - 0x001588DB (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001588D9: ;
    POP32(esp, edi);
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001588DB(); return; /* fallthrough 0x001588DB */

}

/**
 * sub_001588DB
 * Original: 0x001588DB - 0x001588E1 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001588DB: ;
    eax = MEM32(ebp + -20);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001588E1
 * Original: 0x001588E1 - 0x00158904 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001588E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001588E1: ;
    PUSH32(esp, ebx);
    { uint64_t _t = (uint64_t)(MEM32(0x1581B900)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x1581B900) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(0x1581B900)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    RECOMP_UNIMPL("salc", 0x001588E9u); /* TODO: salc */
    { uint64_t _t = (uint64_t)(MEM32(0x15822000)) + (uint64_t)(0x15825C00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x15822000) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(0x15822000)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -126)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ebp + -126) = MEM8(ebp + -126) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + -126)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15829E00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -125)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx + -125) = MEM8(ebx + -125) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + -125)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xCCCCCC00u) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */

    g_seh_ebp = ebp; sub_00158904(); return; /* fallthrough 0x00158904 */

}

/**
 * sub_00158904
 * Original: 0x00158904 - 0x00158923 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158904(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158904: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = esp;
    MEM32(esp + 0xC) = ebp;
    ebp = esp + 0xC;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0015892F
 * Original: 0x0015892F - 0x0015895F (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015892F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015892F: ;
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158952; /* je: equal / zero */

loc_00158938: ;
    _fa = (uint32_t)(MEM16(esp + 4)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 4), 0x100 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00158952; /* jae: above or equal (unsigned >=) */

loc_00158941: ;
    eax = ZX16(MEM16(esp + 4));
    ecx = MEM32(0x2FD3C4);
    SET_LO16(eax, MEM16(ecx + eax * 2));
    goto loc_00158954;

loc_00158952: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00158954: ;
    ecx = ZX16(MEM16(esp + 8));
    eax = ZX16(LO16(eax));
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158964
 * Original: 0x00158964 - 0x00158994 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158964(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158964: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00158972; /* jbe: below or equal (unsigned <=) */

loc_0015896F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00158972: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158986; /* jle: less or equal (signed <=) */

loc_0015897B: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00158983u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_00158983: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00158986: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158994
 * Original: 0x00158994 - 0x00158B0A (374 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158994(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158994: ;
    SET_LO16(eax, MEM16(esp + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x30 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_001589A3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x3A (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001589B0; /* jae: above or equal (unsigned >=) */

loc_001589A9: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_001589B0: ;
    ecx = 0xFF10;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00158AFA; /* jae: above or equal (unsigned >=) */

loc_001589BE: ;
    ecx = 0x660;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_001589CC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x66A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x66A (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_001589D6: ;
    ecx = 0x6F0;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_001589E4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x6FA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x6FA (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_001589EE: ;
    ecx = 0x966;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_001589FC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x970) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x970 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A06: ;
    ecx = 0x9E6;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A14: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x9F0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x9F0 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A1E: ;
    ecx = 0xA66;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A2C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA70) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA70 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A36: ;
    ecx = 0xAE6;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A44: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xAF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xAF0 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A4E: ;
    ecx = 0xB66;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A5C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xB70) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xB70 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A66: ;
    ecx = 0xC66;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A74: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC70) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC70 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A7E: ;
    ecx = 0xCE6;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A88: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xCF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xCF0 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A8E: ;
    ecx = 0xD66;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158A98: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xD70) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xD70 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158A9E: ;
    ecx = 0xE50;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AA8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xE5A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xE5A (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158AAE: ;
    ecx = 0xED0;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AB8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xEDA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xEDA (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158ABE: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AC6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF2A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF2A (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158ACC: ;
    ecx = 0x1040;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AD6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x104A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x104A (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158ADC: ;
    ecx = 0x17E0;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AE6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x17EA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x17EA (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B00; /* jb: below (unsigned <) */

loc_00158AEC: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ecx) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158B06; /* jb: below (unsigned <) */

loc_00158AF4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x181A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x181A (16-bit) */
    goto loc_00158AFE;

loc_00158AFA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFF1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFF1A (16-bit) */

loc_00158AFE: ;
    if (CMP_AE(_fa, _fb)) goto loc_00158B06; /* jae: above or equal (unsigned >=) */

loc_00158B00: ;
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_00158B06: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158B0A
 * Original: 0x00158B0A - 0x00158B5A (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158B0A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1718);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B16u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158B16: ;
    _fa = (uint32_t)(MEM32(0xA9E420)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9E420), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158B3E; /* jne: not equal / not zero */

loc_00158B1F: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B26u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00158B26: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B38u); RECOMP_ABI_CALL(0x00158B5Au, sub_00158B5A); /* call 0x00158B5A */

loc_00158B38: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158B51; /* jne: not equal / not zero */

loc_00158B3E: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B48u); RECOMP_ABI_CALL(0x000B1796u, sub_000B1796); /* call 0x000B1796 */

loc_00158B48: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B4Eu); RECOMP_ABI_CALL(0x000B266Au, sub_000B266A); /* call 0x000B266A */

loc_00158B4E: ;
    MEM32(ebp + -28) = eax;

loc_00158B51: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158B59u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158B59: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00158B5A
 * Original: 0x00158B5A - 0x00158B63 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B5A(void)
{

loc_00158B5A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00158B61u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00158B61: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00158B70
 * Original: 0x00158B70 - 0x00158BD1 (97 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00158B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158BCA; /* je: equal / zero */

loc_00158B7D: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    SET_HI8(ebx, 0x41);
    SET_LO8(ebx, 0x5A);
    SET_HI8(edx, 0x20);
    /* nop */

loc_00158B8C: ;
    SET_HI8(eax, MEM8(esi));
    SET_HI8(eax, HI8(eax) | HI8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, MEM8(edi));
    if ((_fa == 0)) goto loc_00158BBB; /* je: equal / zero */

loc_00158B94: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158BBB; /* je: equal / zero */

loc_00158B98: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158BA8; /* jb: below (unsigned <) */

loc_00158BA2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158BA8; /* ja: above (unsigned >) */

loc_00158BA6: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + HI8(edx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00158BA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(HI8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), HI8(ebx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00158BB2; /* jb: below (unsigned <) */

loc_00158BAC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158BB2; /* ja: above (unsigned >) */

loc_00158BB0: ;
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + HI8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00158BB2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158BC1; /* jne: not equal / not zero */

loc_00158BB6: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00158B8C; /* jne: not equal / not zero */

loc_00158BBB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158BCA; /* je: equal / zero */

loc_00158BC1: ;
    ecx = 0xFFFFFFFFu;
    if (CMP_B(_fa, _fb)) goto loc_00158BCA; /* jb: below (unsigned <) */

loc_00158BC8: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00158BCA: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00158BD1
 * Original: 0x00158BD1 - 0x00158D7B (426 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00158BD1(void)
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

loc_00158BD1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, 0x133F);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158BE7u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00158BE7: ;
    edi = eax;
    eax = MEM32(ebp + 0xE);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00158C5C; /* jne: not equal / not zero */

loc_00158BF8: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C05u); RECOMP_ABI_CALL(0x0015605Fu, sub_0015605F); /* call 0x0015605F */

loc_00158C05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00158C35; /* jle: less or equal (signed <=) */

loc_00158C0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158C6E; /* jle: less or equal (signed <=) */

loc_00158C10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00158C35; /* jne: not equal / not zero */

loc_00158C15: ;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x19);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C2Du); RECOMP_ABI_CALL(0x00155E21u, sub_00155E21); /* call 0x00155E21 */

loc_00158C2D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00158D77;

loc_00158C35: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x22C178)); /* fadd qword ptr [0x22c178] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x19);
    PUSH32(esp, 8);
    goto loc_00158D52;

loc_00158C5C: ;
    fp_push(MEMD(0x22CA68)); /* fld double */
    fp_push(MEMD(ebp + 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00158C7C; /* jp: parity */

loc_00158C6E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C75u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00158C75: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00158D74;

loc_00158C7C: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158C8Du); RECOMP_ABI_CALL(0x001560BAu, sub_001560BA); /* call 0x001560BA */

loc_00158C8D: ;
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00158C9B; /* jge: greater or equal (signed >=) */

loc_00158C99: ;
    ecx = (uint32_t)(0u - (uint32_t)(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00158C9B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7FFFFFFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00158CA8; /* jg: greater (signed >) */

loc_00158CA3: ;
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158CA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA00 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158CDD; /* jle: less or equal (signed <=) */

loc_00158CAF: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(0x2FD050)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158CC5u); RECOMP_ABI_CALL(0x00152BC1u, sub_00152BC1); /* call 0x00152BC1 */

loc_00158CC5: ;
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);

loc_00158CD1: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x11);
    goto loc_00158D52;

loc_00158CDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00158D08; /* jle: less or equal (signed <=) */

loc_00158CE4: ;
    _fb = (uint32_t)(0xFFFFFA00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFA00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158CF4u); RECOMP_ABI_CALL(0x00155FD1u, sub_00155FD1); /* call 0x00155FD1 */

loc_00158CF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    goto loc_00158CD1;

loc_00158D08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF603u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF603u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D1F; /* jge: greater or equal (signed >=) */

loc_00158D0F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x22CA68)); /* fmul qword ptr [0x22ca68] */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    goto loc_00158D41;

loc_00158D1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC03u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC03u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00158D5C; /* jge: greater or equal (signed >=) */

loc_00158D26: ;
    _fb = (uint32_t)(0x600) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x600;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D36u); RECOMP_ABI_CALL(0x00155FD1u, sub_00155FD1); /* call 0x00155FD1 */

loc_00158D36: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */

loc_00158D41: ;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x12);

loc_00158D52: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D57u); RECOMP_ABI_CALL(0x00155F20u, sub_00155F20); /* call 0x00155F20 */

loc_00158D57: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00158D77;

loc_00158D5C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D67u); RECOMP_ABI_CALL(0x00155FD1u, sub_00155FD1); /* call 0x00155FD1 */

loc_00158D67: ;
    PUSH32(esp, esi);
    MEMD(ebp + 8) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D71u); RECOMP_ABI_CALL(0x00156185u, sub_00156185); /* call 0x00156185 */

loc_00158D71: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00158D74: ;
    fp_push(MEMD(ebp + 8)); /* fld double */

loc_00158D77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158D7B
 * Original: 0x00158D7B - 0x00158DBD (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158D7B: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1728);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158D87u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158D87: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    goto loc_00158DB1;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00158DB1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158DBAu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158DBA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00158D98
 * Original: 0x00158D98 - 0x00158DBD (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D98(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158D98: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_00158DAC
 * Original: 0x00158DAC - 0x00158DBD (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158DAC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158DAC: ;
    esp = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00158DBAu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00158DBA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00158DD0
 * Original: 0x00158DD0 - 0x00158DF1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00158DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158DD0: ;
    eax = MEM32(esp + 4);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158DEE; /* ja: above (unsigned >) */

loc_00158DDF: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX16(MEM16(ecx + eax * 2));
    eax = eax & MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_00158DEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00158E9C
 * Original: 0x00158E9C - 0x00158ECD (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158E9C(void)
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

loc_00158E9C: ;
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00158EA7u); RECOMP_ABI_CALL(0x00157172u, sub_00157172); /* call 0x00157172 */

loc_00158EA7: ;
    SET_LO8(ebx, ~LO8(ebx));
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00158EBB; /* je: equal / zero */

loc_00158EB2: ;
    PUSH32(esp, 0x00158EB7u); RECOMP_ABI_CALL(0x00158EDFu, sub_00158EDF); /* call 0x00158EDF */

loc_00158EB7: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */

loc_00158EBB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00158EC8; /* jne: not equal / not zero */

loc_00158EC0: ;
    SET_HI8(ebx, ~HI8(ebx));
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */

loc_00158EC8: ;
    g_seh_ebp = ebp; sub_00157314(); return; /* tail jmp 0x00157314 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158ECD
 * Original: 0x00158ECD - 0x00158EDF (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158ECD(void)
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

loc_00158ECD: ;
    PUSH32(esp, 0x00158ED2u); RECOMP_ABI_CALL(0x00158EDFu, sub_00158EDF); /* call 0x00158EDF */

loc_00158ED2: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00158EDE; /* jne: not equal / not zero */

loc_00158ED8: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); /* fadd st(1), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00158EDE: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158EDF
 * Original: 0x00158EDF - 0x00158EF0 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158EDF(void)
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

loc_00158EDF: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(1.0); /* fld1 */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00158EED; /* jne: not equal / not zero */

loc_00158EE7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00158EED: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158EF0
 * Original: 0x00158EF0 - 0x00158F2E (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00158EF0(void)
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

loc_00158EF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158F1F; /* je: equal / zero */

loc_00158F0B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F10u); RECOMP_ABI_CALL(0x00157283u, sub_00157283); /* call 0x00157283 */

loc_00158F10: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 3;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F1Cu); RECOMP_ABI_CALL(0x00158FBAu, sub_00158FBA); /* call 0x00158FBA */

loc_00158F1C: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00158F1F: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -134) = fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -126) = fp_top(); /* fst */
    goto loc_00158F0B;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158F2E
 * Original: 0x00158F2E - 0x00158F6B (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00158F2E(void)
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

loc_00158F2E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    _fa = (uint32_t)(MEM32(0x2FD670)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD670), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158F63; /* je: equal / zero */

loc_00158F48: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F4Du); RECOMP_ABI_CALL(0x0015721Cu, sub_0015721C); /* call 0x0015721C */

loc_00158F4D: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 1;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F60u); RECOMP_ABI_CALL(0x00158FBAu, sub_00158FBA); /* call 0x00158FBA */

loc_00158F60: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00158F63: ;
    MEMD(ebp + -134) = fp_top(); /* fst */
    goto loc_00158F48;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158F6B
 * Original: 0x00158F6B - 0x00158FB3 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00158F6B(void)
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

loc_00158F6B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F80u); RECOMP_ABI_CALL(0x00159134u, sub_00159134); /* call 0x00159134 */

loc_00158F80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158F8Eu); RECOMP_ABI_CALL(0x00159134u, sub_00159134); /* call 0x00159134 */

loc_00158F8E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) | 2;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -143) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158FABu); RECOMP_ABI_CALL(0x00157283u, sub_00157283); /* call 0x00157283 */

loc_00158FAB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00158FB0u); RECOMP_ABI_CALL(0x00158FB3u, sub_00158FB3); /* call 0x00158FB3 */

loc_00158FB0: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00158FB3
 * Original: 0x00158FB3 - 0x00158FBA (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158FB3: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFE;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_00158FBA(); return; /* fallthrough 0x00158FBA */

}

/**
 * sub_00158FBA
 * Original: 0x00158FBA - 0x00159101 (327 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158FBA(void)
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

loc_00158FBA: ;
    _fa = (uint32_t)(MEM32(0x98B20C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B20C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159012; /* jne: not equal / not zero */

loc_00158FC3: ;
    MEMD(ebp + -720) = fp_top(); /* fst */
    SET_LO8(eax, MEM8(ebp + -144));
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00158FED; /* je: equal / zero */

loc_00158FD3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159032; /* je: equal / zero */

loc_00158FD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015901A; /* je: equal / zero */

loc_00158FDB: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00159012; /* je: equal / zero */

loc_00158FDF: ;
    eax = SX8(LO8(eax));
    MEM32(ebp + -142) = eax;
    goto loc_0015909F;

loc_00158FED: ;
    SET_LO16(eax, MEM16(ebp + -164));
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00159012; /* jne: not equal / not zero */

loc_00158FFA: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00159012; /* je: equal / zero */

loc_00159003: ;
    MEM32(ebp + -142) = 8;
    goto loc_0015909F;

loc_00159012: ;
    g_fp_control_word = MEM16(ebp + -164); /* fldcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    esp += 4; return; /* ret */

loc_0015901A: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(eax, LO16(eax) | LO16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00159045; /* je: equal / zero */

loc_0015902A: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159073; /* je: equal / zero */

loc_00159030: ;
    goto loc_00158FED;

loc_00159032: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159073; /* je: equal / zero */

loc_00159043: ;
    goto loc_00158FED;

loc_00159045: ;
    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x2B174C)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x2B173C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x2b173c] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    if (!(_fa & 1u) /* sahf */) goto loc_0015909F; /* jae: above or equal (unsigned >=) */

loc_0015906B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2B175C)); /* fmul qword ptr [0x2b175c] */
    goto loc_0015909F;

loc_00159073: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x2B1744)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = recomp_fscale(fp_top(), fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x2B1734)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x2b1734] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    if (((_fa & 1u) || (_fa & 0x40u)) /* sahf */) goto loc_0015909F; /* jbe: below or equal (unsigned <=) */

loc_00159099: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x2B1754)); /* fmul qword ptr [0x2b1754] */

loc_0015909F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -138) = ebx;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -712), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001590D1; /* jne: not equal / not zero */

loc_001590B7: ;
    g_df = 0; /* cld */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001590D1; /* je: equal / zero */

loc_001590C9: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_001590D1: ;
    MEMD(ebp + -118) = fp_top(); fp_pop(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001590F4u); RECOMP_ABI_CALL(0x0015B496u, sub_0015B496); /* call 0x0015B496 */

loc_001590F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    goto loc_00159012;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00159101
 * Original: 0x00159101 - 0x00159134 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00159101(void)
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

loc_00159101: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159116u); RECOMP_ABI_CALL(0x00159134u, sub_00159134); /* call 0x00159134 */

loc_00159116: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015912Cu); RECOMP_ABI_CALL(0x0015721Cu, sub_0015721C); /* call 0x0015721C */

loc_0015912C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159131u); RECOMP_ABI_CALL(0x00158FB3u, sub_00158FB3); /* call 0x00158FB3 */

loc_00159131: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00159134
 * Original: 0x00159134 - 0x00159170 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00159134(void)
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

loc_00159134: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFFF4u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    SET_LO16(eax, MEM16(ebp + 0xE));
    SET_LO16(ebx, LO16(eax));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015916A; /* jne: not equal / not zero */

loc_0015914C: ;
    SET_LO16(ebx, LO16(ebx) | 0x7FFF);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -2) = LO16(ebx);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    { uint32_t _c = (uint32_t)(0xB) & 31u; if (_c && _c < 32u) { eax = (eax << _c) | (ebx >> (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    MEM32(ebp + -6) = eax;
    MEM32(ebp + -10) = ebx;
    fp_push(recomp_f80_load(((uint64_t)MEM32((ebp + -10) + 4) << 32) | MEM32(ebp + -10), MEM16((ebp + -10) + 8))); /* fld tbyte */
    goto loc_0015916D;

loc_0015916A: ;
    fp_push(MEMD(ebp + 8)); /* fld double */

loc_0015916D: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00159170
 * Original: 0x00159170 - 0x0015918C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159170(void)
{

loc_00159170: ;
    PUSH32(esp, 0x00159175u); RECOMP_ABI_CALL(0x0015BFF1u, sub_0015BFF1); /* call 0x0015BFF1 */

loc_00159175: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x0015917Eu); RECOMP_ABI_CALL(0x0015BF9Bu, sub_0015BF9B); /* call 0x0015BF9B */

loc_0015917E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF);
    { uint32_t _icall_target = MEM32(0x2FD448); PUSH32(esp, 0x00159189u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159183u); } /* indirect call */
    }

loc_00159189: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015918C
 * Original: 0x0015918C - 0x001591FE (114 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015918C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015918C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159197u); RECOMP_ABI_CALL(0x0015B602u, sub_0015B602); /* call 0x0015B602 */

loc_00159197: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001591AD; /* jne: not equal / not zero */

loc_0015919D: ;
    PUSH32(esp, 0x001591A2u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_001591A2: ;
    MEM32(eax) = 9;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001591AD: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001591BEu); RECOMP_ABI_CALL(0x000AA9CFu, sub_000AA9CF); /* call 0x000AA9CF */

loc_001591BE: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001591CC; /* jne: not equal / not zero */

loc_001591C5: ;
    PUSH32(esp, 0x001591CAu); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001591CA: ;
    goto loc_001591CE;

loc_001591CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001591CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001591DE; /* je: equal / zero */

loc_001591D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001591D8u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_001591D8: ;
    POP32(esp, ecx);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001591FB;

loc_001591DE: ;
    ecx = esi;
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = MEM32(ecx * 4 + 0xA9E320);
    eax = esi;
    eax = eax + eax * 4;
    eax = ecx + eax * 8 + 4;
    MEM8(eax) = MEM8(eax) & 0xFD;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = edi;

loc_001591FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001591FE
 * Original: 0x001591FE - 0x00159282 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001591FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001591FE: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1768);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015920Au); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015920A: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015928D(); return; } /* jae: above or equal (unsigned >=) */

loc_00159215: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_0015928D(); return; } /* je: equal / zero */

loc_00159235: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015923Bu); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_0015923B: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0015925D; /* je: equal / zero */

loc_00159249: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159255u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_00159255: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    goto loc_00159274;

loc_0015925D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159262u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00159262: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015926Du); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015926D: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00159274: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015927Du); RECOMP_ABI_CALL(0x00159285u, sub_00159285); /* call 0x00159285 */

loc_0015927D: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_001592A3(); return; /* tail jmp 0x001592A3 */

}

/**
 * sub_00159285
 * Original: 0x00159285 - 0x0015928D (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159285(void)
{

loc_00159285: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0015928Bu); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_0015928B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015928D
 * Original: 0x0015928D - 0x001592A9 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015928D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015928D: ;
    PUSH32(esp, 0x00159292u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00159292: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x0015929Du); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_0015929D: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001592A8u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001592A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001592A3
 * Original: 0x001592A3 - 0x001592A9 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001592A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001592A3: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001592A8u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001592A8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001592A9
 * Original: 0x001592A9 - 0x0015930E (101 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001592A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001592A9: ;
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x001592B3u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_001592B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001592BC; /* jne: not equal / not zero */

loc_001592B8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_001592BC: ;
    MEM32(0xA9E320) = eax;
    MEM32(0xA9E300) = 0x20;
    ecx = eax + 0x500;
    goto loc_001592F1;

loc_001592D3: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(eax + 4) = 0;
    MEM8(eax + 5) = 0xA;
    ecx = MEM32(0xA9E320);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x500) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x500;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001592F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001592D3; /* jb: below (unsigned <) */

loc_001592F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001592F7: ;
    ecx = MEM32(0xA9E320);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78 (32-bit) */
    MEM8(ecx + 4) = 0xC1;
    if (CMP_L(_fas, _fbs)) goto loc_001592F7; /* jl: less (signed <) */

loc_0015930B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0015930E
 * Original: 0x0015930E - 0x00159331 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015930E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015930E: ;
    PUSH32(esp, esi);
    esi = 0xA9E320;

loc_00159314: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159324; /* je: equal / zero */

loc_0015931A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159320u); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_00159320: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00159324: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA9E420) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA9E420 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159314; /* jl: less (signed <) */

loc_0015932F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00159331
 * Original: 0x00159331 - 0x0015937E (77 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159331(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159331: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159340; /* jne: not equal / not zero */

loc_0015933F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159340: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFE0u (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00159368; /* ja: above (unsigned >) */

loc_00159347: ;
    _fa = (uint32_t)(MEM32(0xA9E420)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9E420), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159356; /* jne: not equal / not zero */

loc_00159350: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159356: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x0015935Eu); RECOMP_ABI_CALL(0x000B1796u, sub_000B1796); /* call 0x000B1796 */

loc_0015935E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159364u); RECOMP_ABI_CALL(0x000B300Cu, sub_000B300C); /* call 0x000B300C */

loc_00159364: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015937C; /* jne: not equal / not zero */

loc_00159368: ;
    _fa = (uint32_t)(MEM32(0x98B404)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x98B404), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015937C; /* je: equal / zero */

loc_00159371: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159377u); RECOMP_ABI_CALL(0x00157841u, sub_00157841); /* call 0x00157841 */

loc_00159377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00159340; /* jne: not equal / not zero */

loc_0015937C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015937E
 * Original: 0x0015937E - 0x001593F9 (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015937E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015937E: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1778);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015938Au); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015938A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -28) = edi;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159396u); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_00159396: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 3);
    POP32(esp, esi);

loc_0015939D: ;
    MEM32(ebp + -32) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E42C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0xA9E42C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001593E7; /* jge: greater or equal (signed >=) */

loc_001593A8: ;
    eax = MEM32(0xA9E428);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001593E4; /* je: equal / zero */

loc_001593B4: ;
    _fa = (uint32_t)(MEM8(eax + 0xC)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0xC), 0x83 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001593C9; /* je: equal / zero */

loc_001593BA: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593C0u); RECOMP_ABI_CALL(0x0015189Du, sub_0015189D); /* call 0x0015189D */

loc_001593C0: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001593C9; /* je: equal / zero */

loc_001593C6: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001593C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001593E4; /* jl: less (signed <) */

loc_001593CE: ;
    eax = MEM32(0xA9E428);
    PUSH32(esp, MEM32(eax + esi * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593DBu); RECOMP_ABI_CALL(0x00151794u, sub_00151794); /* call 0x00151794 */

loc_001593DB: ;
    POP32(esp, ecx);
    eax = MEM32(0xA9E428);
    MEM32(eax + esi * 4) = edi;

loc_001593E4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0015939D;

loc_001593E7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593F0u); RECOMP_ABI_CALL(0x001593F9u, sub_001593F9); /* call 0x001593F9 */

loc_001593F0: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001593F8u); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001593F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001593F9
 * Original: 0x001593F9 - 0x00159402 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001593F9(void)
{

loc_001593F9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00159400u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00159400: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00159402
 * Original: 0x00159402 - 0x0015944F (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159402(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159402: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x2B1788);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015940Eu); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015940E: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFE0u (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015941A; /* jbe: below or equal (unsigned <=) */

loc_00159416: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_00159477(); return; /* tail jmp 0x00159477 */

loc_0015941A: ;
    _fa = (uint32_t)(MEM32(0xA9E420)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0xA9E420), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015945B(); return; } /* jne: not equal / not zero */

loc_00159423: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015942Au); RECOMP_ABI_CALL(0x00156FF4u, sub_00156FF4); /* call 0x00156FF4 */

loc_0015942A: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015943Cu); RECOMP_ABI_CALL(0x00159452u, sub_00159452); /* call 0x00159452 */

loc_0015943C: ;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -32), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00159474(); return; } /* jne: not equal / not zero */

loc_00159442: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159447; /* jne: not equal / not zero */

loc_00159446: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159447: ;
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFF0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_00159460(); return; /* tail jmp 0x00159460 */

}

/**
 * sub_00159452
 * Original: 0x00159452 - 0x0015945B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159452(void)
{

loc_00159452: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x00159459u); RECOMP_ABI_CALL(0x00156F2Eu, sub_00156F2E); /* call 0x00156F2E */

loc_00159459: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0015945B
 * Original: 0x0015945B - 0x0015947D (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015945B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015945B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159460; /* jne: not equal / not zero */

loc_0015945F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159460: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0015946Bu); RECOMP_ABI_CALL(0x000B1796u, sub_000B1796); /* call 0x000B1796 */

loc_0015946B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159471u); RECOMP_ABI_CALL(0x000B43B8u, sub_000B43B8); /* call 0x000B43B8 */

loc_00159471: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015947Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015947C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00159460
 * Original: 0x00159460 - 0x00159477 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159460: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0015946Bu); RECOMP_ABI_CALL(0x000B1796u, sub_000B1796); /* call 0x000B1796 */

loc_0015946B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159471u); RECOMP_ABI_CALL(0x000B43B8u, sub_000B43B8); /* call 0x000B43B8 */

loc_00159471: ;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -28);

    g_seh_ebp = ebp; sub_00159477(); return; /* fallthrough 0x00159477 */

}

/**
 * sub_00159474
 * Original: 0x00159474 - 0x0015947D (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159474(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159474: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015947Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015947C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00159477
 * Original: 0x00159477 - 0x0015947D (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159477(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159477: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x0015947Cu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0015947C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0015947D
 * Original: 0x0015947D - 0x0015955E (225 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015947D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015947D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00159559; /* je: equal / zero */

loc_0015948D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00159559; /* jne: not equal / not zero */

loc_00159495: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001594A4; /* je: equal / zero */

loc_00159499: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    goto loc_00159559;

loc_001594A4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_001594B9; /* jne: not equal / not zero */

loc_001594B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001594B6u); RECOMP_ABI_CALL(0x0015B29Du, sub_0015B29D); /* call 0x0015B29D */

loc_001594B6: ;
    POP32(esp, ecx);
    goto loc_001594BE;

loc_001594B9: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_001594BE: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001594CCu); RECOMP_ABI_CALL(0x00159735u, sub_00159735); /* call 0x00159735 */

loc_001594CC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00159548; /* je: equal / zero */

loc_001594D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00159548; /* je: equal / zero */

loc_001594DB: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x82 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015951D; /* jne: not equal / not zero */

loc_001594E3: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00159503; /* je: equal / zero */

loc_001594EC: ;
    edi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((5) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(edi * 4 + 0xA9E320);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_00159508;

loc_00159503: ;
    edi = 0x2FD44C;

loc_00159508: ;
    SET_LO8(ecx, MEM8(edi + 4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x82);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x82 (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0015951D; /* jne: not equal / not zero */

loc_00159514: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = edx;

loc_0015951D: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x200 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015953A; /* jne: not equal / not zero */

loc_00159526: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0015953A; /* je: equal / zero */

loc_0015952E: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0015953A; /* jne: not equal / not zero */

loc_00159533: ;
    MEM32(esi + 0x18) = 0x1000;

loc_0015953A: ;
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00159548: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159559: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0015955E
 * Original: 0x0015955E - 0x00159735 (471 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0015955E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015955E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0015972E; /* je: equal / zero */

loc_0015957A: ;
    eax = MEM32(ebp + 8);
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax + eax * 4;
    edi = ecx * 4 + 0xA9E320;
    eax = MEM32(edi);
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0015972E; /* jne: not equal / not zero */

loc_001595A2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001595C9; /* je: equal / zero */

loc_001595A7: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001595C9; /* je: equal / zero */

loc_001595AD: ;
    eax = MEM32(edi);
    SET_LO8(eax, MEM8(eax + esi + 5));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebx) = LO8(eax);
    eax = MEM32(edi);
    edx = ebx + 1;
    MEM32(ebp + -8) = 1;
    MEM8(eax + esi + 5) = 0xA;

loc_001595C9: ;
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595DDu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_001595DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159619; /* jne: not equal / not zero */

loc_001595E1: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595E6u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001595E6: ;
    PUSH32(esp, 5);
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159601; /* jne: not equal / not zero */

loc_001595ED: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595F2u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_001595F2: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001595FDu); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_001595FD: ;
    MEM32(eax) = esi;
    goto loc_00159611;

loc_00159601: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6D (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015972E; /* je: equal / zero */

loc_0015960A: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159610u); RECOMP_ABI_CALL(0x00157F0Cu, sub_00157F0C); /* call 0x00157F0C */

loc_00159610: ;
    POP32(esp, ecx);

loc_00159611: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00159730;

loc_00159619: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + eax;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ecx + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + esi + 4), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159729; /* je: equal / zero */

loc_0015962C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159640; /* je: equal / zero */

loc_00159630: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159640; /* jne: not equal / not zero */

loc_00159635: ;
    eax = ecx;
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) | 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_00159649;

loc_00159640: ;
    eax = MEM32(edi);
    eax = eax + esi + 4;
    MEM8(eax) = MEM8(eax) & 0xFB;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_00159649: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00159723; /* jae: above or equal (unsigned >=) */

loc_0015965F: ;
    eax = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x1A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x1A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159713; /* je: equal / zero */

loc_0015966C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xD) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xD (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015967B; /* je: equal / zero */

loc_00159670: ;
    MEM8(ebx) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159705;

loc_0015967B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00159695; /* jae: above or equal (unsigned >=) */

loc_00159681: ;
    eax = MEM32(ebp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159690; /* jne: not equal / not zero */

loc_0015968A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001596E7;

loc_00159690: ;
    MEM32(ebp + 0x10) = eax;
    goto loc_00159701;

loc_00159695: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596AEu); RECOMP_ABI_CALL(0x000AA788u, sub_000AA788); /* call 0x000AA788 */

loc_001596AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001596BB; /* jne: not equal / not zero */

loc_001596B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596B7u); RECOMP_ABI_CALL(0x000ADC4Cu, sub_000ADC4C); /* call 0x000ADC4C */

loc_001596B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159701; /* jne: not equal / not zero */

loc_001596BB: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159701; /* je: equal / zero */

loc_001596C1: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x48 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001596DC; /* je: equal / zero */

loc_001596CA: ;
    SET_LO8(eax, MEM8(ebp + -1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001596E7; /* je: equal / zero */

loc_001596D1: ;
    MEM8(ebx) = 0xD;
    ecx = MEM32(edi);
    MEM8(ecx + esi + 5) = LO8(eax);
    goto loc_00159704;

loc_001596DC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001596EC; /* jne: not equal / not zero */

loc_001596E1: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001596EC; /* jne: not equal / not zero */

loc_001596E7: ;
    MEM8(ebx) = 0xA;
    goto loc_00159704;

loc_001596EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001596F8u); RECOMP_ABI_CALL(0x0015918Cu, sub_0015918C); /* call 0x0015918C */

loc_001596F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159705; /* je: equal / zero */

loc_00159701: ;
    MEM8(ebx) = 0xD;

loc_00159704: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159705: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0015965F; /* jb: below (unsigned <) */

loc_00159711: ;
    goto loc_00159723;

loc_00159713: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00159723; /* jne: not equal / not zero */

loc_0015971C: ;
    esi = eax + esi + 4;
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00159723: ;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = ebx;

loc_00159729: ;
    eax = MEM32(ebp + -8);
    goto loc_00159730;

loc_0015972E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00159730: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00159735
 * Original: 0x00159735 - 0x001597B9 (132 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159735(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159735: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x2B1798);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159741u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00159741: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0xA9E300)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(0xA9E300) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001597C4(); return; } /* jae: above or equal (unsigned >=) */

loc_0015974C: ;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax * 4 + 0xA9E320;
    eax = ebx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax + eax * 4;
    esi = esi << 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001597C4(); return; } /* je: equal / zero */

loc_0015976C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159772u); RECOMP_ABI_CALL(0x0015B643u, sub_0015B643); /* call 0x0015B643 */

loc_00159772: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM8(eax + esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + esi + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159794; /* je: equal / zero */

loc_00159780: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015978Cu); RECOMP_ABI_CALL(0x0015955Eu, sub_0015955E); /* call 0x0015955E */

loc_0015978C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    goto loc_001597AB;

loc_00159794: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159799u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_00159799: ;
    MEM32(eax) = 9;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001597A4u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_001597A4: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001597AB: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001597B4u); RECOMP_ABI_CALL(0x001597BCu, sub_001597BC); /* call 0x001597BC */

loc_001597B4: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_001597DA(); return; /* tail jmp 0x001597DA */

}

/**
 * sub_001597BC
 * Original: 0x001597BC - 0x001597C4 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597BC(void)
{

loc_001597BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001597C2u); RECOMP_ABI_CALL(0x0015B6E3u, sub_0015B6E3); /* call 0x0015B6E3 */

loc_001597C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001597C4
 * Original: 0x001597C4 - 0x001597E0 (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001597C4: ;
    PUSH32(esp, 0x001597C9u); RECOMP_ABI_CALL(0x00157EFAu, sub_00157EFA); /* call 0x00157EFA */

loc_001597C9: ;
    MEM32(eax) = 9;
    PUSH32(esp, 0x001597D4u); RECOMP_ABI_CALL(0x00157F03u, sub_00157F03); /* call 0x00157F03 */

loc_001597D4: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001597DFu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001597DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001597DA
 * Original: 0x001597DA - 0x001597E0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001597DA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x001597DFu); RECOMP_ABI_CALL(0x001525EFu, sub_001525EF); /* call 0x001525EF */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_001597DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001597E0
 * Original: 0x001597E0 - 0x00159868 (136 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001597E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x001597EDu); RECOMP_ABI_CALL(0x0015B2E1u, sub_0015B2E1); /* call 0x0015B2E1 */

loc_001597ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00159864; /* je: equal / zero */

loc_001597F2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCCF0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCCF0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001597FE; /* jne: not equal / not zero */

loc_001597FA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00159809;

loc_001597FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2FCD10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2FCD10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159864; /* jne: not equal / not zero */

loc_00159806: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159809: ;
    MEM32(0x98B22C) = MEM32(0x98B22C) + 1;
    _fa = (uint32_t)(MEM32(0x98B22C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi + 0xC), 0x10C (16-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00159864; /* jne: not equal / not zero */

loc_00159817: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax * 4 + 0x98B408;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    ebx = 0x1000;
    if (CMP_NE(_fa, _fb)) goto loc_0015984A; /* jne: not equal / not zero */

loc_0015982A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00159830u); RECOMP_ABI_CALL(0x0015183Fu, sub_0015183F); /* call 0x0015183F */

loc_00159830: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(edi) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0015984A; /* jne: not equal / not zero */

loc_00159837: ;
    eax = esi + 0x14;
    PUSH32(esp, 2);
    MEM32(esi + 8) = eax;
    MEM32(esi) = eax;
    POP32(esp, eax);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 4) = eax;
    goto loc_00159857;

loc_0015984A: ;
    edi = MEM32(edi);
    MEM32(esi + 8) = edi;
    MEM32(esi) = edi;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 4) = ebx;

loc_00159857: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) | 0x1102;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00159864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00159868
 * Original: 0x00159868 - 0x00159892 (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159868(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159868: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159891; /* je: equal / zero */

loc_0015986F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xD), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00159890; /* je: equal / zero */

loc_0015987A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159880u); RECOMP_ABI_CALL(0x001579A3u, sub_001579A3); /* call 0x001579A3 */

loc_00159880: ;
    MEM8(esi + 0xD) = MEM8(esi + 0xD) & 0xEE;
    _fa = (uint32_t)(MEM8(esi + 0xD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ecx);

loc_00159890: ;
    POP32(esp, esi);

loc_00159891: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00159892
 * Original: 0x00159892 - 0x001598C4 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159892(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159892: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001598AA; /* jle: less or equal (signed <=) */

loc_0015989E: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001598A6u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_001598A6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_001598B6;

loc_001598AA: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001598B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001598C0; /* jne: not equal / not zero */

loc_001598BA: ;
    esi = esi & 0xFFFFFFDFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001598C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001598C4
 * Original: 0x001598C4 - 0x001598DA (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001598C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001598C4: ;
    MEM32(edx + 4) = MEM32(edx + 4) - 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001598D2; /* js: sign (negative) */

loc_001598C9: ;
    ecx = MEM32(edx);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

loc_001598D2: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001598D8u); RECOMP_ABI_CALL(0x0015947Du, sub_0015947D); /* call 0x0015947D */

loc_001598D8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001598E7
 * Original: 0x001598E7 - 0x00159904 (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001598E7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001598E7: ;
    PUSH32(esp, edi);

loc_001598E8: ;
    edx = MEM32(esp + 8);
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001598F3u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_001598F3: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001598FBu); RECOMP_ABI_CALL(0x00153242u, sub_00153242); /* call 0x00153242 */

loc_001598FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_001598E8; /* jne: not equal / not zero */

loc_00159900: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00159904
 * Original: 0x00159904 - 0x0015992A (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159904(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159904: ;
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x2B17A8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00159913u); RECOMP_ABI_CALL(0x001525B4u, sub_001525B4); /* call 0x001525B4 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00159913: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -112) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -48) = eax;
    MEM8(ebp + -49) = LO8(eax);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -88) = eax;

    g_seh_ebp = ebp; sub_0015992A(); return; /* fallthrough 0x0015992A */

}

/**
 * sub_0015992A
 * Original: 0x0015992A - 0x0015992D (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015992A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015992A: ;
    edi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_0015992D(); return; /* fallthrough 0x0015992D */

}

/**
 * sub_0015992D
 * Original: 0x0015992D - 0x00159BB3 (646 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015992D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015992D: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_00159937: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015994F; /* jle: less or equal (signed <=) */

loc_00159943: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015994Bu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_0015994B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0015995C;

loc_0015994F: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0015995C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001599A4; /* je: equal / zero */

loc_00159962: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00159965: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00159970u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159970: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159978u); RECOMP_ABI_CALL(0x00153242u, sub_00153242); /* call 0x00153242 */

loc_00159978: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159965; /* jne: not equal / not zero */

loc_0015997D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015998D; /* je: equal / zero */

loc_00159982: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015998Bu); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_0015998B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0015998D: ;
    edi = MEM32(ebp + 0xC);

loc_00159990: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015999Au); RECOMP_ABI_CALL(0x00153242u, sub_00153242); /* call 0x00153242 */

loc_0015999A: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159990; /* jne: not equal / not zero */

loc_0015999F: ;
    MEM32(ebp + 0xC) = edi;
    goto loc_0015992D;

loc_001599A4: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3CD(); return; } /* jne: not equal / not zero */

loc_001599B0: ;
    MEM32(ebp + -64) = esi;
    MEM8(ebp + -89) = 0;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -40) = esi;
    MEM8(ebp + -73) = 0;
    MEM8(ebp + -51) = 0;
    MEM8(ebp + -41) = 0;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -50) = 0;
    MEM8(ebp + -33) = 0;
    MEM8(ebp + -42) = 1;
    MEM32(ebp + -104) = esi;

loc_001599DF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001599FB; /* jle: less or equal (signed <=) */

loc_001599EF: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001599F7u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_001599F7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00159A08;

loc_001599FB: ;
    ecx = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159A08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A1B; /* je: equal / zero */

loc_00159A0C: ;
    MEM32(ebp + -80) = MEM32(ebp + -80) + 1;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    esi = ebx + eax * 2 + -48;
    goto loc_00159AB5;

loc_00159A1B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4E (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00159A93; /* jg: greater (signed >) */

loc_00159A20: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A26: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A8E; /* je: equal / zero */

loc_00159A2B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x46 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x49 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A43; /* je: equal / zero */

loc_00159A39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159AA2; /* jne: not equal / not zero */

loc_00159A3E: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159AB5;

loc_00159A43: ;
    SET_LO8(ecx, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x36 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159A62; /* jne: not equal / not zero */

loc_00159A4B: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x34 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159A62; /* jne: not equal / not zero */

loc_00159A53: ;
    edi = eax;
    MEM32(ebp + -104) = MEM32(ebp + -104) + 1;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -68) = MEM32(ebp + -68) & 0;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00159AB5;

loc_00159A62: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x33 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159A73; /* jne: not equal / not zero */

loc_00159A67: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x32 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159A73; /* jne: not equal / not zero */

loc_00159A6F: ;
    edi = eax;
    goto loc_00159AB5;

loc_00159A73: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A78: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x69 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A7D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x6F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A82: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AB5; /* je: equal / zero */

loc_00159A87: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159AA2; /* jne: not equal / not zero */

loc_00159A8C: ;
    goto loc_00159AB5;

loc_00159A8E: ;
    MEM8(ebp + -41) = MEM8(ebp + -41) + 1;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159AB5;

loc_00159A93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AAF; /* je: equal / zero */

loc_00159A98: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AA7; /* je: equal / zero */

loc_00159A9D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x77 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AAA; /* je: equal / zero */

loc_00159AA2: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159AB5;

loc_00159AA7: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00159AAA: ;
    MEM8(ebp + -33) = MEM8(ebp + -33) + 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159AB5;

loc_00159AAF: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) - 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + -33) = MEM8(ebp + -33) - 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00159AB5: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001599DF; /* je: equal / zero */

loc_00159ABF: ;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159ADF; /* jne: not equal / not zero */

loc_00159ACB: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -124) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ebx = MEM32(eax + -4);
    MEM32(ebp + -84) = ebx;
    goto loc_00159AE2;

loc_00159ADF: ;
    ebx = MEM32(ebp + -84);

loc_00159AE2: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159AFE; /* jne: not equal / not zero */

loc_00159AEC: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159AFA; /* je: equal / zero */

loc_00159AF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    MEM8(ebp + -33) = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_00159AFE; /* jne: not equal / not zero */

loc_00159AFA: ;
    MEM8(ebp + -33) = 1;

loc_00159AFE: ;
    eax = ZX8(MEM8(edi));
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B39; /* je: equal / zero */

loc_00159B0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B9E; /* je: equal / zero */

loc_00159B15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B9E; /* je: equal / zero */

loc_00159B1E: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00159B29u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159B29: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159B31u); RECOMP_ABI_CALL(0x00153242u, sub_00153242); /* call 0x00153242 */

loc_00159B31: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159B1E; /* jne: not equal / not zero */

loc_00159B36: ;
    MEM32(ebp + -48) = esi;

loc_00159B39: ;
    esi = MEM32(ebp + 8);

loc_00159B3C: ;
    edx = MEM32(ebp + -80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159B4D; /* je: equal / zero */

loc_00159B43: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00159EDF(); return; } /* je: equal / zero */

loc_00159B4D: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6F (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_00159EAD(); return; } /* jg: greater (signed >) */

loc_00159B59: ;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A12A(); return; } /* je: equal / zero */

loc_00159B5F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00159DAD(); return; } /* je: equal / zero */

loc_00159B68: ;
    PUSH32(esp, 0x64);
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A12A(); return; } /* je: equal / zero */

loc_00159B73: ;
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00159ED7(); return; } /* jle: less or equal (signed <=) */

loc_00159B79: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x67 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_00159BC8(); return; } /* jle: less or equal (signed <=) */

loc_00159B7E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x69 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159BB0; /* je: equal / zero */

loc_00159B83: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00159ED7(); return; } /* jne: not equal / not zero */

loc_00159B8C: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3A1(); return; } /* je: equal / zero */

loc_00159B99: ;
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

loc_00159B9E: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    edx = esi;
    PUSH32(esp, 0x00159BABu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159BAB: ;
    MEM32(ebp + -48) = eax;
    goto loc_00159B3C;

loc_00159BB0: ;
    MEM32(ebp + -56) = eax;

    g_seh_ebp = ebp; sub_00159BB3(); return; /* fallthrough 0x00159BB3 */

}

/**
 * sub_00159BB3
 * Original: 0x00159BB3 - 0x00159BC8 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159BB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159BB3: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A016(); return; } /* jne: not equal / not zero */

loc_00159BBF: ;
    MEM8(ebp + -51) = 1;
    g_seh_ebp = ebp; sub_0015A01B(); return; /* tail jmp 0x0015A01B */

}

/**
 * sub_00159BC8
 * Original: 0x00159BC8 - 0x00159DAD (485 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159BC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159BC8: ;
    esi = ebp + -476;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159BE4; /* jne: not equal / not zero */

loc_00159BD6: ;
    MEM8(ebp + -476) = LO8(ebx);
    esi = ebp + -475;
    goto loc_00159BE9;

loc_00159BE4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159C00; /* jne: not equal / not zero */

loc_00159BE9: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x00159BF9u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159BF9: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00159C03;

loc_00159C00: ;
    edi = MEM32(ebp + 8);

loc_00159C03: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159C12; /* je: equal / zero */

loc_00159C09: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x15D (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159C19; /* jle: less or equal (signed <=) */

loc_00159C12: ;
    MEM32(ebp + -40) = 0x15D;

loc_00159C19: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159C2E; /* jle: less or equal (signed <=) */

loc_00159C22: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00159C2Au); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_00159C2A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00159C3A;

loc_00159C2E: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159C3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159C5F; /* je: equal / zero */

loc_00159C3E: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159C5F; /* je: equal / zero */

loc_00159C48: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00159C58u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159C58: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00159C19;

loc_00159C5F: ;
    _fa = (uint32_t)(MEM8(0x2FD3D4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x2FD3D4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159CCB; /* jne: not equal / not zero */

loc_00159C67: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159CCB; /* je: equal / zero */

loc_00159C71: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00159C7Bu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159C7B: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x2FD3D4));
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00159C85: ;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159C9D; /* jle: less or equal (signed <=) */

loc_00159C91: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00159C99u); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_00159C99: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00159CA9;

loc_00159C9D: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159CA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159CCB; /* je: equal / zero */

loc_00159CAD: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159CCB; /* je: equal / zero */

loc_00159CB7: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00159CC7u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159CC7: ;
    ebx = eax;
    goto loc_00159C85;

loc_00159CCB: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D64; /* je: equal / zero */

loc_00159CD5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x65 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159CE3; /* je: equal / zero */

loc_00159CDA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x45 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159D64; /* jne: not equal / not zero */

loc_00159CE3: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D64; /* je: equal / zero */

loc_00159CED: ;
    MEM8(esi) = 0x65;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00159CFBu); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159CFB: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159D0A; /* jne: not equal / not zero */

loc_00159D05: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159D0F;

loc_00159D0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159D2D; /* jne: not equal / not zero */

loc_00159D0F: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159D1E; /* jne: not equal / not zero */

loc_00159D19: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) & eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00159D2D;

loc_00159D1E: ;
    edx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00159D28u); RECOMP_ABI_CALL(0x001598C4u, sub_001598C4); /* call 0x001598C4 */

loc_00159D28: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00159D2D: ;
    _fa = (uint32_t)(MEM32(0x2FD3D0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x2FD3D0), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159D42; /* jle: less or equal (signed <=) */

loc_00159D36: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00159D3Eu); RECOMP_ABI_CALL(0x00158DD0u, sub_00158DD0); /* call 0x00158DD0 */

loc_00159D3E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00159D4E;

loc_00159D42: ;
    eax = MEM32(0x2FD3C0);
    eax = ZX8(MEM8(eax + ebx * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00159D4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D64; /* je: equal / zero */

loc_00159D52: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D64; /* je: equal / zero */

loc_00159D5C: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00159D1E;

loc_00159D64: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D75; /* je: equal / zero */

loc_00159D6C: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00159D73u); RECOMP_ABI_CALL(0x0015C013u, sub_0015C013); /* call 0x0015C013 */

loc_00159D73: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00159D75: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A451(); return; } /* je: equal / zero */

loc_00159D7F: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0015A3C1(); return; } /* jne: not equal / not zero */

loc_00159D89: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0;
    eax = ebp + -476;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -84));
    eax = (uint32_t)(int32_t)SMEM8(ebp + -42);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x2FCF58); PUSH32(esp, 0x00159DA5u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00159D9Fu); } /* indirect call */
    }

loc_00159DA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0015A3C1(); return; /* tail jmp 0x0015A3C1 */

}
