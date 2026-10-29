/**
 * DOAU1 - Recompiled code chunk 62
 * Functions: 250 (0x001B8DF3 - 0x001CF985)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001B8DF3
 * Original: 0x001B8DF3 - 0x001B8DFB (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8DF3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8DF3: ;
    ecx = ecx & 0xFFFFFF1Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001B8E04(); return; /* tail jmp 0x001B8E04 */

}

/**
 * sub_001B8DFB
 * Original: 0x001B8DFB - 0x001B8E04 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8DFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8DFB: ;
    ecx = ecx & 0xFFFFFF9Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

    g_seh_ebp = ebp; sub_001B8E04(); return; /* fallthrough 0x001B8E04 */

}

/**
 * sub_001B8E04
 * Original: 0x001B8E04 - 0x001B8E16 (18 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E04: ;
    MEM32(-25161472) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B8E12u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B8E12: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8E16
 * Original: 0x001B8E16 - 0x001B8E49 (51 bytes, 23 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8E16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8E16: ;
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
    PUSH32(esp, 0x001B8E27u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B8E27: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(-25157632);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8E63(); return; } /* je: equal / zero */

loc_001B8E35: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8E5B(); return; } /* je: equal / zero */

loc_001B8E38: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8E53(); return; } /* je: equal / zero */

loc_001B8E3B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8E4E(); return; } /* je: equal / zero */

loc_001B8E3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001B8E49(); return; } /* je: equal / zero */

loc_001B8E41: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001B8E66(); return; } /* jne: not equal / not zero */

loc_001B8E44: ;
    ecx = ecx & 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001B8E66(); return; /* tail jmp 0x001B8E66 */

}

/**
 * sub_001B8E49
 * Original: 0x001B8E49 - 0x001B8E4E (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E49(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E49: ;
    ecx = ecx | 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B8E66(); return; /* tail jmp 0x001B8E66 */

}

/**
 * sub_001B8E4E
 * Original: 0x001B8E4E - 0x001B8E53 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E4E: ;
    ecx = ecx | 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B8E66(); return; /* tail jmp 0x001B8E66 */

}

/**
 * sub_001B8E53
 * Original: 0x001B8E53 - 0x001B8E5B (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E53: ;
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B8E66(); return; /* tail jmp 0x001B8E66 */

}

/**
 * sub_001B8E5B
 * Original: 0x001B8E5B - 0x001B8E63 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E5B: ;
    ecx = ecx & 0xFFFFFFEFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; sub_001B8E66(); return; /* tail jmp 0x001B8E66 */

}

/**
 * sub_001B8E63
 * Original: 0x001B8E63 - 0x001B8E66 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E63: ;
    ecx = ecx & 0xFFFFFFE7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B8E66(); return; /* fallthrough 0x001B8E66 */

}

/**
 * sub_001B8E66
 * Original: 0x001B8E66 - 0x001B8E78 (18 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8E66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8E66: ;
    MEM32(-25157632) = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B8E74u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B8E74: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8E78
 * Original: 0x001B8E78 - 0x001B8EBF (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8E78(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8E78: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B8E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8E7Fu); } /* indirect call */
    }

loc_001B8E85: ;
    ecx = MEM32(ebp + 0x10);
    edx = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001B8E9B; /* je: equal / zero */

loc_001B8E99: ;
    MEM32(ecx) = eax;

loc_001B8E9B: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8EE8(); return; } /* je: equal / zero */

loc_001B8EA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x1000;
    esi = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8EDE(); return; } /* jae: above or equal (unsigned >=) */

loc_001B8EB1: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = esi + edx;
    MEM32(ebp + 8) = eax;
    g_seh_ebp = ebp; sub_001B8EC2(); return; /* tail jmp 0x001B8EC2 */

}

/**
 * sub_001B8EBF
 * Original: 0x001B8EBF - 0x001B8EC2 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8EBF: ;
    eax = MEM32(ebp + 8);

    g_seh_ebp = ebp; sub_001B8EC2(); return; /* fallthrough 0x001B8EC2 */

}

/**
 * sub_001B8EC2
 * Original: 0x001B8EC2 - 0x001B8EDE (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EC2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8EC2: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B8ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8EC5u); } /* indirect call */
    }

loc_001B8ECB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B8ED8; /* jne: not equal / not zero */

loc_001B8ECF: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8EBF(); return; } /* jb: below (unsigned <) */

loc_001B8ED8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    POP32(esp, ebx);
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8EE1(); return; } /* jb: below (unsigned <) */

    g_seh_ebp = ebp; sub_001B8EDE(); return; /* fallthrough 0x001B8EDE */

}

/**
 * sub_001B8EDE
 * Original: 0x001B8EDE - 0x001B8EE1 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EDE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8EDE: ;
    esi = MEM32(ebp + 0xC);

    g_seh_ebp = ebp; sub_001B8EE1(); return; /* fallthrough 0x001B8EE1 */

}

/**
 * sub_001B8EE1
 * Original: 0x001B8EE1 - 0x001B8EE8 (7 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8EE1: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);

    g_seh_ebp = ebp; sub_001B8EE8(); return; /* fallthrough 0x001B8EE8 */

}

/**
 * sub_001B8EE8
 * Original: 0x001B8EE8 - 0x001B8EEF (7 bytes, 3 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8EE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8EE8: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B8EEF
 * Original: 0x001B8EEF - 0x001B8F2C (61 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B8EEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8EEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B8F09u); RECOMP_ABI_CALL(0x001B8E78u, sub_001B8E78); /* call 0x001B8E78 */

loc_001B8F09: ;
    edx = MEM32(esi);
    ecx = 0x1000;
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B8F19; /* jb: below (unsigned <) */

loc_001B8F17: ;
    ecx = edx;

loc_001B8F19: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ecx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esi) = MEM32(esi) - ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001B8F28; /* je: equal / zero */

loc_001B8F26: ;
    MEM32(edx) = ecx;

loc_001B8F28: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B8F2C
 * Original: 0x001B8F2C - 0x001B8F6B (63 bytes, 22 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F2C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B8F2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0x001B8F44u); RECOMP_ABI_CALL(0x001AEAACu, sub_001AEAAC); /* call 0x001AEAAC */

loc_001B8F44: ;
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
    MEM32(edi) = eax;
    if ((_fas < 0)) goto loc_001B8F64; /* js: sign (negative) */

loc_001B8F5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B8F61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8F5Bu); } /* indirect call */
    }

loc_001B8F61: ;
    MEM32(edi + 4) = eax;

loc_001B8F64: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B8F6B
 * Original: 0x001B8F6B - 0x001B8F87 (28 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8F6B: ;
    _fa = (uint32_t)(MEM8(0x1CED08)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x1CED08), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B8F87(); return; } /* jne: not equal / not zero */

loc_001B8F74: ;
    MEM32(0x1CED08) = MEM32(0x1CED08) | 1;
    _fa = (uint32_t)(MEM32(0x1CED08)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0x800;
    MEM32(0x1CE430) = eax;
    g_seh_ebp = ebp; sub_001B8F8C(); return; /* tail jmp 0x001B8F8C */

}

/**
 * sub_001B8F87
 * Original: 0x001B8F87 - 0x001B8F8C (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F87(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B8F87: ;
    eax = MEM32(0x1CE430);

    g_seh_ebp = ebp; sub_001B8F8C(); return; /* fallthrough 0x001B8F8C */

}

/**
 * sub_001B8F8C
 * Original: 0x001B8F8C - 0x001B8FE5 (89 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8F8C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8F8C: ;
    MEM32(0xFE802008u) = eax;
    MEM32(-25157620) = 0;
    MEM32(0xFE802010u) = eax;
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(-25157612) = ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0xFE802018u) = eax;
    MEM32(-25157604) = 0;
    ecx = 0x600;
    MEM32(-25157600) = ecx;
    eax = 0x100;
    MEM32(0xFE802024u) = eax;
    MEM32(0xFE802028u) = eax;
    MEM32(-25149396) = ecx;
    MEM32(-25149380) = 0x3800;
    esp += 4; return; /* ret */

}

/**
 * sub_001B8FE5
 * Original: 0x001B8FE5 - 0x001B8FFA (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8FE5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8FE5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B8FF4; /* je: equal / zero */

loc_001B8FEE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001B8FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B8FF1u); } /* indirect call */
    }

loc_001B8FF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B8FFA
 * Original: 0x001B8FFA - 0x001B900F (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B8FFA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B8FFA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9009; /* je: equal / zero */

loc_001B9003: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001B9009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9006u); } /* indirect call */
    }

loc_001B9009: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B900F
 * Original: 0x001B900F - 0x001B903B (44 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B900F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B900F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001B9018u); RECOMP_ABI_CALL(0x001B89B1u, sub_001B89B1); /* call 0x001B89B1 */

loc_001B9018: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9036; /* jl: less (signed <) */

loc_001B901E: ;
    ecx = edi;
    PUSH32(esp, 0x001B9025u); RECOMP_ABI_CALL(0x001B8AF0u, sub_001B8AF0); /* call 0x001B8AF0 */

loc_001B9025: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B9036; /* jl: less (signed <) */

loc_001B902B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x2710);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001B9036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9030u); } /* indirect call */
    }

loc_001B9036: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B903B
 * Original: 0x001B903B - 0x001B905E (35 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B903B(void)
{

loc_001B903B: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14;
    MEM32(esi) = 0x2820A0;
    PUSH32(esp, 0x001B904Cu); RECOMP_ABI_CALL(0x001B9682u, sub_001B9682); /* call 0x001B9682 */

loc_001B904C: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001B9055u); RECOMP_ABI_CALL(0x001B8FE5u, sub_001B8FE5); /* call 0x001B8FE5 */

loc_001B9055: ;
    MEM32(esi + 4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B905E
 * Original: 0x001B905E - 0x001B909C (62 bytes, 24 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B905E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B905E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi) = 0x2820A0;
    if (CMP_EQ(_fa, _fb)) goto loc_001B9082; /* je: equal / zero */

loc_001B9072: ;
    ecx = edi;
    PUSH32(esp, 0x001B9079u); RECOMP_ABI_CALL(0x001B1549u, sub_001B1549); /* call 0x001B1549 */

loc_001B9079: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B907Fu); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B907F: ;
    MEM32(esi + 0xC) = ebp;

loc_001B9082: ;
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9099; /* je: equal / zero */

loc_001B9089: ;
    ecx = edi;
    PUSH32(esp, 0x001B9090u); RECOMP_ABI_CALL(0x001BA29Eu, sub_001BA29E); /* call 0x001BA29E */

loc_001B9090: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001B9096u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B9096: ;
    MEM32(esi + 0x10) = ebp;

loc_001B9099: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

    g_seh_ebp = ebp; sub_001B909C(); return; /* fallthrough 0x001B909C */

}

/**
 * sub_001B909C
 * Original: 0x001B909C - 0x001B90BA (30 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B909C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B909C: ;
    _fa = (uint32_t)(MEM32(edi + 0x1CEC14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1CEC14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B90BA(); return; } /* je: equal / zero */

loc_001B90A4: ;
    ebx = edi + 0x1CEC08;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B90C0(); return; } /* je: equal / zero */

loc_001B90B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B90B6u); RECOMP_ABI_CALL(0x001AEAFBu, sub_001AEAFB); /* call 0x001AEAFB */

loc_001B90B6: ;
    MEM32(ebx) = ebp;
    g_seh_ebp = ebp; sub_001B90C0(); return; /* tail jmp 0x001B90C0 */

}

/**
 * sub_001B90BA
 * Original: 0x001B90BA - 0x001B90C0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B90BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B90BA: ;
    MEM32(edi + 0x1CEC08) = ebp;

    g_seh_ebp = ebp; sub_001B90C0(); return; /* fallthrough 0x001B90C0 */

}

/**
 * sub_001B90C0
 * Original: 0x001B90C0 - 0x001B9103 (67 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B90C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B90C0: ;
    MEM32(edi + 0x1CEC0C) = ebp;
    MEM32(edi + 0x1CEC10) = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x100 (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B909C(); return; } /* jb: below (unsigned <) */

loc_001B90D7: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001B90E8; /* je: equal / zero */

loc_001B90DF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B90E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B90E2u); } /* indirect call */
    }

loc_001B90E5: ;
    MEM32(esi + 4) = ebp;

loc_001B90E8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B90F8; /* je: equal / zero */

loc_001B90EF: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 8); PUSH32(esp, 0x001B90F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B90F2u); } /* indirect call */
    }

loc_001B90F5: ;
    MEM32(esi + 8) = ebp;

loc_001B90F8: ;
    POP32(esp, edi);
    ecx = esi + 0x14;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001B9F86(); return; /* tail jmp 0x001B9F86 */

}

/**
 * sub_001B9103
 * Original: 0x001B9103 - 0x001B91D0 (205 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9103(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9103: ;
    MEM32(-25161724) = 0xD8;
    MEM32(-25161472) = 0x88;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(-25157632) = edx;
    MEM32(-25160448) = edx;
    MEM32(-25160444) = 0x8000;
    PUSH32(esp, esi);
    MEM32(-25160440) = 0x800040;
    MEM32(-25160436) = edx;
    esi = ecx;
    PUSH32(esp, 0x001B9147u); RECOMP_ABI_CALL(0x001B8F6Bu, sub_001B8F6B); /* call 0x001B8F6B */

loc_001B9147: ;
    MEM32(-25161468) = 0xFF;
    MEM32(-25161464) = 0x3F;
    MEM32(-25161444) = 0x7F;
    MEM32(-25161436) = 0x1FFF;
    MEM32(-25161416) = 0x7FF;
    MEM32(-25161384) = 0x20;
    MEM32(-25161428) = edx;
    eax = 0x8000000;
    MEM32(0xFE801130u) = eax;
    MEM32(-25161408) = edx;
    MEM32(0xFE801144u) = eax;
    MEM32(-25161392) = edx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(0xFE801154u) = eax;
    PUSH32(esp, 0x001B91B1u); RECOMP_ABI_CALL(0x001B8D84u, sub_001B8D84); /* call 0x001B8D84 */

loc_001B91B1: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B91BAu); RECOMP_ABI_CALL(0x001B8DBBu, sub_001B8DBB); /* call 0x001B8DBB */

loc_001B91BA: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x001B91C3u); RECOMP_ABI_CALL(0x001B8DBBu, sub_001B8DBB); /* call 0x001B8DBB */

loc_001B91C3: ;
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x001B91CCu); RECOMP_ABI_CALL(0x001B8E16u, sub_001B8E16); /* call 0x001B8E16 */

loc_001B91CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B91D0
 * Original: 0x001B91D0 - 0x001B92B0 (224 bytes, 68 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B91D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B91D0: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x2000;
    ecx = 0x1000;
    PUSH32(esp, edi);
    MEM32(ebp + 0x70) = ebx;
    MEM32(ebp + 0x74) = esi;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -12) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B91FA: ;
    _fb = (uint32_t)(MEM32(esi + 0x1CE428)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1CE428);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B91FA; /* jb: below (unsigned <) */

loc_001B9208: ;
    MEM32(ebp + -8) = eax;
    esi = 0x8000;
    PUSH32(esp, 4);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = esi;
    esi = 0x4000;
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp) = edi;
    MEM32(ebp + 4) = ecx;
    MEM32(ebp + 0x10) = 0x4020;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + 0x18) = esi;
    MEM32(ebp + 0x1C) = esi;
    MEM32(ebp + 0x20) = 0x10000;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x28) = edx;
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x38) = 0x10;
    MEM32(ebp + 0x3C) = esi;
    MEM32(ebp + 0x40) = eax;
    MEM32(ebp + 0x44) = esi;
    MEM32(ebp + 0x48) = ecx;
    MEM32(ebp + 0x4C) = esi;
    MEM32(ebp + 0x50) = 0xC000;
    MEM32(ebp + 0x54) = esi;
    MEM32(ebp + 0x58) = 0x1060;
    MEM32(ebp + 0x5C) = esi;
    PUSH32(esp, 0x001B9282u); RECOMP_ABI_CALL(0x001BA0C0u, sub_001BA0C0); /* call 0x001BA0C0 */

loc_001B9282: ;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x60) = eax;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(0x1CEAA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0x64) = esi;
    MEM32(ebp + 0x6C) = esi;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B92B0(); return; } /* je: equal / zero */

loc_001B92A5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B92ABu); RECOMP_ABI_CALL(0x001B8FFAu, sub_001B8FFA); /* call 0x001B8FFA */

loc_001B92AB: ;
    MEM32(ebx + 8) = eax;
    g_seh_ebp = ebp; sub_001B92E1(); return; /* tail jmp 0x001B92E1 */

}

/**
 * sub_001B92B0
 * Original: 0x001B92B0 - 0x001B92CB (27 bytes, 9 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B92B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x626F5344);
    PUSH32(esp, 0x001B92BEu); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B92BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B92CB(); return; } /* je: equal / zero */

loc_001B92C2: ;
    ecx = eax;
    PUSH32(esp, 0x001B92C9u); RECOMP_ABI_CALL(0x001B3B9Eu, sub_001B3B9E); /* call 0x001B3B9E */

loc_001B92C9: ;
    g_seh_ebp = ebp; sub_001B92CD(); return; /* tail jmp 0x001B92CD */

}

/**
 * sub_001B92CB
 * Original: 0x001B92CB - 0x001B92CD (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B92CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B92CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B92CD(); return; /* fallthrough 0x001B92CD */

}

/**
 * sub_001B92CD
 * Original: 0x001B92CD - 0x001B92E1 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B92CD: ;
    MEM32(ebx + 8) = eax;
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
    MEM32(ebp + 0x74) = eax;

    g_seh_ebp = ebp; sub_001B92E1(); return; /* fallthrough 0x001B92E1 */

}

/**
 * sub_001B92E1
 * Original: 0x001B92E1 - 0x001B9350 (111 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B92E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B92E1: ;
    edi = ebp + -12;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B92E6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001B9345; /* jl: less (signed <) */

loc_001B92EC: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(edi));
    ebx = esi + 0x1CEC08;
    PUSH32(esp, ebx);
    MEM32(esi + 0x1CEC10) = eax;
    PUSH32(esp, 0x001B9305u); RECOMP_ABI_CALL(0x001B8F2Cu, sub_001B8F2C); /* call 0x001B8F2C */

loc_001B9305: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp + 0x74) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001B9337; /* jl: less (signed <) */

loc_001B930C: ;
    eax = MEM32(esi + 0x1CEC10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFF)) >> 32) & 1);
    eax = eax + 0xFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (0xC) _cf = (int)(((eax) >> ((0xC) - 1)) & 1);
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (0xC) _cf = (int)(((eax) >> (32 - (0xC))) & 1);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x70);
    PUSH32(esp, MEM32(ebx));
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0x001B932Cu); RECOMP_ABI_CALL(0x001B3C24u, sub_001B3C24); /* call 0x001B3C24 */

loc_001B932C: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1CEC14) = eax;

loc_001B9337: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(8)) >> 32) & 1);
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001B92E6; /* jb: below (unsigned <) */

loc_001B9345: ;
    eax = MEM32(ebp + 0x74);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x78)) >> 32) & 1);
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9350
 * Original: 0x001B9350 - 0x001B93D6 (134 bytes, 37 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9350: ;
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
    PUSH32(esp, edi);
    ecx = ebp + -16;
    ebx = 0x29B;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9371u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9371: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9404(); return; } /* je: equal / zero */

loc_001B937A: ;
    _fa = (uint32_t)(MEM8(-25161472)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-25161472), 0xE0 (8-bit) */
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B941B(); return; } /* jne: not equal / not zero */

loc_001B938A: ;
    _fa = (uint32_t)(MEM32(-25157632)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(-25157632), 0x18 (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B941B(); return; } /* je: equal / zero */

loc_001B939A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = edi;

loc_001B93A0: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B93A0; /* jb: below (unsigned <) */

loc_001B93AD: ;
    MEM32(-25034484) = esi;
    eax = MEM32(0x1CEC48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B93FB(); return; } /* je: equal / zero */

loc_001B93BC: ;
    ecx = ebp + -8;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B93CAu); RECOMP_ABI_CALL(0x001B401Du, sub_001B401D); /* call 0x001B401D */

loc_001B93CA: ;
    MEM32(-25034492) = 2;
    g_seh_ebp = ebp; sub_001B93E4(); return; /* tail jmp 0x001B93E4 */

}

/**
 * sub_001B93D6
 * Original: 0x001B93D6 - 0x001B93E4 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B93D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B93D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001B93DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B93D7u); } /* indirect call */
    }

loc_001B93DD: ;
    eax = ebx;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B93F1(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001B93E4(); return; /* fallthrough 0x001B93E4 */

}

/**
 * sub_001B93E4
 * Original: 0x001B93E4 - 0x001B93F1 (13 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B93E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B93E4: ;
    ecx = ebp + -8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B93EDu); RECOMP_ABI_CALL(0x001B24EEu, sub_001B24EE); /* call 0x001B24EE */

loc_001B93ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B93D6(); return; } /* je: equal / zero */

    g_seh_ebp = ebp; sub_001B93F1(); return; /* fallthrough 0x001B93F1 */

}

/**
 * sub_001B93F1
 * Original: 0x001B93F1 - 0x001B93FB (10 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B93F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B93F1: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B93F9u); RECOMP_ABI_CALL(0x001B401Du, sub_001B401D); /* call 0x001B401D */

loc_001B93F9: ;
    g_seh_ebp = ebp; sub_001B941B(); return; /* tail jmp 0x001B941B */

}

/**
 * sub_001B93FB
 * Original: 0x001B93FB - 0x001B9404 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B93FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B93FB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001B9402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B93FCu); } /* indirect call */
    }

loc_001B9402: ;
    g_seh_ebp = ebp; sub_001B941B(); return; /* tail jmp 0x001B941B */

}

/**
 * sub_001B9404
 * Original: 0x001B9404 - 0x001B941B (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9404(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9404: ;
    eax = MEM32(0xFE820010u);
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B9404; /* jb: below (unsigned <) */

loc_001B9411: ;
    MEM32(-25034484) = 1;

    g_seh_ebp = ebp; sub_001B941B(); return; /* fallthrough 0x001B941B */

}

/**
 * sub_001B941B
 * Original: 0x001B941B - 0x001B942D (18 bytes, 8 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B941B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B941B: ;
    ecx = ebp + -16;
    PUSH32(esp, 0x001B9423u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9423: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B942D
 * Original: 0x001B942D - 0x001B9448 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B942D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B942D: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B9435u); RECOMP_ABI_CALL(0x001B905Eu, sub_001B905E); /* call 0x001B905E */

loc_001B9435: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9442; /* je: equal / zero */

loc_001B943C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B9442u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B9442: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9448
 * Original: 0x001B9448 - 0x001B94C5 (125 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9448(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9448: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x001B9452u); RECOMP_ABI_CALL(0x001B9350u, sub_001B9350); /* call 0x001B9350 */

loc_001B9452: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B945Bu); RECOMP_ABI_CALL(0x001B8D4Du, sub_001B8D4D); /* call 0x001B8D4D */

loc_001B945B: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B9464u); RECOMP_ABI_CALL(0x001B8D84u, sub_001B8D84); /* call 0x001B8D84 */

loc_001B9464: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B946Du); RECOMP_ABI_CALL(0x001B8DBBu, sub_001B8DBB); /* call 0x001B8DBB */

loc_001B946D: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x001B9476u); RECOMP_ABI_CALL(0x001B8E16u, sub_001B8E16); /* call 0x001B8E16 */

loc_001B9476: ;
    eax = 0xFFFF;
    MEM32(0xFE802054u) = eax;
    MEM32(0xFE802060u) = eax;
    MEM32(0xFE80206Cu) = eax;
    MEM32(0xFE802058u) = eax;
    MEM32(0xFE802064u) = eax;
    MEM32(0xFE802070u) = eax;
    MEM32(0xFE80205Cu) = eax;
    MEM32(0xFE802068u) = eax;
    MEM32(0xFE802074u) = eax;
    MEM32(-24903684) = 0;
    ecx = esi + 0x14;
    MEM32(-24772612) = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001B9F08(); return; /* tail jmp 0x001B9F08 */

}

/**
 * sub_001B94C5
 * Original: 0x001B94C5 - 0x001B9531 (108 bytes, 42 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B94C5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B94C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001B94CEu); RECOMP_ABI_CALL(0x001B9448u, sub_001B9448); /* call 0x001B9448 */

loc_001B94CE: ;
    ecx = esi;
    PUSH32(esp, 0x001B94D5u); RECOMP_ABI_CALL(0x001B91D0u, sub_001B91D0); /* call 0x001B91D0 */

loc_001B94D5: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B952C; /* jl: less (signed <) */

loc_001B94DB: ;
    ecx = esi;
    PUSH32(esp, 0x001B94E2u); RECOMP_ABI_CALL(0x001B9103u, sub_001B9103); /* call 0x001B9103 */

loc_001B94E2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B952C; /* jl: less (signed <) */

loc_001B94E8: ;
    ecx = esi;
    PUSH32(esp, 0x001B94EFu); RECOMP_ABI_CALL(0x001B88DEu, sub_001B88DE); /* call 0x001B88DE */

loc_001B94EF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B952C; /* jl: less (signed <) */

loc_001B94F5: ;
    ecx = esi;
    PUSH32(esp, 0x001B94FCu); RECOMP_ABI_CALL(0x001B8C94u, sub_001B8C94); /* call 0x001B8C94 */

loc_001B94FC: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B952C; /* jl: less (signed <) */

loc_001B9502: ;
    ecx = esi;
    PUSH32(esp, 0x001B9509u); RECOMP_ABI_CALL(0x001B900Fu, sub_001B900F); /* call 0x001B900F */

loc_001B9509: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001B952C; /* jl: less (signed <) */

loc_001B950F: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x001B9518u); RECOMP_ABI_CALL(0x001B8E16u, sub_001B8E16); /* call 0x001B8E16 */

loc_001B9518: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001B9522u); RECOMP_ABI_CALL(0x001B9B86u, sub_001B9B86); /* call 0x001B9B86 */

loc_001B9522: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001B952Cu); RECOMP_ABI_CALL(0x001B9B86u, sub_001B9B86); /* call 0x001B9B86 */

loc_001B952C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9682
 * Original: 0x001B9682 - 0x001B968A (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9682(void)
{

loc_001B9682: ;
    eax = ecx;
    MEM32(0x1CEAB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001B968A
 * Original: 0x001B968A - 0x001B9696 (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B968A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B968A: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x3E8;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_001B96A5(); return; /* tail jmp 0x001B96A5 */

}

/**
 * sub_001B9696
 * Original: 0x001B9696 - 0x001B96A5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9696(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9696: ;
    eax = esi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B96B0(); return; } /* je: equal / zero */

loc_001B969D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001B96A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B969Fu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B96A5(); return; /* fallthrough 0x001B96A5 */

}

/**
 * sub_001B96A5
 * Original: 0x001B96A5 - 0x001B96B0 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96A5: ;
    _fa = (uint32_t)(MEM8(-20971212)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(-20971212), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9696(); return; } /* jne: not equal / not zero */

loc_001B96AE: ;
    g_seh_ebp = ebp; sub_001B96B2(); return; /* tail jmp 0x001B96B2 */

}

/**
 * sub_001B96B0
 * Original: 0x001B96B0 - 0x001B96B2 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96B0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B96B2(); return; /* fallthrough 0x001B96B2 */

}

/**
 * sub_001B96B2
 * Original: 0x001B96B2 - 0x001B96B7 (5 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96B2(void)
{

loc_001B96B2: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B96B7
 * Original: 0x001B96B7 - 0x001B96E6 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96B7: ;
    eax = MEM32(0xFEC0012Cu);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x3E8;
    if (TEST_NZ(_fa, _fb)) goto loc_001B96D3; /* jne: not equal / not zero */

loc_001B96CB: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0xFEC0012Cu) = eax;

loc_001B96D3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B96DF; /* je: equal / zero */

loc_001B96D7: ;
    eax = eax & 0xFFFFFFF3u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0xFEC0012Cu) = eax;

loc_001B96DF: ;
    esi = 0x100;
    g_seh_ebp = ebp; sub_001B96F5(); return; /* tail jmp 0x001B96F5 */

}

/**
 * sub_001B96E6
 * Original: 0x001B96E6 - 0x001B96F5 (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96E6: ;
    eax = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B96FF(); return; } /* je: equal / zero */

loc_001B96ED: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(0x22BCF0); PUSH32(esp, 0x001B96F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B96EFu); } /* indirect call */
    }

    g_seh_ebp = ebp; sub_001B96F5(); return; /* fallthrough 0x001B96F5 */

}

/**
 * sub_001B96F5
 * Original: 0x001B96F5 - 0x001B96FF (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96F5: ;
    _fa = (uint32_t)(MEM32(-20971216)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(-20971216), esi (32-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B96E6(); return; } /* je: equal / zero */

loc_001B96FD: ;
    g_seh_ebp = ebp; sub_001B9701(); return; /* tail jmp 0x001B9701 */

}

/**
 * sub_001B96FF
 * Original: 0x001B96FF - 0x001B9701 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B96FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B96FF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B9701(); return; /* fallthrough 0x001B9701 */

}

/**
 * sub_001B9701
 * Original: 0x001B9701 - 0x001B9707 (6 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9701(void)
{

loc_001B9701: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9710
 * Original: 0x001B9710 - 0x001B9724 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9710: ;
    PUSH32(esp, 2);
    eax = ecx + 0x38;
    POP32(esp, ecx);

loc_001B9716: ;
    SET_LO8(edx, MEM8(eax));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 1) = MEM8(eax + 1) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B9716; /* jne: not equal / not zero */

loc_001B9723: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001B9724
 * Original: 0x001B9724 - 0x001B975B (55 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B9724(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9724: ;
    PUSH32(esp, 0x001B9729u); RECOMP_ABI_CALL(0x001B968Au, sub_001B968A); /* call 0x001B968A */

loc_001B9729: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9758; /* je: equal / zero */

loc_001B972D: ;
    ecx = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(ecx + ecx + -20971520));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    ecx = MEM32(-20971216);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001B9758; /* jns: not sign (positive) */

loc_001B974A: ;
    ecx = ecx & 0xFFFF7FFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(-20971216) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B9758: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B975B
 * Original: 0x001B975B - 0x001B9778 (29 bytes, 7 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B975B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B975B: ;
    PUSH32(esp, 0x001B9760u); RECOMP_ABI_CALL(0x001B968Au, sub_001B968A); /* call 0x001B968A */

loc_001B9760: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9775; /* je: equal / zero */

loc_001B9764: ;
    SET_LO16(ecx, MEM16(esp + 8));
    edx = MEM32(esp + 4);
    MEM16(edx * 2 + -20971520) = LO16(ecx);

loc_001B9775: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B9778
 * Original: 0x001B9778 - 0x001B97A9 (49 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9778(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9778: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9788u); RECOMP_ABI_CALL(0x001B975Bu, sub_001B975B); /* call 0x001B975B */

loc_001B9788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B97A4; /* je: equal / zero */

loc_001B978C: ;
    eax = ebp + 0xA;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9798u); RECOMP_ABI_CALL(0x001B9724u, sub_001B9724); /* call 0x001B9724 */

loc_001B9798: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B97A4; /* je: equal / zero */

loc_001B979C: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0xA)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ebp + 0xA) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B97A4; /* je: equal / zero */

loc_001B97A2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B97A4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B97A9
 * Original: 0x001B97A9 - 0x001B97C1 (24 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B97A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B97A9: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x001B97B4u); RECOMP_ABI_CALL(0x001B975Bu, sub_001B975B); /* call 0x001B975B */

loc_001B97B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B97BD; /* jne: not equal / not zero */

loc_001B97B8: ;
    esi = 0x80004005u;

loc_001B97BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001B97DA
 * Original: 0x001B97DA - 0x001B9809 (47 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B97DA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B97DA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B97EEu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B97EE: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9806u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9806: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9809
 * Original: 0x001B9809 - 0x001B983C (51 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9809(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9809: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B981Eu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B981E: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9854(); return; } /* je: equal / zero */

loc_001B9824: ;
    SET_LO8(ebx, MEM8(ebp + 8));
    SET_LO8(ecx, LO8(ebx));
    _fb = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + MEM8(ebp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_001B983C(); return; } /* je: equal / zero */

loc_001B9834: ;
    SET_LO8(ebx, LO8(ebx) & 0x1F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_001B9858(); return; /* tail jmp 0x001B9858 */

}

/**
 * sub_001B983C
 * Original: 0x001B983C - 0x001B9854 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B983C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B983C: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebp + 0xC));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = ZX8(LO8(ecx));
    SET_LO8(ebx, LO8(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    SET_LO8(ecx, LO8(edx));
    g_seh_ebp = ebp; sub_001B9858(); return; /* tail jmp 0x001B9858 */

}

/**
 * sub_001B9854
 * Original: 0x001B9854 - 0x001B9858 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9854(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9854: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B9858(); return; /* fallthrough 0x001B9858 */

}

/**
 * sub_001B9858
 * Original: 0x001B9858 - 0x001B9899 (65 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9858: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B986D; /* je: equal / zero */

loc_001B985E: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    MEM8(eax + -20971260) = LO8(ebx);

loc_001B986D: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9882; /* je: equal / zero */

loc_001B9873: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    MEM8(eax + -20971259) = LO8(ecx);

loc_001B9882: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    ecx = ebp + -8;
    MEM8(esi + 0x25) = LO8(ebx);
    MEM8(esi + 0x24) = LO8(eax);
    PUSH32(esp, 0x001B9893u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9893: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B9899
 * Original: 0x001B9899 - 0x001B98CA (49 bytes, 19 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9899(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9899: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B98ADu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B98AD: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B98BD; /* jne: not equal / not zero */

loc_001B98B2: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x28) = eax;
    MEM32(0xFEC0017Cu) = eax;

loc_001B98BD: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B98C5u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B98C5: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B98CA
 * Original: 0x001B98CA - 0x001B98DB (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B98CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B98CA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x24)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x24), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9941(); return; } /* je: equal / zero */

loc_001B98D3: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0xFFFF;

    g_seh_ebp = ebp; sub_001B98DB(); return; /* fallthrough 0x001B98DB */

}

/**
 * sub_001B98DB
 * Original: 0x001B98DB - 0x001B990C (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B98DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B98DB: ;
    eax = MEM32(ecx);
    eax = MEM32(eax * 4 + 0x1CE450);
    edi = edx;
    SET_LO8(edx, MEM8(ecx + 0x25));
    _fa = (uint32_t)(MEM8(eax + -20971260)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -20971260), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9910(); return; } /* jne: not equal / not zero */

loc_001B98F1: ;
    ebx = MEM32(ecx + 0x18);
    eax = ZX16(MEM16(eax + -20971256));
    edx = ZX8(LO8(edx));
    edx = MEM32(ebx + edx * 8 + 4);
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) { g_seh_ebp = ebp; sub_001B990C(); return; } /* ja: above (unsigned >) */

loc_001B9908: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_001B991C(); return; /* tail jmp 0x001B991C */

}

/**
 * sub_001B990C
 * Original: 0x001B990C - 0x001B9910 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B990C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B990C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001B991C(); return; /* tail jmp 0x001B991C */

}

/**
 * sub_001B9910
 * Original: 0x001B9910 - 0x001B991C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9910: ;
    eax = ZX8(LO8(edx));
    edx = MEM32(ecx + 0x18);
    edx = MEM32(edx + eax * 8 + 4);
    edx = edx & esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_001B991C(); return; /* fallthrough 0x001B991C */

}

/**
 * sub_001B991C
 * Original: 0x001B991C - 0x001B9931 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B991C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B991C: ;
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9931(); return; } /* je: equal / zero */

loc_001B9923: ;
    eax = ZX8(MEM8(XBOX_FS_BASE + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B98DB(); return; } /* jb: below (unsigned <) */

loc_001B992F: ;
    g_seh_ebp = ebp; sub_001B9944(); return; /* tail jmp 0x001B9944 */

}

/**
 * sub_001B9931
 * Original: 0x001B9931 - 0x001B993D (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9931(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9931: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_001B993D(); return; } /* jb: below (unsigned <) */

loc_001B9938: ;
    MEM32(ecx + 0x2C) = edx;
    g_seh_ebp = ebp; sub_001B9944(); return; /* tail jmp 0x001B9944 */

}

/**
 * sub_001B993D
 * Original: 0x001B993D - 0x001B9941 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B993D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B993D: ;
    edx = eax;
    g_seh_ebp = ebp; sub_001B9944(); return; /* tail jmp 0x001B9944 */

}

/**
 * sub_001B9941
 * Original: 0x001B9941 - 0x001B994B (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9941(void)
{

loc_001B9941: ;
    edx = MEM32(ecx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9944
 * Original: 0x001B9944 - 0x001B994B (7 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9944(void)
{

loc_001B9944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B994B
 * Original: 0x001B994B - 0x001B9979 (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B994B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B994B: ;
    eax = ZX8(MEM8(ecx + 0x25));
    edx = MEM32(ecx + 0x18);
    SET_LO16(eax, MEM16(edx + eax * 8 + 4));
    edx = MEM32(ecx);
    edx = MEM32(edx * 4 + 0x1CE450);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = esi >> 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - LO16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(edx + -20971256) = LO16(eax);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9979
 * Original: 0x001B9979 - 0x001B9987 (14 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9979(void)
{

loc_001B9979: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x001B9982u); RECOMP_ABI_CALL(0x001B9710u, sub_001B9710); /* call 0x001B9710 */

loc_001B9982: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9987
 * Original: 0x001B9987 - 0x001B99BE (55 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9987(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9987: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B999Bu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B999B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x626F5344);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B99A9u); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001B99A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001B99BE(); return; } /* je: equal / zero */

loc_001B99B0: ;
    MEM32(eax) = ecx;
    MEM32(eax + 0x28) = 0x2000000;
    MEM32(eax + 8) = esi;
    g_seh_ebp = ebp; sub_001B99C0(); return; /* tail jmp 0x001B99C0 */

}

/**
 * sub_001B99BE
 * Original: 0x001B99BE - 0x001B99C0 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001B99BE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B99BE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001B99C0(); return; /* fallthrough 0x001B99C0 */

}

/**
 * sub_001B99C0
 * Original: 0x001B99C0 - 0x001B99EF (47 bytes, 17 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B99C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B99C0: ;
    MEM32(esi + ecx * 4) = eax;
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
    if ((_fas < 0)) goto loc_001B99E0; /* js: sign (negative) */

loc_001B99D7: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001B99E0; /* je: equal / zero */

loc_001B99DE: ;
    MEM32(ecx) = eax;

loc_001B99E0: ;
    ecx = ebp + -8;
    PUSH32(esp, 0x001B99E8u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B99E8: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B99EF
 * Original: 0x001B99EF - 0x001B9A80 (145 bytes, 52 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B99EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B99EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9A03u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9A03: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9A13; /* je: equal / zero */

loc_001B9A0A: ;
    eax = eax & 0xFFFFFFFDu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 0x24) = MEM8(esi + 0x24) - 1;
    _fa = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;

loc_001B9A13: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    _fb = (uint32_t)(MEM8(esi + 0x24)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ebp + 8);
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ZX8(LO8(eax));
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx) = edx;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0xC);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM16(edx + eax + 4) = LO16(ecx);
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM16(ecx + 2) = MEM16(ecx + 2) & 0xC000;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x18);
    ecx = ecx + eax + 4;
    MEM8(ecx + 3) = MEM8(ecx + 3) | 0x40;
    _fa = (uint32_t)(MEM8(ecx + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(esi + 0x18);
    eax = ecx + eax + 4;
    MEM8(eax + 3) = MEM8(eax + 3) | 0x80;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9A73u); RECOMP_ABI_CALL(0x001B9809u, sub_001B9809); /* call 0x001B9809 */

loc_001B9A73: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9A7Bu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9A7B: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B9A80
 * Original: 0x001B9A80 - 0x001B9AC6 (70 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9A96u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9A96: ;
    edi = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001B9AB7; /* je: equal / zero */

loc_001B9AA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9AB1u); RECOMP_ABI_CALL(0x001B99EFu, sub_001B99EF); /* call 0x001B99EF */

loc_001B9AB1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + esi;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B9AA6; /* jne: not equal / not zero */

loc_001B9AB7: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9ABFu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9ABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B9AC6
 * Original: 0x001B9AC6 - 0x001B9B38 (114 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9AC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9AC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9ADAu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9ADA: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    MEM8(eax + -20971253) = 2;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    SET_LO8(ecx, MEM8(eax + -20971253));
    SET_LO8(ecx, LO8(ecx) & 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_001B9AFC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9AFC; /* jne: not equal / not zero */

loc_001B9B00: ;
    ecx = MEM32(esi + 0x1C);
    MEM32(eax + -20971264) = ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9B16; /* jne: not equal / not zero */

loc_001B9B0E: ;
    eax = MEM32(esi + 0x28);
    MEM32(0xFEC0017Cu) = eax;

loc_001B9B16: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x24));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B2Du); RECOMP_ABI_CALL(0x001B9809u, sub_001B9809); /* call 0x001B9809 */

loc_001B9B2D: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B35u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9B35: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9B38
 * Original: 0x001B9B38 - 0x001B9B86 (78 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9B38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9B38: ;
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
    PUSH32(esp, 0x001B9B4Eu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9B4E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B55u); RECOMP_ABI_CALL(0x001B97DAu, sub_001B97DA); /* call 0x001B97DA */

loc_001B9B55: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B5Cu); RECOMP_ABI_CALL(0x001B9AC6u, sub_001B9AC6); /* call 0x001B9AC6 */

loc_001B9B5C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B69u); RECOMP_ABI_CALL(0x001B9809u, sub_001B9809); /* call 0x001B9809 */

loc_001B9B69: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9B78; /* je: equal / zero */

loc_001B9B72: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x2C) = edi;

loc_001B9B78: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B80u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9B80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9B86
 * Original: 0x001B9B86 - 0x001B9BE0 (90 bytes, 28 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9B86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9B86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9B9Au); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9B9A: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    _fa = (uint32_t)(MEM8(eax + -20971258)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + -20971258), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9BB3; /* je: equal / zero */

loc_001B9BAC: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9BB3u); RECOMP_ABI_CALL(0x001B9AC6u, sub_001B9AC6); /* call 0x001B9AC6 */

loc_001B9BB3: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9BC3; /* je: equal / zero */

loc_001B9BB9: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9BC3u); RECOMP_ABI_CALL(0x001B994Bu, sub_001B994B); /* call 0x001B994B */

loc_001B9BC3: ;
    eax = MEM32(esi);
    eax = MEM32(eax * 4 + 0x1CE450);
    ecx = ebp + -8;
    MEM8(eax + -20971253) = 0x1D;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9BDBu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9BDB: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9BE0
 * Original: 0x001B9BE0 - 0x001B9C82 (162 bytes, 58 insns)
 * Category: game_audio
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001B9BE0: ;
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
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9BF6u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9BF6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 1);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x100);
    MEM32(esi + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C1Bu); RECOMP_ABI_CALL(0x001AEAACu, sub_001AEAAC); /* call 0x001AEAAC */

loc_001B9C1B: ;
    edi = eax;
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(0u - (uint32_t)(edi));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FF8FFF2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = 0x8007000Eu;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ebx)) >> 32) & 1);
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    if ((_fas < 0)) goto loc_001B9C71; /* js: sign (negative) */

loc_001B9C33: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BD1C); PUSH32(esp, 0x001B9C3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9C34u); } /* indirect call */
    }

loc_001B9C3A: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 8), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001B9C66; /* je: equal / zero */

loc_001B9C43: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, 0x1000);
    PUSH32(esp, 0x2000);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C56u); RECOMP_ABI_CALL(0x001AEAACu, sub_001AEAAC); /* call 0x001AEAAC */

loc_001B9C56: ;
    MEM32(esi + 0x20) = eax;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(0u - (uint32_t)(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FF8FFF2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_001B9C66: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_001B9C71; /* jl: less (signed <) */

loc_001B9C6A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C71u); RECOMP_ABI_CALL(0x001B9AC6u, sub_001B9AC6); /* call 0x001B9AC6 */

loc_001B9C71: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C79u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9C79: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001B9C82
 * Original: 0x001B9C82 - 0x001B9CD0 (78 bytes, 30 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9C82(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9C82: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C96u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9C96: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9C9Fu); RECOMP_ABI_CALL(0x001B9B38u, sub_001B9B38); /* call 0x001B9B38 */

loc_001B9C9F: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9CB0; /* je: equal / zero */

loc_001B9CA6: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9CACu); RECOMP_ABI_CALL(0x001AEAFBu, sub_001AEAFB); /* call 0x001AEAFB */

loc_001B9CAC: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B9CB0: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9CC1; /* je: equal / zero */

loc_001B9CB7: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9CBDu); RECOMP_ABI_CALL(0x001AEAFBu, sub_001AEAFB); /* call 0x001AEAFB */

loc_001B9CBD: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B9CC1: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9CCDu); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9CCD: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9CD0
 * Original: 0x001B9CD0 - 0x001B9D08 (56 bytes, 21 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9CE4u); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9CE4: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9CFD; /* jne: not equal / not zero */

loc_001B9CEA: ;
    PUSH32(esp, 0x2000);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9CF9u); RECOMP_ABI_CALL(0x001B7D5Du, sub_001B7D5D); /* call 0x001B7D5D */

loc_001B9CF9: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 2;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001B9CFD: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9D05u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9D05: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9D08
 * Original: 0x001B9D08 - 0x001B9D5F (87 bytes, 38 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9D08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9D08: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x24));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D53; /* je: equal / zero */

loc_001B9D15: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    edx = ZX8(LO8(eax));
    edx = MEM32(edi + edx * 8 + 4);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 1 (8-bit) */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001B9D3B; /* je: equal / zero */

loc_001B9D34: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001B9D56; /* jbe: below or equal (unsigned <=) */

loc_001B9D39: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_001B9D3B: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001B9D47u); RECOMP_ABI_CALL(0x001B9809u, sub_001B9809); /* call 0x001B9809 */

loc_001B9D47: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9D53; /* je: equal / zero */

loc_001B9D4E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001B9D53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9D51u); } /* indirect call */
    }

loc_001B9D53: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001B9D56: ;
    ecx = esi;
    PUSH32(esp, 0x001B9D5Du); RECOMP_ABI_CALL(0x001B9B38u, sub_001B9B38); /* call 0x001B9B38 */

loc_001B9D5D: ;
    goto loc_001B9D47;

}

/**
 * sub_001B9D5F
 * Original: 0x001B9D5F - 0x001B9E33 (212 bytes, 72 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9D5F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(-20971216);
    ecx = ecx & 0x51;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -16) = ecx;
    if ((_fa == 0)) goto loc_001B9E29; /* je: equal / zero */

loc_001B9D7A: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = 0x1CE45C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - esi;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x80000000u;
    edi = esi;
    ebx = esi + 0x38;

loc_001B9D96: ;
    eax = MEM32(ebp + -12);
    _fa = (uint32_t)(MEM32(eax + edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edi), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9DF1; /* je: equal / zero */

loc_001B9D9E: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9DF1; /* je: equal / zero */

loc_001B9DA4: ;
    edx = MEM32(eax);
    edx = MEM32(edx * 4 + 0x1CE450);
    edx = ZX16(MEM16(edx + -20971258));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    MEM32(ebp + -20) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001B9DDB; /* je: equal / zero */

loc_001B9DBC: ;
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9DD6; /* je: equal / zero */

loc_001B9DCD: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9DD4u); RECOMP_ABI_CALL(0x001B9D08u, sub_001B9D08); /* call 0x001B9D08 */

loc_001B9DD4: ;
    goto loc_001B9DD8;

loc_001B9DD6: ;
    MEM8(ebx) = MEM8(ebx) + 1;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_001B9DD8: ;
    ecx = MEM32(ebp + -16);

loc_001B9DDB: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    eax = MEM32(eax * 4 + 0x1CE450);
    SET_LO16(edx, MEM16(ebp + -20));
    MEM16(eax + -20971258) = LO16(edx);

loc_001B9DF1: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B9D96; /* jb: below (unsigned <) */

loc_001B9DFF: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001B9E1E; /* jne: not equal / not zero */

loc_001B9E07: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -4), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9E1E; /* je: equal / zero */

loc_001B9E0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD24); PUSH32(esp, 0x001B9E1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9E15u); } /* indirect call */
    }

loc_001B9E1B: ;
    ecx = MEM32(ebp + -16);

loc_001B9E1E: ;
    ecx = ecx & 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(-20971216) = ecx;
    goto loc_001B9E2D;

loc_001B9E29: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B9E2D: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9E33
 * Original: 0x001B9E33 - 0x001B9E8C (89 bytes, 39 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9E33: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;

loc_001B9E3A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1B9979);
    PUSH32(esp, 0x1CEAB8);
    { uint32_t _icall_target = MEM32(0x22BD5C); PUSH32(esp, 0x001B9E4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9E45u); } /* indirect call */
    }

loc_001B9E4B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp;
    esi = ebp + 0x39;
    MEM32(esp + 0x10) = 2;

loc_001B9E5A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9E77; /* je: equal / zero */

loc_001B9E5F: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9E74; /* je: equal / zero */

loc_001B9E67: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0x001B9E6Eu); RECOMP_ABI_CALL(0x001B9D08u, sub_001B9D08); /* call 0x001B9D08 */

loc_001B9E6E: ;
    MEM8(esi) = MEM8(esi) - 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B9E67; /* jne: not equal / not zero */

loc_001B9E72: ;
    goto loc_001B9E77;

loc_001B9E74: ;
    MEM8(esi) = 0;

loc_001B9E77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001B9E5A; /* jne: not equal / not zero */

loc_001B9E82: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9E3A; /* jne: not equal / not zero */

loc_001B9E86: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001B9E91
 * Original: 0x001B9E91 - 0x001B9EA2 (17 bytes, 5 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9E91(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9E91: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001B9E9Au); RECOMP_ABI_CALL(0x001B9D5Fu, sub_001B9D5F); /* call 0x001B9D5F */

loc_001B9E9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001B9EA2
 * Original: 0x001B9EA2 - 0x001B9EAE (12 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9EA2(void)
{

loc_001B9EA2: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x001B9EABu); RECOMP_ABI_CALL(0x001B9E33u, sub_001B9E33); /* call 0x001B9E33 */

loc_001B9EAB: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001B9EAE
 * Original: 0x001B9EAE - 0x001B9EC9 (27 bytes, 10 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9EAE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9EAE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001B9EB6u); RECOMP_ABI_CALL(0x001B9C82u, sub_001B9C82); /* call 0x001B9C82 */

loc_001B9EB6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001B9EC3; /* je: equal / zero */

loc_001B9EBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001B9EC3u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B9EC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9EC9
 * Original: 0x001B9EC9 - 0x001B9F08 (63 bytes, 26 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9EC9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9EC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9EDEu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9EDE: ;
    eax = MEM32(ebp + 8);
    esi = esi + eax * 4;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9EFA; /* je: equal / zero */

loc_001B9EEA: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9EF1u); RECOMP_ABI_CALL(0x001B9C82u, sub_001B9C82); /* call 0x001B9C82 */

loc_001B9EF1: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9EF7u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001B9EF7: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001B9EFA: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9F02u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9F02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9F08
 * Original: 0x001B9F08 - 0x001B9F77 (111 bytes, 43 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9F08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F08: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9F1Eu); RECOMP_ABI_CALL(0x001A8A29u, sub_001A8A29); /* call 0x001A8A29 */

loc_001B9F1E: ;
    _fa = (uint32_t)(MEM32(0x1CEAB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x1CEAB8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F37; /* je: equal / zero */

loc_001B9F26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1CEAB8);
    { uint32_t _icall_target = MEM32(0x22BD40); PUSH32(esp, 0x001B9F31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9F2Bu); } /* indirect call */
    }

loc_001B9F31: ;
    MEM32(0x1CEAB8) = ebx;

loc_001B9F37: ;
    PUSH32(esp, esi);
    esi = edi + 0x1C;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0x13 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001B9F4B; /* jne: not equal / not zero */

loc_001B9F41: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BD58); PUSH32(esp, 0x001B9F48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9F42u); } /* indirect call */
    }

loc_001B9F48: ;
    MEM16(esi) = ~MEM16(esi);

loc_001B9F4B: ;
    esi = edi + 0xC;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001B9F5C; /* je: equal / zero */

loc_001B9F52: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x001B9F5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9F54u); } /* indirect call */
    }

loc_001B9F5A: ;
    MEM32(esi) = ebx;

loc_001B9F5C: ;
    POP32(esp, esi);

loc_001B9F5D: ;
    PUSH32(esp, ebx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9F65u); RECOMP_ABI_CALL(0x001B9EC9u, sub_001B9EC9); /* call 0x001B9EC9 */

loc_001B9F65: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001B9F5D; /* jb: below (unsigned <) */

loc_001B9F6B: ;
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9F73u); RECOMP_ABI_CALL(0x001A8A4Bu, sub_001A8A4B); /* call 0x001A8A4B */

loc_001B9F73: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9F77
 * Original: 0x001B9F77 - 0x001B9F86 (15 bytes, 4 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9F77(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F77: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001B9F83u); RECOMP_ABI_CALL(0x001B9F08u, sub_001B9F08); /* call 0x001B9F08 */

loc_001B9F83: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001B9F86
 * Original: 0x001B9F86 - 0x001B9F93 (13 bytes, 3 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9F86(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F86: ;
    PUSH32(esp, 0x001B9F8Bu); RECOMP_ABI_CALL(0x001B9F08u, sub_001B9F08); /* call 0x001B9F08 */

loc_001B9F8B: ;
    MEM32(0x1CEAB0) = MEM32(0x1CEAB0) & 0;
    _fa = (uint32_t)(MEM32(0x1CEAB0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001B9F93
 * Original: 0x001B9F93 - 0x001B9FB3 (32 bytes, 12 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001B9F93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001B9F93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001B9FA5u); RECOMP_ABI_CALL(0x001B96B7u, sub_001B96B7); /* call 0x001B96B7 */

loc_001B9FA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001B9FB3(); return; } /* jne: not equal / not zero */

loc_001B9FA9: ;
    ebx = 0x88780078u;
    g_seh_ebp = ebp; sub_001BA06A(); return; /* tail jmp 0x001BA06A */

}

/**
 * sub_001B9FB3
 * Original: 0x001B9FB3 - 0x001BA072 (191 bytes, 67 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001B9FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001B9FB3: ;
    ecx = edi;
    PUSH32(esp, 0x001B9FBAu); RECOMP_ABI_CALL(0x001B97A9u, sub_001B97A9); /* call 0x001B97A9 */

loc_001B9FBA: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BA06A; /* jl: less (signed <) */

loc_001B9FC4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001B9FC6: ;
    ecx = MEM32(eax + 0x1CE450);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    MEM8(ecx + -20971253) = 2;
    if (CMP_B(_fa, _fb)) goto loc_001B9FC6; /* jb: below (unsigned <) */

loc_001B9FDB: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001B9FF1; /* jne: not equal / not zero */

loc_001B9FE1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B9EA2);
    eax = edi + 0x1C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BC68); PUSH32(esp, 0x001B9FF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9FEBu); } /* indirect call */
    }

loc_001B9FF1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    { uint32_t _icall_target = MEM32(0x22BCE0); PUSH32(esp, 0x001B9FFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001B9FF8u); } /* indirect call */
    }

loc_001B9FFE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    esi = 0x1CEAB8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1B9E91);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCEC); PUSH32(esp, 0x001BA018u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BA012u); } /* indirect call */
    }

loc_001BA018: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCE8); PUSH32(esp, 0x001BA01Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BA019u); } /* indirect call */
    }

loc_001BA01F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = 0x80004005u;
    if (CMP_NE(_fa, _fb)) goto loc_001BA02A; /* jne: not equal / not zero */

loc_001BA028: ;
    ebx = esi;

loc_001BA02A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BA069; /* jl: less (signed <) */

loc_001BA02E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001BA037u); RECOMP_ABI_CALL(0x001B975Bu, sub_001B975B); /* call 0x001B975B */

loc_001BA037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA03D; /* jne: not equal / not zero */

loc_001BA03B: ;
    ebx = esi;

loc_001BA03D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BA069; /* jl: less (signed <) */

loc_001BA041: ;
    PUSH32(esp, 0x808);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x001BA04Du); RECOMP_ABI_CALL(0x001B975Bu, sub_001B975B); /* call 0x001B975B */

loc_001BA04D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001BA053; /* jne: not equal / not zero */

loc_001BA051: ;
    ebx = esi;

loc_001BA053: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001BA069; /* jl: less (signed <) */

loc_001BA057: ;
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(eax) = 0x1B9F77;
    { uint32_t _icall_target = MEM32(0x22BCC0); PUSH32(esp, 0x001BA069u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001BA063u); } /* indirect call */
    }

loc_001BA069: ;
    POP32(esp, esi);

loc_001BA06A: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BA06A
 * Original: 0x001BA06A - 0x001BA072 (8 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA06A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA06A: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BA0AA
 * Original: 0x001BA0AA - 0x001BA0B0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0AA(void)
{

loc_001BA0AA: ;
    eax = 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA0B0
 * Original: 0x001BA0B0 - 0x001BA0B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0B0(void)
{

loc_001BA0B0: ;
    eax = 0x300;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA0BA
 * Original: 0x001BA0BA - 0x001BA0C0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0BA(void)
{

loc_001BA0BA: ;
    eax = 0x2000;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA0C0
 * Original: 0x001BA0C0 - 0x001BA0C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA0C0(void)
{

loc_001BA0C0: ;
    eax = 0xF458;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA105
 * Original: 0x001BA105 - 0x001BA10B (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA105(void)
{

loc_001BA105: ;
    eax = 0xAA5580;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA10B
 * Original: 0x001BA10B - 0x001BA132 (39 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BA10B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA10B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA193(); return; } /* je: equal / zero */

loc_001BA117: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA17F(); return; } /* je: equal / zero */

loc_001BA11A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA16B(); return; } /* je: equal / zero */

loc_001BA11D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA157(); return; } /* je: equal / zero */

loc_001BA120: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA143(); return; } /* je: equal / zero */

loc_001BA123: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0xC);
    if ((_fa == 0)) { g_seh_ebp = ebp; sub_001BA132(); return; } /* je: equal / zero */

loc_001BA129: ;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA132
 * Original: 0x001BA132 - 0x001BA143 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA132(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA132: ;
    MEM32(eax) = 0xAA5258;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xC9;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA143
 * Original: 0x001BA143 - 0x001BA157 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA143(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA143: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xAA4F68;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xBC;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA157
 * Original: 0x001BA157 - 0x001BA16B (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA157(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA157: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xAA3418;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x6D3;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA16B
 * Original: 0x001BA16B - 0x001BA17F (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA16B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA16B: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xAA1AD0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x652;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA17F
 * Original: 0x001BA17F - 0x001BA193 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA17F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA17F: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xA9F948;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x862;
    g_seh_ebp = ebp; sub_001BA1A5(); return; /* tail jmp 0x001BA1A5 */

}

/**
 * sub_001BA193
 * Original: 0x001BA193 - 0x001BA1A5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA193(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA193: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0xA9ED80;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x2F2;

    g_seh_ebp = ebp; sub_001BA1A5(); return; /* fallthrough 0x001BA1A5 */

}

/**
 * sub_001BA1A5
 * Original: 0x001BA1A5 - 0x001BA1A9 (4 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA1A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA1A5: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001BA1A9
 * Original: 0x001BA1A9 - 0x001BA1B6 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA1A9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA1A9: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001BA1B6
 * Original: 0x001BA1B6 - 0x001BA1BA (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA1B6(void)
{

loc_001BA1B6: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001BA1BA
 * Original: 0x001BA1BA - 0x001BA231 (119 bytes, 41 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BA1BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA1BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 0x438) = eax;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    MEM32(eax + 0x43C) = 0x600;
    edx = MEM32(ecx);
    eax = ebp + -44;
    MEM32(ebp + 8) = 3;

loc_001BA1F4: ;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -4) = ebx;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = 0x1000;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001BA1F4; /* jne: not equal / not zero */

loc_001BA21D: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 3);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001BA22Bu); RECOMP_ABI_CALL(0x001B151Eu, sub_001B151E); /* call 0x001B151E */

loc_001BA22B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001BA231
 * Original: 0x001BA231 - 0x001BA259 (40 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA231(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA231: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x440) = edx;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x444) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BA259
 * Original: 0x001BA259 - 0x001BA29E (69 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA259(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA259: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x448) = edx;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx + 0x460) = eax;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    MEM32(edx + 0x468) = eax;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x44C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001BA29E
 * Original: 0x001BA29E - 0x001BA2BB (29 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA29E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA29E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001BA2B8; /* je: equal / zero */

loc_001BA2A8: ;
    ecx = edi;
    PUSH32(esp, 0x001BA2AFu); RECOMP_ABI_CALL(0x001B836Cu, sub_001B836C); /* call 0x001B836C */

loc_001BA2AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001BA2B5u); RECOMP_ABI_CALL(0x001AEB7Bu, sub_001AEB7B); /* call 0x001AEB7B */

loc_001BA2B5: ;
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001BA2B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001BA2BB
 * Original: 0x001BA2BB - 0x001BA2EF (52 bytes, 20 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001BA2BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001BA2BB: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x626F5344);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001BA2DFu); RECOMP_ABI_CALL(0x001AEB13u, sub_001AEB13); /* call 0x001AEB13 */

loc_001BA2DF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001BA2EF(); return; } /* je: equal / zero */

loc_001BA2E5: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x001BA2EDu); RECOMP_ABI_CALL(0x001B8352u, sub_001B8352); /* call 0x001B8352 */

loc_001BA2ED: ;
    g_seh_ebp = ebp; sub_001BA2F1(); return; /* tail jmp 0x001BA2F1 */

}

/**
 * sub_001BA2EF
 * Original: 0x001BA2EF - 0x001BA2F1 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001BA2EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA2EF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001BA2F1(); return; /* fallthrough 0x001BA2F1 */

}

/**
 * sub_001BA2F1
 * Original: 0x001BA2F1 - 0x001BA3ED (252 bytes, 80 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001BA2F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001BA2F1: ;
    PUSH32(esp, ebx);
    ecx = eax;
    MEM32(esi) = eax;
    PUSH32(esp, 0x001BA2FBu); RECOMP_ABI_CALL(0x001B839Au, sub_001B839A); /* call 0x001B839A */

loc_001BA2FB: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x320);
    PUSH32(esp, 0xA9E460);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BA30Du); RECOMP_ABI_CALL(0x001B849Fu, sub_001B849F); /* call 0x001B849F */

loc_001BA30D: ;
    ecx = MEM32(esi);
    eax = 0xA9E780;
    PUSH32(esp, 0x5FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x600);
    MEM32(ebp + 0x70) = eax;
    MEM32(ebp + 0x7C) = 0x17F;
    PUSH32(esp, 0x001BA32Eu); RECOMP_ABI_CALL(0x001B849Fu, sub_001B849F); /* call 0x001B849F */

loc_001BA32E: ;
    MEM32(ebp + -32) = 0x24;
    MEM32(ebp + -28) = 6;
    edi = 0x300;

loc_001BA341: ;
    eax = ebp + 0x7C;
    PUSH32(esp, eax);
    eax = ebp + 0x70;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001BA34Fu); RECOMP_ABI_CALL(0x001BA10Bu, sub_001BA10B); /* call 0x001BA10B */

loc_001BA34F: ;
    eax = MEM32(ebp + 0x7C);
    ecx = MEM32(esi);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = edi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001BA366u); RECOMP_ABI_CALL(0x001B849Fu, sub_001B849F); /* call 0x001B849F */

loc_001BA366: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + ebx * 8 + -24) = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + ebx * 8 + -20) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001BA341; /* jb: below (unsigned <) */

loc_001BA379: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x60);
    ebx = edi;
    PUSH32(esp, 0xAA5580);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x30) = edi;
    MEM32(ebp + 0x34) = 0x18;
    PUSH32(esp, 0x001BA397u); RECOMP_ABI_CALL(0x001B849Fu, sub_001B849F); /* call 0x001B849F */

loc_001BA397: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x38) = eax;
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0x44) = eax;
    MEM32(ebp + 0x4C) = eax;
    PUSH32(esp, 0x90);
    eax = ebp + -32;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x400);
    MEM32(ebp + 0x68) = edi;
    MEM32(ebp + 0x6C) = 0x2000;
    PUSH32(esp, 0x001BA3D1u); RECOMP_ABI_CALL(0x001B849Fu, sub_001B849F); /* call 0x001B849F */

loc_001BA3D1: ;
    eax = MEM32(0x1CECF0);
    _fb = (uint32_t)(0xFFFFD000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFD000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001BA3E3u); RECOMP_ABI_CALL(0x001BA1BAu, sub_001BA1BA); /* call 0x001BA1BA */

loc_001BA3E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x74;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001C0010
 * Original: 0x001C0010 - 0x001C0013 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C0010: ;
    SET_LO8(ecx, 0x99);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */

    g_seh_ebp = ebp; sub_001C0013(); return; /* fallthrough 0x001C0013 */

}

/**
 * sub_001C0013
 * Original: 0x001C0013 - 0x001C0016 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C0013(void)
{

loc_001C0013: ;
    SET_LO8(eax, 0xA8);
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }

}

/**
 * sub_001C001A
 * Original: 0x001C001A - 0x001C001B (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C001A(void)
{

loc_001C001A: ;
    RECOMP_UNIMPL("daa", 0x001C001Au); /* TODO: daa */

}

/**
 * sub_001C001C
 * Original: 0x001C001C - 0x001C002B (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C001C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001C001C: ;
    { uint32_t _tmp = MEM32(eax + 0x2C06000B);
    MEM32(eax + 0x2C06000B) = edx;
    edx = _tmp; }
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), HI8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(edx)) < (uint32_t)(HI8(ecx)));
    MEM8(edx) = MEM8(edx) - HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(esp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edi)) < (uint32_t)(esp));
    MEM32(edi) = MEM32(edi) - esp;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(MEM8(ebx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, 0 /* seg:es */);

}

/**
 * sub_001C002C
 * Original: 0x001C002C - 0x001C0137 (267 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C002C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C002C: ;
    { uint64_t _t = (uint64_t)(MEM8(0x3061317)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(0x3061317) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(0x3061317)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + eax))) >> 32) & 1);
    eax = eax + MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    MEM8(0x150F0A0E) = MEM8(0x150F0A0E) | LO8(ecx);
    _fa = (uint32_t)(MEM8(0x150F0A0E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ebx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, esp);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x85434321u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(0x85434321u)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + 0x85434321u;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(ecx + -125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2262783u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xA2262783u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, 0x93);
    RECOMP_UNIMPL("popfd", 0x001C0052u); /* TODO: popfd */
    SET_LO8(ecx, 0xA7);
    MEM16(ebx) = 0 /* seg:es */;
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    _fb = (uint32_t)(0xE90891B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(edx)) < (uint32_t)(0xE90891B));
    MEM32(edx) = MEM32(edx) - 0xE90891B;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) ^ HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x25292926) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x25292926));
    eax = eax - 0x25292926;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    _fb = (uint32_t)(MEM8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ecx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xF) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(esi)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx) = MEM32(ebx) | ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(0x14100C0E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:cs */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(edx)) + (uint64_t)(MEM8(edi + 0x53)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    eax = MEM32(0x44441D00);
    { uint32_t _tmp = ebp;
    ebp = eax;
    eax = _tmp; }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ MEM32(edx + -123);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5242588u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xA5242588u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, 0x8E);
    SET_LO8(eax, MEM8(0x886A6B2));
    RECOMP_UNIMPL("popfd", 0x001C0097u); /* TODO: popfd */
    SET_LO8(eax, 6);
    _fb = (uint32_t)(0x19) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x19));
    SET_LO8(eax, LO8(eax) - 0x19);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    MEM8(ecx + 0x35270010) = LO8(edx);
    _cf = 0; /* logical op clears CF */
    MEM8(0x1F272828) = MEM8(0x1F272828) ^ HI8(eax);
    _fa = (uint32_t)(MEM8(0x1F272828)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0x170F1112) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x170F1112)) >> 32) & 1);
    eax = eax + 0x170F1112;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x90B0A0B) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:cs */);
    PUSH32(esp, 0 /* seg:cs */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(0x130E0D10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, 0 /* seg:es */);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x34) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    POP32(esp, ebp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = 0x4047291D;
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    RECOMP_UNIMPL("aas", 0x001C00C9u); /* TODO: aas */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8AA8AD12u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xB1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    /* wait - FPU sync */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx + 0xA2921AB)) + (uint64_t)(ebp)) >> 32) & 1);
    MEM32(ecx + 0xA2921AB) = MEM32(ecx + 0xA2921AB) + ebp;
    _fa = (uint32_t)(MEM32(ecx + 0xA2921AB)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x2F352400) = ecx;
    _cf = 0; /* logical op clears CF */
    esp = esp & MEM32(edi);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) & ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x11) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x11)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x11);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) - (uint64_t)(LO8(ebx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    (void)0; /* prefetchw: cache/ordering hint, nothing to model */
    { uint64_t _t = (uint64_t)(MEM8(eax)) + (uint64_t)(LO8(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xC110D0B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x12);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x15050406;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM8(edi + 0x4B) = MEM8(edi + 0x4B) ^ LO8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x4B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (0x24) _cf = (int)(((MEM32(eax)) >> (32 - (0x24))) & 1);
    MEM32(eax) = MEM32(eax) << 0x24;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    _fb = (uint32_t)(0xA7AB0F20u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA7AB0F20u)) >> 32) & 1);
    eax = eax + 0xA7AB0F20u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax + -2130142799;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB2721AB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xB2721AB (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax + 0x222B3426)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax + eax + 0x222B3426) = MEM8(eax + eax + 0x222B3426) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + eax + 0x222B3426)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C131412) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C131412)) >> 32) & 1);
    eax = eax + 0x1C131412;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(edx)) + (uint64_t)(MEM8(0xC0E0F11)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:cs */);

}

/**
 * sub_001C8BE5
 * Original: 0x001C8BE5 - 0x001C910F (1322 bytes, 440 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001C8BE5(void)
{
    uint32_t cr4 = 0; /* v0.14.0 relift compile-fix: mov cr4,eax in privileged/misdisasm code; declare so it compiles (never executes) */
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001C8BE5: ;
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) & MEM8(0x1D048315));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + ebx + 0x20B0B1B)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ebp + ebx + 0x20B0B1B) = MEM8(ebp + ebx + 0x20B0B1B) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + ebx + 0x20B0B1B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x19140A00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx + ecx * 4 + -2130574715)) + (uint64_t)(0x19140A00)) >> 32) & 1);
    MEM32(ebx + ecx * 4 + -2130574715) = MEM32(ebx + ecx * 4 + -2130574715) + 0x19140A00;
    _fa = (uint32_t)(MEM32(ebx + ecx * 4 + -2130574715)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x5D5C071D) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (0) != 0; /* SAHF preserves OF */
    _fa = ((eax >> 8) & 0xD5u) | (_fb << 11); /* sahf */
    _cf = _fa & 1u;
    SET_LO8(eax, MEM8(0x8F159134u));
    SET_LO8(ebx, 0x37);
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -1514980820) = MEM32(ebp + -1514980820) & edi;
    _fa = (uint32_t)(MEM32(ebp + -1514980820)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(MEM32(ebx + 0x27A78993)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0 /* seg:ds */);
    eax = MEM32(0xC221A04);
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x46130022;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x26) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x26 (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    MEM32(esi) = MEM32(esi) & esp;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0 /* seg:ss */);
    { uint32_t _tmp = MEM8(esi + 0x1D94021E);
    MEM8(esi + 0x1D94021E) = LO8(eax);
    SET_LO8(eax, _tmp); }
    PUSH32(esp, 0 /* seg:ds */);
    _cf = 0; /* logical op clears CF */
    MEM8(edx) = MEM8(edx) | LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi + eax * 4 + 0x303878C)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(esi + eax * 4 + 0x303878C) = MEM32(esi + eax * 4 + 0x303878C) + eax;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x303878C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx + 0x1B171308)) + (uint64_t)(0x1E)) >> 32) & 1);
    MEM32(edx + 0x1B171308) = MEM32(edx + 0x1B171308) + 0x1E;
    _fa = (uint32_t)(MEM32(edx + 0x1B171308)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9803595Bu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x9803595Bu)) >> 32) & 1);
    eax = eax + 0x9803595Bu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, 0x36);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    esp = 0x97B13430u;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0x8A21926) = MEM32(esi + 0x8A21926) & 0x18;
    _fa = (uint32_t)(MEM32(esi + 0x8A21926)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x22230B0C) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ebx, LO8(ebx) & MEM8(edi));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    RECOMP_UNIMPL("daa", 0x001C8C66u); /* TODO: daa */
    PUSH32(esp, 0 /* seg:ss */);
    { uint32_t _tmp = MEM32(ecx + 0x219D8121);
    MEM32(ecx + 0x219D8121) = edx;
    edx = _tmp; }
    _cf = 0; /* logical op clears CF */
    MEM8(-2004516601) = MEM8(-2004516601) & LO8(eax);
    _fa = (uint32_t)(MEM8(-2004516601)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    /* mov cs, MEM16(edx + -2071723260) - segment register */;
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x16) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ecx + 0x56)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(MEM32(ecx + 0x56))) >> 32) & 1);
    ebx = ebx + MEM32(ecx + 0x56);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x8E);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ MEM8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _tmp = MEM32(esi);
    MEM32(esi) = eax;
    eax = _tmp; }
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        _cf = (eax < MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x3030BA0E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(ecx, MEM8(esi));
    eax = MEM32(ebx + 0x79F1722);
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x17) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    xmm4 = XMM_MEM(edx); /* movups */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ebp + 0x50)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(ebp + 0x50))) >> 32) & 1);
    ecx = ecx + MEM32(ebp + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("aas", 0x001C8CA3u); /* TODO: aas */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(eax + ebp)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, 0 /* seg:ss */);
    MEM8(ecx + 0x23A58222) = LO8(ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(ecx + -1970896124);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    /* nop */
    MEM16(0x6858506) = 0 /* seg:es */;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x11F1716) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ MEM8(ebx + 0x68B2331));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, 0x30);
    _fb = (uint32_t)(MEM32(ebp + eax * 4 + -2071289589)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(MEM32(ebp + eax * 4 + -2071289589)));
    esp = esp - MEM32(ebp + eax * 4 + -2071289589);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(0x49C181E) = LO8(eax);
    { uint64_t _t = (uint64_t)(MEM32(ebx)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) & esp;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi)) < (uint32_t)(eax));
    MEM32(esi) = MEM32(esi) - eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _tmp = MEM8(ecx + 0x2BAF822B);
    MEM8(ecx + 0x2BAF822B) = HI8(eax);
    SET_HI8(eax, _tmp); }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8E810193u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(edi + -1928392812));
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) | 0x14;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x2014) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(esi)) < (uint32_t)(eax));
    MEM32(esi) = MEM32(esi) - eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _tmp = MEM8(ecx + 0x2BAF822B);
    MEM8(ecx + 0x2BAF822B) = HI8(eax);
    SET_HI8(eax, _tmp); }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x8E810193u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(edi + -1928392812));
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) | 0x14;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x2014) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x2F2D0B02;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM8(0x78B0510)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(0x78B0510) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(0x78B0510)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    { uint64_t _t = (uint64_t)(LO8(ecx)) - (uint64_t)(MEM8(ebx + 0x7829CA4)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebx))) >> 32) & 1);
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx + 0x20210F88)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(edx + 0x20210F88))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(edx + 0x20210F88));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x2F2D0B02;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM8(0x78B0510)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(0x78B0510) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(0x78B0510)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    { uint64_t _t = (uint64_t)(LO8(ecx)) - (uint64_t)(MEM8(ebx + 0x7829CA4)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebx))) >> 32) & 1);
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx + 0x20210F88)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(edx + 0x20210F88))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(edx + 0x20210F88));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(MEM8(edi))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + MEM8(edi));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    XMM_STORE(edx + -2046291707, xmm5); /* movaps */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM32(edx + 0x78199A2)) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx + 0x78199A2) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(edx + 0x78199A2)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + eax))) >> 32) & 1);
    eax = eax + MEM32(ecx + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x11212110) = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(eax)) + (uint64_t)(edi)) >> 32) & 1);
    MEM32(eax) = MEM32(eax) + edi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x30300A00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM8(esi)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    RECOMP_UNIMPL("str word ptr [edi - 0x70e6dff9]", 0x001C8D8Au); /* TODO: str word ptr [edi - 0x70e6dff9] */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    RECOMP_UNIMPL("pushfd", 0x001C8D92u); /* TODO: pushfd */
    _fb = (uint32_t)(0xFFFFFF8Au) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(-1962867965)) + (uint64_t)(0xFFFFFF8Au)) >> 32) & 1);
    MEM32(-1962867965) = MEM32(-1962867965) + 0xFFFFFF8Au;
    _fa = (uint32_t)(MEM32(-1962867965)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    cr4 = eax;
    { uint64_t _t = (uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax + eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(0x36) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x36)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x36);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(ebp) + (uint64_t)(MEM32(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(MEM8(esi + eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(edx)) < (uint32_t)(MEM8(esi + eax)));
    SET_LO8(edx, LO8(edx) - MEM8(esi + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx) = MEM32(ebx) | 0x1D;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    SET_HI8(eax, MEM8(eax + 0x3070194));
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(2)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx + edx + 0x3102022);
    MEM32(ecx + edx + 0x3102022) = eax;
    eax = _tmp; }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(ebx + 0x48)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(ebx + 0x48) (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x31310983;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM8(ecx + 0x20069182)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx + 0x20069182) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(ecx + 0x20069182)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(edx)) - (uint64_t)(MEM8(eax + 0x4859FA7)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edx))) >> 32) & 1);
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + ecx * 4 + 0xE1F220F)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(edx + ecx * 4 + 0xE1F220F) = MEM8(edx + ecx * 4 + 0xE1F220F) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + ecx * 4 + 0xE1F220F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x44);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) ^ ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x713282A) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-1668803299)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(-1668803299) = MEM8(-1668803299) + LO8(ecx);
    _fa = (uint32_t)(MEM8(-1668803299)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* nop */
    _fb = (uint32_t)(MEM8(esi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(esi))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebx + eax))) >> 32) & 1);
    eax = eax + MEM32(ebx + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ecx + 0xF202213)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 0xF202213), eax (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(0x34494D3D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x34494D3D)) >> 32) & 1);
    eax = eax + 0x34494D3D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = ecx;
    ecx = _tmp; }
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) ^ esi;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM32(ebx)) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x85);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) & LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xA0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(ebx) = LO8(eax);
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edx))) >> 32) & 1);
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + 0x1E22118A) = MEM32(ebp + 0x1E22118A) | 0x8000B0D;
    _fa = (uint32_t)(MEM32(ebp + 0x1E22118A)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x42);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(eax + ebx) = MEM8(eax + ebx) ^ LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(eax)) < (uint32_t)(MEM8(edi)));
    SET_HI8(eax, HI8(eax) - MEM8(edi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx + eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM8(ebx + edx)) + (uint64_t)(LO8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ebx + edx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ebx + edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    MEM8(eax + 0x307048C) = LO8(ebx);
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(0x16)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + 0x16;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esp + ecx) = MEM32(esp + ecx) & ebx;
    _fa = (uint32_t)(MEM32(esp + ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ MEM32(edx + 0x1733320E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(edx + -1743315192));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4018A9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4018A9F (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(MEM8(edx + 0x2213898F)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx + 0x2213898F))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx + 0x2213898F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0xB) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_HI8(edx, HI8(edx) | MEM8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x001C8E63u); /* TODO: aas */
    _fb = (uint32_t)(0x252A1B0D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x252A1B0D));
    eax = eax - 0x252A1B0D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(MEM32(ecx)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(0x111B1206)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint32_t _tmp = MEM32(eax + ecx * 4 + 0x5030706);
    MEM32(eax + ecx * 4 + 0x5030706) = edx;
    edx = _tmp; }
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(0xA192017) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(esi)) + (uint64_t)(0xA192017)) >> 32) & 1);
    MEM32(esi) = MEM32(esi) + 0xA192017;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebx + 0x51) = MEM32(ebx + 0x51) | eax;
    _fa = (uint32_t)(MEM32(ebx + 0x51)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x15333315) = MEM8(ebx + 0x15333315) ^ LO8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x15333315)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ebx))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* mov ss, MEM16(edx + -1676403446) - segment register */;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3828D9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3828D9D (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(MEM32(ebx + 0x22158991)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ebx + 0x22158991))) >> 32) & 1);
    eax = eax + MEM32(ebx + 0x22158991);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ecx)) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(esi)));
    edi = edi - MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ MEM8(esi + edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(eax)) < (uint32_t)(HI8(ecx)));
    MEM8(eax) = MEM8(eax) - HI8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM8(ecx)) + (uint64_t)(LO8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(ecx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x6899001) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + eax) = MEM32(esi + eax) | eax;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(0xD1A1E13)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0xD1A1E13) = MEM32(0xD1A1E13) + eax;
    _fa = (uint32_t)(MEM32(0xD1A1E13)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x524A180C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x524A180C)) >> 32) & 1);
    eax = eax + 0x524A180C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x30352789) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0x128A9708) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x128A9708)) >> 32) & 1);
    eax = eax + 0x128A9708;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(esi)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    { uint32_t _tmp = ebp;
    ebp = eax;
    eax = _tmp; }
    /* mov es, MEM16(ebx + eax + -2104326653) - segment register */;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0x71121) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM32(0x1813313E)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(MEM32(0x1813313E)));
    edi = edi - MEM32(0x1813313E);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(edi)) < (uint32_t)(HI8(eax)));
    MEM8(edi) = MEM8(edi) - HI8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    PUSH32(esp, 0 /* seg:ss */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | MEM8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(ecx + edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(edx)) - (uint64_t)(MEM8(0x8858C02)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 0x14070306) = MEM32(eax + 0x14070306) | eax;
    _fa = (uint32_t)(MEM32(eax + 0x14070306)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x18) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(MEM32(edx + 0x54)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(edx + 0x54))) >> 32) & 1);
    ecx = ecx + MEM32(edx + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(MEM8(edx + 0x630352B)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edx + 0x630352B) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(edx + 0x630352B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = MEM32(eax);
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(5) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    { uint32_t _tmp = ebx;
    ebx = eax;
    eax = _tmp; }
    eax = MEM32(edx);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fa = (uint32_t)(MEM8(ebp + eax * 4 + 0x610211C)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + eax * 4 + 0x610211C), LO8(edx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(0x1B0D2B3B) = MEM8(0x1B0D2B3B) ^ HI8(ebx);
    _fa = (uint32_t)(MEM8(0x1B0D2B3B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(esi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(eax)) < (uint32_t)(MEM8(esi)));
    SET_HI8(eax, HI8(eax) - MEM8(esi));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(ecx)) + (uint64_t)(MEM8(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ecx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1B140D14) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(MEM32(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    SET_LO8(eax, MEM8(eax));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(0x160B0506)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0x160B0506))) >> 32) & 1);
    eax = eax + MEM32(0x160B0506);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(0x15) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _tmp; POP32(esp, _tmp); MEM32(edi + -2077608142) = _tmp; }
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(MEM32(esi + ebx * 4)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM8(ecx) = LO8(edx);
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(1) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM8(ebx + -1869182048)) < (uint32_t)(1));
    MEM8(ebx + -1869182048) = MEM8(ebx + -1869182048) - 1;
    _fa = (uint32_t)(MEM8(ebx + -1869182048)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(ebx + 0x20208497));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx) (32-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(0xD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xD));
    SET_LO8(eax, LO8(eax) - 0xD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(ebp) - (uint64_t)(MEM32(edx)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebp = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    RECOMP_UNIMPL("daa", 0x001C8F67u); /* TODO: daa */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xC) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x20160F16) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:ss */);
    _fb = (uint32_t)(MEM32(eax + 0x2080B81)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(eax + 0x2080B81))) >> 32) & 1);
    ecx = ecx + MEM32(eax + 0x2080B81);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(7) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(7)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 7);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(0x1D11060A)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    RECOMP_UNIMPL("aaa", 0x001C8F83u); /* TODO: aaa */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        _cf = (eax < MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    { uint64_t _t = (uint64_t)(HI8(ebx)) + (uint64_t)(MEM8(esi + esi)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(ebx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x8F) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(0x9A1E1603u);
    SET_LO8(eax, 0x8B);
    { uint32_t _tmp = MEM8(ebp + -2045967215);
    MEM8(ebp + -2045967215) = LO8(ebx);
    SET_LO8(ebx, _tmp); }
    eax = SX16(eax); /* cwde */
    _fb = (uint32_t)(0x3051923) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x3051923)) >> 32) & 1);
    eax = eax + 0x3051923;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(0x230A2238) = MEM8(0x230A2238) ^ HI8(ebx);
    _fa = (uint32_t)(MEM8(0x230A2238)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x190F1024) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x190F1024));
    eax = eax - 0x190F1024;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ss - segment register */
    { uint64_t _t = (uint64_t)(LO8(ebx)) + (uint64_t)(MEM8(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) & LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0x1050B05)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x1050B05), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:cs */);
    PUSH32(esp, 0 /* seg:ss */);
    { uint64_t _t = (uint64_t)(MEM8(esi)) - (uint64_t)(LO8(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, 0 /* seg:es */);
    { uint64_t _t = (uint64_t)(MEM32(ecx + ebx * 2 + 0x36)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + ebx * 2 + 0x36) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ecx + ebx * 2 + 0x36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    SET_HI8(edx, 0xE);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(-1576458341)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(-1576458341), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(MEM8(edi)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(MEM8(edi))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + MEM8(edi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_HI8(eax, HI8(eax) & MEM8(eax + -1593835342));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _tmp = edi;
    edi = eax;
    eax = _tmp; }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebx)) + (uint64_t)(edx)) >> 32) & 1);
    MEM32(ebx) = MEM32(ebx) + edx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM8(esp + eax + 0x1051823)) - (uint64_t)(0x10) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(esp + eax + 0x1051823) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(esp + eax + 0x1051823)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0xC20383D)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(0xC20383D) = MEM8(0xC20383D) + HI8(ecx);
    _fa = (uint32_t)(MEM8(0xC20383D)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1414262E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ebx) + (uint64_t)(MEM32(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) & LO8(edx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebx + 0x3040906)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x3040906), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx + ecx) = MEM32(ecx + ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx + ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xD) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:es */);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(6) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    POP32(esp, ecx);
    POP32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x374322BC) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp = esi;
    esi = eax;
    eax = _tmp; }
    eax = MEM32(0x9A3042F);
    { uint64_t _t = (uint64_t)(HI8(eax)) - (uint64_t)(MEM8(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_HI8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    SET_LO8(ecx, 0x14);
    _fa = (uint32_t)(MEM8(edi + edx * 4 + -1685776892)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + edx * 4 + -1685776892), HI8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    esp = esp | MEM32(ecx + edx);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edx))) >> 32) & 1);
    eax = eax + MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C151633) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2C151633 (32-bit) */
    _cf = (int)(_fa < _fb);
    RECOMP_UNIMPL("das", 0x001C9026u); /* TODO: das */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(edx)) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(edx) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(edx)) + (uint64_t)(MEM8(esp + ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ebp + 0x6090701);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:es */);
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xA12120A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA12120A)) >> 32) & 1);
    eax = eax + 0xA12120A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(8)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 8);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xB0575E22u) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    esp = 0xA6324531u;
    SET_LO8(eax, MEM8(0x16A18331));
    { uint64_t _t = (uint64_t)(LO8(edx)) - (uint64_t)(MEM8(ecx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(edx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ecx, 0xAB);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & MEM8(ebx + 0x10068BA6));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(ebx + 0x6082116));
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x3C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    MEM8(edi) = MEM8(edi) & HI8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x15);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    xmm3 = XMM_UNPACK_HIGH(xmm3, XMM_MEM(esi)); /* unpckhps */
    { uint64_t _t = (uint64_t)(LO8(eax)) - (uint64_t)(8) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(9)) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + 9;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0xA040405) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xA040405)) >> 32) & 1);
    eax = eax + 0xA040405;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(esi)) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0x60) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    POP32(esp, ecx);
    SET_LO8(edx, 0xBD);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + 0x35)) < (uint32_t)(eax));
    MEM32(ebp + 0x35) = MEM32(ebp + 0x35) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x35)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    ecx = _rc; }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x31 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _fb = (uint32_t)(0x9F) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x9F)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x9F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x9A23A8B2u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    { uint32_t _tmp = MEM32(edx);
    MEM32(edx) = eax;
    eax = _tmp; }
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x88);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = eax;
    PUSH32(esp, 0 /* seg:ds */);
    _fb = (uint32_t)(0xA) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0xA)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0xA);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(edx) = MEM32(edx) | ecx;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    esp = esp & MEM32(esp + ebp);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x25) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0x25));
    SET_LO8(eax, LO8(eax) - 0x25);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(LO8(ebx)) - (uint64_t)(MEM8(edx)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(ebx, (uint32_t)_t); }  /* sbb */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(0xE) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x50B1A1C) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM8(esi) = MEM8(esi) | LO8(eax);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(2)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 2);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + ecx))) >> 32) & 1);
    eax = eax + MEM32(ecx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xD0B0B0C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0 /* seg:ss */);
    _cf = 0; /* logical op clears CF */
    MEM8(ebx + 0x52) = MEM8(ebx + 0x52) ^ HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + 0x52)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (0x33) _cf = (int)(((MEM32(eax + esi + -1515246523)) >> (32 - (0x33))) & 1);
    MEM32(eax + esi + -1515246523) = MEM32(eax + esi + -1515246523) << 0x33;
    _fa = (uint32_t)(MEM32(eax + esi + -1515246523)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _tmp = MEM32(edx + -1283059164);
    MEM32(edx + -1283059164) = ebx;
    ebx = _tmp; }
    RECOMP_UNIMPL("pushfd", 0x001C90D1u); /* TODO: pushfd */
    _cf = 0; /* logical op clears CF */
    esp = esp & MEM32(ebp + 0x900019E);
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0xD831620) = eax;
    PUSH32(esp, 0 /* seg:es */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + edi)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + edi) = MEM8(eax + edi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0x28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x2025292A;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(0x1A19130F)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(MEM8(edx)) + (uint64_t)(LO8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edx) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(3)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(edx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(0xE0F0D09)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(0xE0F0D09))) >> 32) & 1);
    eax = eax + MEM32(0xE0F0D09);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    XMM_LOAD_HIGH(xmm6, ecx); /* movhps */
    PUSH32(esp, eax);
    if (0xA9) _cf = (int)(((MEM32(ecx + -1339341533)) >> (32 - (0xA9))) & 1);
    MEM32(ecx + -1339341533) = MEM32(ecx + -1339341533) << 0xA9;
    _fa = (uint32_t)(MEM32(ecx + -1339341533)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    eax = eax ^ 0x12289D86;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

}

/**
 * sub_001CED20
 * Original: 0x001CED20 - 0x001CED31 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED20: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CED2C; /* jne: not equal / not zero */

loc_001CED24: ;
    eax = 0x276D;
    esp += 12; return; /* ret 8 */

loc_001CED2C: ;
    g_seh_ebp = ebp; sub_001D22C0(); return; /* tail jmp 0x001D22C0 */

}

/**
 * sub_001CED31
 * Original: 0x001CED31 - 0x001CED3D (12 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED31: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CED3D(); return; } /* jne: not equal / not zero */

loc_001CED35: ;
    eax = 0x276D;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CED3D
 * Original: 0x001CED3D - 0x001CED42 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED3D: ;
    g_seh_ebp = ebp; sub_001D2DB0(); return; /* tail jmp 0x001D2DB0 */

}

/**
 * sub_001CED42
 * Original: 0x001CED42 - 0x001CED4E (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CED4E(); return; } /* jne: not equal / not zero */

loc_001CED46: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CED4E
 * Original: 0x001CED4E - 0x001CED53 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED4E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED4E: ;
    g_seh_ebp = ebp; sub_001D5192(); return; /* tail jmp 0x001D5192 */

}

/**
 * sub_001CED53
 * Original: 0x001CED53 - 0x001CED5E (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED53: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CED5E(); return; } /* jne: not equal / not zero */

loc_001CED57: ;
    eax = 0x276D;
    g_seh_ebp = ebp; sub_001CED6D(); return; /* tail jmp 0x001CED6D */

}

/**
 * sub_001CED5E
 * Original: 0x001CED5E - 0x001CED6D (15 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CED5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED5E: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0x001CED6Bu); RECOMP_ABI_CALL(0x001D812Au, sub_001D812A); /* call 0x001D812A */

loc_001CED6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CED6D(); return; /* fallthrough 0x001CED6D */

}

/**
 * sub_001CED6D
 * Original: 0x001CED6D - 0x001CED70 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED6D(void)
{

loc_001CED6D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CED92
 * Original: 0x001CED92 - 0x001CEDA8 (22 bytes, 6 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CED92(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CED92: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x001CEDA3u); RECOMP_ABI_CALL(0x001D7B74u, sub_001D7B74); /* call 0x001D7B74 */

loc_001CEDA3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CEDA8
 * Original: 0x001CEDA8 - 0x001CEDC3 (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEDA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEDA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEDDB
 * Original: 0x001CEDDB - 0x001CEDE5 (10 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEDDB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEDDB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEDE5(); return; } /* jne: not equal / not zero */

loc_001CEDDF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEDE5
 * Original: 0x001CEDE5 - 0x001CEDEA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEDE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEDE5: ;
    g_seh_ebp = ebp; sub_001D32F8(); return; /* tail jmp 0x001D32F8 */

}

/**
 * sub_001CEDEA
 * Original: 0x001CEDEA - 0x001CEDF9 (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEDEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEDEA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEDF4; /* jne: not equal / not zero */

loc_001CEDEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_001CEDF4: ;
    g_seh_ebp = ebp; sub_001D8A19(); return; /* tail jmp 0x001D8A19 */

}

/**
 * sub_001CEE0A
 * Original: 0x001CEE0A - 0x001CEE16 (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE0A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE0A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEE16(); return; } /* jne: not equal / not zero */

loc_001CEE0E: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEE16
 * Original: 0x001CEE16 - 0x001CEE1B (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE16(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE16: ;
    g_seh_ebp = ebp; sub_001D9825(); return; /* tail jmp 0x001D9825 */

}

/**
 * sub_001CEE1B
 * Original: 0x001CEE1B - 0x001CEE2B (16 bytes, 7 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEE1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEE1B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEE2B(); return; } /* jne: not equal / not zero */

loc_001CEE22: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001CEE2B
 * Original: 0x001CEE2B - 0x001CEE31 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE2B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE2B: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001DAE44(); return; /* tail jmp 0x001DAE44 */

}

/**
 * sub_001CEE31
 * Original: 0x001CEE31 - 0x001CEE47 (22 bytes, 9 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEE31(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEE31: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEE41; /* jne: not equal / not zero */

loc_001CEE38: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

loc_001CEE41: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001DBBF9(); return; /* tail jmp 0x001DBBF9 */

}

/**
 * sub_001CEE47
 * Original: 0x001CEE47 - 0x001CEE53 (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE47(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE47: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEE53(); return; } /* jne: not equal / not zero */

loc_001CEE4B: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEE53
 * Original: 0x001CEE53 - 0x001CEE58 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE53: ;
    g_seh_ebp = ebp; sub_001DB004(); return; /* tail jmp 0x001DB004 */

}

/**
 * sub_001CEE58
 * Original: 0x001CEE58 - 0x001CEE64 (12 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE58: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEE64(); return; } /* jne: not equal / not zero */

loc_001CEE5C: ;
    eax = 0x276D;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CEE64
 * Original: 0x001CEE64 - 0x001CEE69 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE64: ;
    g_seh_ebp = ebp; sub_001DD59C(); return; /* tail jmp 0x001DD59C */

}

/**
 * sub_001CEE69
 * Original: 0x001CEE69 - 0x001CEE75 (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE69(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE69: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEE75(); return; } /* jne: not equal / not zero */

loc_001CEE6D: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEE75
 * Original: 0x001CEE75 - 0x001CEE7A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE75: ;
    g_seh_ebp = ebp; sub_001DC14D(); return; /* tail jmp 0x001DC14D */

}

/**
 * sub_001CEE7A
 * Original: 0x001CEE7A - 0x001CEE8B (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE7A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEE86; /* jne: not equal / not zero */

loc_001CEE7E: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

loc_001CEE86: ;
    g_seh_ebp = ebp; sub_001DF267(); return; /* tail jmp 0x001DF267 */

}

/**
 * sub_001CEEAD
 * Original: 0x001CEEAD - 0x001CEEB8 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEEAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEEAD: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE58(); return; /* tail jmp 0x001CEE58 */

}

/**
 * sub_001CEEB8
 * Original: 0x001CEEB8 - 0x001CEEC3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEEB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEEB8: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE69(); return; /* tail jmp 0x001CEE69 */

}

/**
 * sub_001CEEC3
 * Original: 0x001CEEC3 - 0x001CEECE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEEC3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEEC3: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CED53(); return; /* tail jmp 0x001CED53 */

}

/**
 * sub_001CEECE
 * Original: 0x001CEECE - 0x001CEED9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEECE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEECE: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CED20(); return; /* tail jmp 0x001CED20 */

}

/**
 * sub_001CEED9
 * Original: 0x001CEED9 - 0x001CEEE4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEED9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEED9: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CED31(); return; /* tail jmp 0x001CED31 */

}

/**
 * sub_001CEEE4
 * Original: 0x001CEEE4 - 0x001CEEEF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEEE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEEE4: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CED42(); return; /* tail jmp 0x001CED42 */

}

/**
 * sub_001CEEEF
 * Original: 0x001CEEEF - 0x001CEF01 (18 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEEEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEEEF: ;
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEF01(); return; } /* jne: not equal / not zero */

loc_001CEEF9: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CEF01
 * Original: 0x001CEF01 - 0x001CEF06 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF01: ;
    g_seh_ebp = ebp; sub_001D68B0(); return; /* tail jmp 0x001D68B0 */

}

/**
 * sub_001CEF1D
 * Original: 0x001CEF1D - 0x001CEF28 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF1D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF1D: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CED92(); return; /* tail jmp 0x001CED92 */

}

/**
 * sub_001CEF33
 * Original: 0x001CEF33 - 0x001CEF45 (18 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF33: ;
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEF45(); return; } /* jne: not equal / not zero */

loc_001CEF3D: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CEF45
 * Original: 0x001CEF45 - 0x001CEF4A (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF45(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF45: ;
    g_seh_ebp = ebp; sub_001D9BB1(); return; /* tail jmp 0x001D9BB1 */

}

/**
 * sub_001CEF4A
 * Original: 0x001CEF4A - 0x001CEF55 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF4A: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE0A(); return; /* tail jmp 0x001CEE0A */

}

/**
 * sub_001CEF55
 * Original: 0x001CEF55 - 0x001CEF64 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEF55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CEF55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001CEE1B(); return; /* tail jmp 0x001CEE1B */

}

/**
 * sub_001CEF64
 * Original: 0x001CEF64 - 0x001CEF7A (22 bytes, 8 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEF64(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEF64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CEF7A(); return; } /* jne: not equal / not zero */

loc_001CEF71: ;
    eax = 0x276D;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_001CEF7A
 * Original: 0x001CEF7A - 0x001CEF80 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF7A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF7A: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001DBBF9(); return; /* tail jmp 0x001DBBF9 */

}

/**
 * sub_001CEF80
 * Original: 0x001CEF80 - 0x001CEF8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF80: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE47(); return; /* tail jmp 0x001CEE47 */

}

/**
 * sub_001CEF8B
 * Original: 0x001CEF8B - 0x001CEF96 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF8B: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEDDB(); return; /* tail jmp 0x001CEDDB */

}

/**
 * sub_001CEF96
 * Original: 0x001CEF96 - 0x001CEFA1 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF96: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEDEA(); return; /* tail jmp 0x001CEDEA */

}

/**
 * sub_001CEFA1
 * Original: 0x001CEFA1 - 0x001CEFCE (45 bytes, 10 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEFA1: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE7A(); return; /* tail jmp 0x001CEE7A */

    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CEE9C(); return; /* tail jmp 0x001CEE9C */

    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEFC9; /* jne: not equal / not zero */

loc_001CEFC1: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

loc_001CEFC9: ;
    g_seh_ebp = ebp; sub_001DF414(); return; /* tail jmp 0x001DF414 */

}

/**
 * sub_001CEFCE
 * Original: 0x001CEFCE - 0x001CEFD9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFCE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEFCE: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D20A9(); return; /* tail jmp 0x001D20A9 */

}

/**
 * sub_001CEFD9
 * Original: 0x001CEFD9 - 0x001CEFE4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEFD9: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D1F53(); return; /* tail jmp 0x001D1F53 */

}

/**
 * sub_001CEFE4
 * Original: 0x001CEFE4 - 0x001CEFEF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFE4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEFE4: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CFF05(); return; /* tail jmp 0x001CFF05 */

}

/**
 * sub_001CEFEF
 * Original: 0x001CEFEF - 0x001CEFFA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFEF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEFEF: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CFFA2(); return; /* tail jmp 0x001CFFA2 */

}

/**
 * sub_001CEFFA
 * Original: 0x001CEFFA - 0x001CF009 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CEFFA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CEFFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D0B79(); return; /* tail jmp 0x001D0B79 */

}

/**
 * sub_001CF009
 * Original: 0x001CF009 - 0x001CF018 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF009(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF009: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D00C7(); return; /* tail jmp 0x001D00C7 */

}

/**
 * sub_001CF018
 * Original: 0x001CF018 - 0x001CF023 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF018: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D0253(); return; /* tail jmp 0x001D0253 */

}

/**
 * sub_001CF023
 * Original: 0x001CF023 - 0x001CF02E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF023(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF023: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D02CA(); return; /* tail jmp 0x001D02CA */

}

/**
 * sub_001CF02E
 * Original: 0x001CF02E - 0x001CF039 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF02E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF02E: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D0DB4(); return; /* tail jmp 0x001D0DB4 */

}

/**
 * sub_001CF039
 * Original: 0x001CF039 - 0x001CF044 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF039(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF039: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D0E38(); return; /* tail jmp 0x001D0E38 */

}

/**
 * sub_001CF044
 * Original: 0x001CF044 - 0x001CF04F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF044(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF044: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D045B(); return; /* tail jmp 0x001D045B */

}

/**
 * sub_001CF04F
 * Original: 0x001CF04F - 0x001CF05A (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF04F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF04F: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D0F33(); return; /* tail jmp 0x001D0F33 */

}

/**
 * sub_001CF05A
 * Original: 0x001CF05A - 0x001CF069 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF05A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF05A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1046(); return; /* tail jmp 0x001D1046 */

}

/**
 * sub_001CF069
 * Original: 0x001CF069 - 0x001CF078 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF069: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D13CD(); return; /* tail jmp 0x001D13CD */

}

/**
 * sub_001CF078
 * Original: 0x001CF078 - 0x001CF083 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF078(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF078: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D14A1(); return; /* tail jmp 0x001D14A1 */

}

/**
 * sub_001CF083
 * Original: 0x001CF083 - 0x001CF08E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF083(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF083: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D1903(); return; /* tail jmp 0x001D1903 */

}

/**
 * sub_001CF08E
 * Original: 0x001CF08E - 0x001CF09D (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF08E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF08E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1994(); return; /* tail jmp 0x001D1994 */

}

/**
 * sub_001CF09D
 * Original: 0x001CF09D - 0x001CF0AC (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF09D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF09D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1FE4(); return; /* tail jmp 0x001D1FE4 */

}

/**
 * sub_001CF0AC
 * Original: 0x001CF0AC - 0x001CF0BB (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF0AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF0AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1A31(); return; /* tail jmp 0x001D1A31 */

}

/**
 * sub_001CF0BB
 * Original: 0x001CF0BB - 0x001CF0C6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF0BB: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001D1AEF(); return; /* tail jmp 0x001D1AEF */

}

/**
 * sub_001CF0C6
 * Original: 0x001CF0C6 - 0x001CF0D5 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF0C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF0C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1B84(); return; /* tail jmp 0x001D1B84 */

}

/**
 * sub_001CF0D5
 * Original: 0x001CF0D5 - 0x001CF0E4 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF0D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF0D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D2025(); return; /* tail jmp 0x001D2025 */

}

/**
 * sub_001CF0E4
 * Original: 0x001CF0E4 - 0x001CF0F3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF0E4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF0E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(0x9701A0);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_001D1C1F(); return; /* tail jmp 0x001D1C1F */

}

/**
 * sub_001CF14E
 * Original: 0x001CF14E - 0x001CF151 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF14E(void)
{

loc_001CF14E: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF15E
 * Original: 0x001CF15E - 0x001CF161 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF15E(void)
{

loc_001CF15E: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF248
 * Original: 0x001CF248 - 0x001CF254 (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF248(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF248: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF254(); return; } /* jne: not equal / not zero */

loc_001CF24C: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF254
 * Original: 0x001CF254 - 0x001CF259 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF254(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF254: ;
    g_seh_ebp = ebp; sub_001D5256(); return; /* tail jmp 0x001D5256 */

}

/**
 * sub_001CF259
 * Original: 0x001CF259 - 0x001CF26A (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF259(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF259: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF265; /* jne: not equal / not zero */

loc_001CF25D: ;
    eax = 0x276D;
    esp += 8; return; /* ret 4 */

loc_001CF265: ;
    g_seh_ebp = ebp; sub_001D55D0(); return; /* tail jmp 0x001D55D0 */

}

/**
 * sub_001CF26A
 * Original: 0x001CF26A - 0x001CF279 (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF26A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF26A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF274; /* jne: not equal / not zero */

loc_001CF26E: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    esp += 8; return; /* ret 4 */

loc_001CF274: ;
    g_seh_ebp = ebp; sub_001D3C55(); return; /* tail jmp 0x001D3C55 */

}

/**
 * sub_001CF279
 * Original: 0x001CF279 - 0x001CF2E9 (112 bytes, 45 insns)
 * Category: game_network
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF279(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF279: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF290; /* jne: not equal / not zero */

loc_001CF289: ;
    eax = 0x276D;
    goto loc_001CF2E3;

loc_001CF290: ;
    ecx = MEM32(ebx + 0xAEC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(ebp + -4) = 0x271D;
    MEM32(ebp + -8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2B1; /* je: equal / zero */

loc_001CF2A8: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF2AFu); RECOMP_ABI_CALL(0x001EF849u, sub_001EF849); /* call 0x001EF849 */

loc_001CF2AF: ;
    goto loc_001CF2B3;

loc_001CF2B1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CF2B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2E0; /* je: equal / zero */

loc_001CF2BA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -8;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF2DDu); RECOMP_ABI_CALL(0x001DBBF9u, sub_001DBBF9); /* call 0x001DBBF9 */

loc_001CF2DD: ;
    MEM32(ebp + -4) = eax;

loc_001CF2E0: ;
    eax = MEM32(ebp + -4);

loc_001CF2E3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF2E9
 * Original: 0x001CF2E9 - 0x001CF2FB (18 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF2E9: ;
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF2FB(); return; } /* jne: not equal / not zero */

loc_001CF2F3: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF2FB
 * Original: 0x001CF2FB - 0x001CF300 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF2FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF2FB: ;
    g_seh_ebp = ebp; sub_001D69D1(); return; /* tail jmp 0x001D69D1 */

}

/**
 * sub_001CF300
 * Original: 0x001CF300 - 0x001CF312 (18 bytes, 5 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF300: ;
    ecx = MEM32(0x9701A0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF312(); return; } /* jne: not equal / not zero */

loc_001CF30A: ;
    eax = 0x276D;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CF312
 * Original: 0x001CF312 - 0x001CF317 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF312(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF312: ;
    g_seh_ebp = ebp; sub_001D3B6A(); return; /* tail jmp 0x001D3B6A */

}

/**
 * sub_001CF322
 * Original: 0x001CF322 - 0x001CF32D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF322: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CF248(); return; /* tail jmp 0x001CF248 */

}

/**
 * sub_001CF32D
 * Original: 0x001CF32D - 0x001CF338 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF32D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF32D: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CF259(); return; /* tail jmp 0x001CF259 */

}

/**
 * sub_001CF338
 * Original: 0x001CF338 - 0x001CF35B (35 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF338(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF338: ;
    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CF26A(); return; /* tail jmp 0x001CF26A */

    ecx = MEM32(0x9701A0);
    g_seh_ebp = ebp; sub_001CF279(); return; /* tail jmp 0x001CF279 */

    eax = ecx;
    MEM32(eax + 0x264) = 0x2A8C18;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF35B
 * Original: 0x001CF35B - 0x001CF381 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF35B(void)
{

loc_001CF35B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CF15E);
    esi = ecx;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x18);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    MEM32(esi + 0x264) = 0x2A8C18;
    PUSH32(esp, 0x001CF37Du); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF37D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF381
 * Original: 0x001CF381 - 0x001CF3EF (110 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF381(void)
{

loc_001CF381: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CF15E);
    esi = ecx;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x18);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    MEM32(esi + 0x264) = 0x2A8C18;
    PUSH32(esp, 0x001CF3A5u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF3A5: ;
    edi = 0x1CF14E;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF3BCu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF3BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF3CBu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF3CB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF3DAu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF3DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x908;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF3E9u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF3E9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF3EF
 * Original: 0x001CF3EF - 0x001CF45D (110 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF3EF(void)
{

loc_001CF3EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CF15E);
    esi = ecx;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x18);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    MEM32(esi + 0x264) = 0x2A8C18;
    PUSH32(esp, 0x001CF413u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF413: ;
    edi = 0x1CF14E;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF42Au); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF42A: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF439u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF439: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF448u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF448: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x908;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF457u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF457: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF45E
 * Original: 0x001CF45E - 0x001CF4CC (110 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF45E(void)
{

loc_001CF45E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CF15E);
    esi = ecx;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x18);
    eax = esi + 0x2A0;
    PUSH32(esp, eax);
    MEM32(esi + 0x264) = 0x2A8C18;
    PUSH32(esp, 0x001CF482u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF482: ;
    edi = 0x1CF14E;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    POP32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF499u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF499: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF4A8u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF4A8: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x8F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF4B7u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF4B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esi + 0x908;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF4C6u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF4C6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF4CD
 * Original: 0x001CF4CD - 0x001CF4F7 (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF4CD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF4CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);

loc_001CF4D7: ;
    eax = 0;
    ecx = 0x97019C;
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF4F7(); return; } /* je: equal / zero */

loc_001CF4EF: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF4F5u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_001CF4F5: ;
    goto loc_001CF4D7;

}

/**
 * sub_001CF4F7
 * Original: 0x001CF4F7 - 0x001CF591 (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF4F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF4F7: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF669(); return; } /* jne: not equal / not zero */

loc_001CF509: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4454454E);
    PUSH32(esp, 0xD50);
    { uint32_t _icall_target = MEM32(0x22BCD4); PUSH32(esp, 0x001CF519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF513u); } /* indirect call */
    }

loc_001CF519: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF591(); return; } /* je: equal / zero */

loc_001CF51F: ;
    PUSH32(esp, 0x1CF15E);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x40);
    ecx = 0x354;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x18);
    eax = ebx + 0x2A0;
    PUSH32(esp, eax);
    MEM32(ebx + 0x264) = 0x2A8C18;
    PUSH32(esp, 0x001CF549u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF549: ;
    edi = 0x1CF14E;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    POP32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebx + 0x8D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF560u); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF560: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebx + 0x8E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF56Fu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF56F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebx + 0x8F8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF57Eu); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF57E: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebx + 0x908;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF58Du); RECOMP_ABI_CALL(0x0006DA40u, sub_0006DA40); /* call 0x0006DA40 */

loc_001CF58D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001CF593(); return; /* tail jmp 0x001CF593 */

}

/**
 * sub_001CF591
 * Original: 0x001CF591 - 0x001CF593 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF591(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF591: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CF593(); return; /* fallthrough 0x001CF593 */

}

/**
 * sub_001CF593
 * Original: 0x001CF593 - 0x001CF5AF (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF593(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF593: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    eax = MEM32(ebp + 8);
    MEM32(eax) = ebx;
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF5AF(); return; } /* jne: not equal / not zero */

loc_001CF59C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80072747u);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001CF5A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF5A1u); } /* indirect call */
    }

loc_001CF5A7: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_001CF6AD(); return; /* tail jmp 0x001CF6AD */

}

/**
 * sub_001CF5AF
 * Original: 0x001CF5AF - 0x001CF660 (177 bytes, 57 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF5AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF5AF: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -44) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -40) = eax;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF5C4u); RECOMP_ABI_CALL(0x001E00F2u, sub_001E00F2); /* call 0x001E00F2 */

loc_001CF5C4: ;
    PUSH32(esp, 0x001CF5C9u); RECOMP_ABI_CALL(0x001DFBCDu, sub_001DFBCD); /* call 0x001DFBCD */

loc_001CF5C9: ;
    MEM32(ebx + 0xD48) = eax;
    eax = ebp + -536;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF5DBu); RECOMP_ABI_CALL(0x001DFF29u, sub_001DFF29); /* call 0x001DFF29 */

loc_001CF5DB: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = ebp + -536;
    edi = ebp + -28;
    eax = ebp + -44;
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
    ecx = ebx;
    PUSH32(esp, 0x001CF5F4u); RECOMP_ABI_CALL(0x001CF992u, sub_001CF992); /* call 0x001CF992 */

loc_001CF5F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CF606; /* jge: greater or equal (signed >=) */

loc_001CF5F8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x22BB2C); PUSH32(esp, 0x001CF5FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF5F9u); } /* indirect call */
    }

loc_001CF5FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001CF644; /* jne: not equal / not zero */

loc_001CF606: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    eax = ebp + -536;
    esi = ebp + -28;
    edi = ebp + -536;
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
    PUSH32(esp, 0x001CF620u); RECOMP_ABI_CALL(0x001DFE71u, sub_001DFE71); /* call 0x001DFE71 */

loc_001CF620: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF62D; /* je: equal / zero */

loc_001CF627: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 0x80 (8-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF660(); return; } /* jne: not equal / not zero */

loc_001CF62D: ;
    PUSH32(esp, 0);
    eax = ebp + -536;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001CF63Du); RECOMP_ABI_CALL(0x001DD59Cu, sub_001DD59C); /* call 0x001DD59C */

loc_001CF63D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF660(); return; } /* je: equal / zero */

loc_001CF644: ;
    PUSH32(esp, MEM32(ebx + 0xD48));
    PUSH32(esp, 0x001CF64Fu); RECOMP_ABI_CALL(0x001DFC1Bu, sub_001DFC1B); /* call 0x001DFC1B */

loc_001CF64F: ;
    ecx = ebx;
    PUSH32(esp, 0x001CF656u); RECOMP_ABI_CALL(0x001D2065u, sub_001D2065); /* call 0x001D2065 */

loc_001CF656: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_seh_ebp = ebp; sub_001CF6AD(); return; /* tail jmp 0x001CF6AD */

}

/**
 * sub_001CF660
 * Original: 0x001CF660 - 0x001CF669 (9 bytes, 3 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF660: ;
    ecx = ebx;
    PUSH32(esp, 0x001CF667u); RECOMP_ABI_CALL(0x001D89B2u, sub_001D89B2); /* call 0x001D89B2 */

loc_001CF667: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CF669(); return; /* fallthrough 0x001CF669 */

}

/**
 * sub_001CF669
 * Original: 0x001CF669 - 0x001CF6A6 (61 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF669(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF669: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF6A6(); return; } /* je: equal / zero */

loc_001CF66E: ;
    eax = MEM32(ebp + 0x1C);
    MEM16(ebx + 0xD32) = MEM16(ebx + 0xD32) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0xD32)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(ebp + 0x18));
    MEM16(eax) = LO16(ecx);
    MEM16(eax + 2) = 0x202;
    MEM32(eax + 0x18C) = esi;
    MEM16(eax + 0x186) = LO16(esi);
    MEM16(eax + 0x188) = LO16(esi);
    MEM8(eax + 4) = 0;
    MEM8(eax + 0x105) = 0;
    g_seh_ebp = ebp; sub_001CF6AD(); return; /* tail jmp 0x001CF6AD */

}

/**
 * sub_001CF6A6
 * Original: 0x001CF6A6 - 0x001CF6AD (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF6A6: ;
    MEM16(ebx + 0xD30) = MEM16(ebx + 0xD30) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0xD30)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

    g_seh_ebp = ebp; sub_001CF6AD(); return; /* fallthrough 0x001CF6AD */

}

/**
 * sub_001CF6AD
 * Original: 0x001CF6AD - 0x001CF6D3 (38 bytes, 14 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6AD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF6AD: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    POP32(esp, edi);
    MEM32(0x97019C) = esi;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001CF6CB; /* je: equal / zero */

loc_001CF6BA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF6CB; /* je: equal / zero */

loc_001CF6BF: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001CF6C7u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CF6C7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CF6CB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_001CF6EE
 * Original: 0x001CF6EE - 0x001CF705 (23 bytes, 9 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF6EE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF6EE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0x9701A0);
    PUSH32(esp, 0x001CF702u); RECOMP_ABI_CALL(0x001CF4CDu, sub_001CF4CD); /* call 0x001CF4CD */

loc_001CF702: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF705
 * Original: 0x001CF705 - 0x001CF720 (27 bytes, 8 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF705(void)
{

loc_001CF705: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x9701A0);
    PUSH32(esp, 0x001CF71Du); RECOMP_ABI_CALL(0x001CF4CDu, sub_001CF4CD); /* call 0x001CF4CD */

loc_001CF71D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF720
 * Original: 0x001CF720 - 0x001CF748 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = ebx;

loc_001CF72A: ;
    eax = 0;
    ecx = 0x97019C;
    edx = 1;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF748(); return; } /* je: equal / zero */

loc_001CF740: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CF746u); RECOMP_ABI_CALL(0x000ADA10u, sub_000ADA10); /* call 0x000ADA10 */

loc_001CF746: ;
    goto loc_001CF72A;

}

/**
 * sub_001CF748
 * Original: 0x001CF748 - 0x001CF77A (50 bytes, 18 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF748(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF748: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF786(); return; } /* je: equal / zero */

loc_001CF753: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF77A(); return; } /* je: equal / zero */

loc_001CF758: ;
    SET_LO16(eax, MEM16(esi + 0xD32));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF786(); return; } /* je: equal / zero */

loc_001CF764: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    MEM16(esi + 0xD32) = LO16(eax);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF7BB(); return; } /* jne: not equal / not zero */

loc_001CF771: ;
    ecx = esi;
    PUSH32(esp, 0x001CF778u); RECOMP_ABI_CALL(0x001D1D32u, sub_001D1D32); /* call 0x001D1D32 */

loc_001CF778: ;
    g_seh_ebp = ebp; sub_001CF7BB(); return; /* tail jmp 0x001CF7BB */

}

/**
 * sub_001CF77A
 * Original: 0x001CF77A - 0x001CF786 (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF77A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF77A: ;
    SET_LO16(eax, MEM16(esi + 0xD30));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF7B3(); return; } /* jne: not equal / not zero */

    g_seh_ebp = ebp; sub_001CF786(); return; /* fallthrough 0x001CF786 */

}

/**
 * sub_001CF786
 * Original: 0x001CF786 - 0x001CF7B3 (45 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF786(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF786: ;
    MEM32(ebp + -4) = 0x276D;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    POP32(esp, edi);
    MEM32(0x97019C) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7AB; /* je: equal / zero */

loc_001CF79A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7AB; /* je: equal / zero */

loc_001CF79F: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001CF7A7u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CF7A7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CF7AB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF78D
 * Original: 0x001CF78D - 0x001CF7B3 (38 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF78D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF78D: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), ebx (32-bit) */
    POP32(esp, edi);
    MEM32(0x97019C) = ebx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7AB; /* je: equal / zero */

loc_001CF79A: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF7AB; /* je: equal / zero */

loc_001CF79F: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0x001CF7A7u); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CF7A7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001CF7AB: ;
    eax = MEM32(ebp + -4);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF7B3
 * Original: 0x001CF7B3 - 0x001CF7BB (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF7B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF7B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0xD30) = LO16(eax);

    g_seh_ebp = ebp; sub_001CF7BB(); return; /* fallthrough 0x001CF7BB */

}

/**
 * sub_001CF7BB
 * Original: 0x001CF7BB - 0x001CF7F3 (56 bytes, 15 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF7BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF7BB: ;
    eax = ZX16(MEM16(esi + 0xD32));
    ecx = ZX16(MEM16(esi + 0xD30));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001CF78D(); return; } /* jne: not equal / not zero */

loc_001CF7CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CF7D6u); RECOMP_ABI_CALL(0x001DFFC3u, sub_001DFFC3); /* call 0x001DFFC3 */

loc_001CF7D6: ;
    PUSH32(esp, MEM32(esi + 0xD48));
    PUSH32(esp, 0x001CF7E1u); RECOMP_ABI_CALL(0x001DFC1Bu, sub_001DFC1B); /* call 0x001DFC1B */

loc_001CF7E1: ;
    ecx = esi;
    PUSH32(esp, 0x001CF7E8u); RECOMP_ABI_CALL(0x001D2065u, sub_001D2065); /* call 0x001D2065 */

loc_001CF7E8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(0x22BCD0); PUSH32(esp, 0x001CF7EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF7E9u); } /* indirect call */
    }

loc_001CF7EF: ;
    MEM32(edi) = ebx;
    g_seh_ebp = ebp; sub_001CF78D(); return; /* tail jmp 0x001CF78D */

}

/**
 * sub_001CF7F3
 * Original: 0x001CF7F3 - 0x001CF800 (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF7F3(void)
{

loc_001CF7F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9701A0);
    PUSH32(esp, 0x001CF7FFu); RECOMP_ABI_CALL(0x001CF720u, sub_001CF720); /* call 0x001CF720 */

loc_001CF7FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF800
 * Original: 0x001CF800 - 0x001CF80D (13 bytes, 4 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF800(void)
{

loc_001CF800: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x9701A0);
    PUSH32(esp, 0x001CF80Cu); RECOMP_ABI_CALL(0x001CF720u, sub_001CF720); /* call 0x001CF720 */

loc_001CF80C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF80D
 * Original: 0x001CF80D - 0x001CF828 (27 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF80D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF80D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = edx;
    MEM32(ebp + -8) = ecx;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF85D
 * Original: 0x001CF85D - 0x001CF876 (25 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF85D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF85D: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF873; /* je: equal / zero */

loc_001CF867: ;
    ecx = MEM32(esp + 4);

loc_001CF86B: ;
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF86B; /* jne: not equal / not zero */

loc_001CF873: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CF876
 * Original: 0x001CF876 - 0x001CF8E0 (106 bytes, 46 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF876(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF876: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001CF8DC; /* jbe: below or equal (unsigned <=) */

loc_001CF87F: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_001CF885: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF8D9; /* je: equal / zero */

loc_001CF88F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    esi = MEM32(edx + 4);
    eax = MEM32(edx);
    if (CMP_BE(_fa, _fb)) goto loc_001CF8AB; /* jbe: below or equal (unsigned <=) */

loc_001CF89A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    ecx = MEM32(ebp + 0x10);
    if (CMP_B(_fa, _fb)) goto loc_001CF8A4; /* jb: below (unsigned <) */

loc_001CF8A2: ;
    ecx = eax;

loc_001CF8A4: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CF8AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001CF8D0; /* jbe: below or equal (unsigned <=) */

loc_001CF8AF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001CF8B7; /* jae: above or equal (unsigned >=) */

loc_001CF8B4: ;
    eax = MEM32(ebp + 0x18);

loc_001CF8B7: ;
    edi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - eax;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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

loc_001CF8D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CF885; /* ja: above (unsigned >) */

loc_001CF8D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CF8DC: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001CF8E0
 * Original: 0x001CF8E0 - 0x001CF8E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF8E0: ;
    g_seh_ebp = ebp; sub_000ADC4C(); return; /* tail jmp 0x000ADC4C */

}

/**
 * sub_001CF8E5
 * Original: 0x001CF8E5 - 0x001CF8EA (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF8E5: ;
    g_seh_ebp = ebp; sub_000ADC74(); return; /* tail jmp 0x000ADC74 */

}

/**
 * sub_001CF8EA
 * Original: 0x001CF8EA - 0x001CF8F7 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8EA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF8EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF8F6u); RECOMP_ABI_CALL(0x000AD49Bu, sub_000AD49B); /* call 0x000AD49B */

loc_001CF8F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF8F7
 * Original: 0x001CF8F7 - 0x001CF8FC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8F7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF8F7: ;
    g_seh_ebp = ebp; sub_000AA2B8(); return; /* tail jmp 0x000AA2B8 */

}

/**
 * sub_001CF8FC
 * Original: 0x001CF8FC - 0x001CF901 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF8FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF8FC: ;
    g_seh_ebp = ebp; sub_000AD558(); return; /* tail jmp 0x000AD558 */

}

/**
 * sub_001CF901
 * Original: 0x001CF901 - 0x001CF906 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF901: ;
    g_seh_ebp = ebp; sub_000AD578(); return; /* tail jmp 0x000AD578 */

}

/**
 * sub_001CF906
 * Original: 0x001CF906 - 0x001CF90F (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF906(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_001CF906: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_000AD7F2(); return; /* tail jmp 0x000AD7F2 */

}

/**
 * sub_001CF90F
 * Original: 0x001CF90F - 0x001CF93A (43 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF90F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF90F: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001CF930; /* je: equal / zero */

loc_001CF91C: ;
    ecx = ecx + eax * 4 + 4;

loc_001CF920: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF935; /* je: equal / zero */

loc_001CF92C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF920; /* jne: not equal / not zero */

loc_001CF930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CF932: ;
    esp += 12; return; /* ret 8 */

loc_001CF935: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001CF932;

}

/**
 * sub_001CF93A
 * Original: 0x001CF93A - 0x001CF96B (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CF93A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF93A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF980(); return; } /* je: equal / zero */

loc_001CF945: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF980(); return; } /* je: equal / zero */

loc_001CF94A: ;
    eax = esi + 8;
    MEM32(ebp + 8) = eax;
    eax = 0x2B434F53;
    ecx = MEM32(ebp + 8);
    edx = 0x2A434F53;
    { uint32_t _cmp = eax;
      uint32_t _old = RECOMP_ATOMIC_CAS32(XBOX_PTR(ecx), _cmp, edx);
      _fa = _old; _fb = _cmp;
      _fas = (int32_t)_fa; _fbs = (int32_t)_fb;
      if (_old != _cmp) eax = _old; }  /* cmpxchg */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B434F53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2B434F53 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_001CF96B(); return; } /* jne: not equal / not zero */

loc_001CF967: ;
    eax = esi;
    g_seh_ebp = ebp; sub_001CF98D(); return; /* tail jmp 0x001CF98D */

}

/**
 * sub_001CF96B
 * Original: 0x001CF96B - 0x001CF980 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF96B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF96B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A434F53) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2A434F53 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x2734;
    eax = ecx;
    g_seh_ebp = ebp; sub_001CF985(); return; /* tail jmp 0x001CF985 */

}

/**
 * sub_001CF980
 * Original: 0x001CF980 - 0x001CF98D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CF980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF980: ;
    eax = 0x2736;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF98Bu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CF98B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CF98D(); return; /* fallthrough 0x001CF98D */

}

/**
 * sub_001CF985
 * Original: 0x001CF985 - 0x001CF98D (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CF985(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CF985: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF98Bu); RECOMP_ABI_CALL(0x000ADC74u, sub_000ADC74); /* call 0x000ADC74 */

loc_001CF98B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_001CF98D(); return; /* fallthrough 0x001CF98D */

}
