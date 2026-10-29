/* Asset-loading shadows and opt-in load tracing. */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "game/game_driver.h"
#include "render/d3d11/texture_cache.h"

extern void sub_00027AD0_gen(void);   /* load_file_blocking   */
extern void sub_00030CB0_gen(void);   /* build_asset_filename */
extern void sub_00028630_gen(void);   /* bind_fighter_slot    */
extern void sub_00032650_gen(void);

/* Original selects the next opponent and reloads artwork into a reused buffer. */
void prepare_next_opponent_card(void)
{
    sub_00032650_gen();
    renderer_invalidate_textures();
}
void sub_00032650(void) { prepare_next_opponent_card(); }

static int load_trace(void)
{
    static int v = -1;
    if (v < 0) {
        const char* e = getenv("RECOMP_LOAD_TRACE");
        v = (e && *e && *e != '0');
    }

    return v;
}

/* Copy a NUL-terminated guest string (max-1 bytes) into buf; returns buf.
 * Guards the pointer so a garbage arg logs "<bad:VA>" instead of faulting. */
static const char *gmem_str(uint32_t va, char *buf, int max)
{
    int i;
    if (!gmem_ok(va)) { 
        snprintf(buf, max, "<bad:0x%08X>", va); 
        return buf; 
    }

    for (i = 0; i < max - 1; i++) {
        uint8_t c = GMEM8(va + (uint32_t)i);
        if (c == 0) 
            break;

        buf[i] = (c >= 0x20 && c < 0x7F) ? (char)c : '.';
    }

    buf[i] = 0;
    return buf;
}

// FUN_00027AD0  load_file_blocking(cap, nameBuf, destPtr, flags) -- disk read
void load_file_blocking(void)
{
    if (load_trace()) {
        uint32_t cap   = GMEM32(g_esp + 4);
        uint32_t name  = GMEM32(g_esp + 8);
        uint32_t dest  = GMEM32(g_esp + 12);
        uint32_t flags = GMEM32(g_esp + 16);
        char nm[64];

        fprintf(stderr, "[LOAD] read \"%s\" dest=0x%08X cap=0x%X flags=0x%X\n",
                gmem_str(name, nm, sizeof nm), dest, cap, flags);
        fflush(stderr);
    }
    sub_00027AD0_gen();
}
void sub_00027AD0(void) { load_file_blocking(); }

// FUN_00030CB0  build_asset_filename(charId, variant, type, outBuf)
void build_asset_filename(void)
{
    uint32_t charId = 0, variant = 0, type = 0, outBuf = 0;
    if (load_trace()) {
        charId  = GMEM32(g_esp + 4);
        variant = GMEM32(g_esp + 8);
        type    = GMEM32(g_esp + 12);
        outBuf  = GMEM32(g_esp + 16);
    }

    sub_00030CB0_gen();                 /* fills outBuf */
    if (load_trace()) {
        char nm[64];
        const char *tn = (type == 1) ? "model" : (type == 6) ? "stage" : "asset";
        fprintf(stderr, "[LOAD] name(char=%u variant=%u type=%u/%s) -> \"%s\"\n",
                charId, variant, type, tn, gmem_str(outBuf, nm, sizeof nm));
        fflush(stderr);
    }
}
void sub_00030CB0(void) { build_asset_filename(); }

// FUN_00028630  bind_fighter_slot(slot, blob)
void bind_fighter_slot(void)
{
    if (load_trace()) {
        uint32_t slot = GMEM32(g_esp + 4);
        uint32_t blob = GMEM32(g_esp + 8);
        fprintf(stderr, "[LOAD] bind slot=%u blob=0x%08X\n", slot, blob);
        fflush(stderr);
    }
    sub_00028630_gen();
}
void sub_00028630(void) { bind_fighter_slot(); }
