/* Original fighter movement and draw-context instrumentation. */
#include "common/guest_runtime.h"
#include <stdio.h>
#include <stdlib.h>

extern void sub_00042C50_gen(void);
extern void sub_000701B0_gen(void);

/* Read by optional world-matrix probes while a guest fighter draw runs. */
int g_in_fighter_draw = 0;

uintptr_t fighter_collision_root_access(uint32_t address, const char *file, unsigned line)
{
    static int enabled = -1;
    static struct { uint32_t value; const char *file; unsigned line; } last[2];
    static unsigned changes;
    unsigned player = address >= 0x30D9F8u;
    if (enabled < 0) {
        const char *path = getenv("RECOMP_COLLISION_TRACE");
        enabled = path && *path;
    }
    if (enabled && changes < 512) {
        uint32_t value = GMEM32(player ? 0x30DA00u : 0x30D9A8u);
        if (last[player].file && value != last[player].value) {
            /* Previous access in these TUs identifies a direct scalar store.
             * An uninstrumented writer can intervene: retain that caveat. */
            fprintf(stderr, "[COLLISION root] P%u %08X -> %08X previous_access=%s:%u observed_at=%s:%u\n",
                    player + 1, last[player].value, value,
                    last[player].file, last[player].line, file, line);
            ++changes;
        }
        last[player].value = value;
        last[player].file = file;
        last[player].line = line;
    }
    return (uintptr_t)address + g_xbox_mem_offset;
}

/* Opt-in raw guest-state evidence, not a gameplay correction. Fixed blocks keep
 * unknown throw-state fields available without guessing their interpretation.
 * Runs on the guest frame-end fiber and never writes guest memory/registers.
 * Format: 8-byte DOACOL01, then records of uint64 frame and the blocks below.
 * Windows/x86 little endian. Bounded to 7200 records (about 65 MiB). */
void fighter_collision_trace_frame(uint64_t frame)
{
    static int initialized;
    static FILE *out;
    static unsigned records;
    static const uint32_t blocks[][2] = {
        {0x30D9A0, 0xB0}, /* both fighter configurations, including root XYZ */
        {0x336E00, 0x400}, /* animation/action bookkeeping */
        {0x347E00, 0x2000}, /* motion scripts, offsets, movement state */
        {0x6E9A98, 0x10}, /* input edges */
        {0x6E9B48, 0x10}, /* held inputs */
        {0x30AE30, 0x10} /* scene/pause state */
    };
    unsigned i;
    if (!initialized) {
        const char *path = getenv("RECOMP_COLLISION_TRACE");
        initialized = 1;
        if (path && *path) {
            out = fopen(path, "wb");
            if (out && fwrite("DOACOL01", 1, 8, out) != 8) {
                fclose(out); out = NULL;
            }
            fprintf(stderr, "[COLLISION] trace %s: %s\n", out ? "enabled" : "failed", path);
        }
    }
    if (!out) return;
    if (fwrite(&frame, sizeof(frame), 1, out) != 1) goto failed;
    for (i = 0; i < sizeof(blocks) / sizeof(blocks[0]); ++i)
        if (fwrite(DOA1U_GUEST_PTR(blocks[i][0], const void), 1,
                   blocks[i][1], out) != blocks[i][1]) goto failed;
    /* Flush each record so the final recovery frames survive abnormal exits. */
    if (fflush(out) != 0) goto failed;
    if (++records == 7200) {
        fclose(out); out = NULL;
        fprintf(stderr, "[COLLISION] trace complete (7200 frames)\n");
    }
    return;
failed:
    fprintf(stderr, "[COLLISION] trace write failed\n");
    fclose(out); out = NULL;
}

void fighter_move_advance(void)
{
    sub_00042C50_gen();
}
void sub_00042C50(void) { fighter_move_advance(); }

void draw_fighter(void)
{
    g_in_fighter_draw++;
    sub_000701B0_gen();
    g_in_fighter_draw--;
}
void sub_000701B0(void) { draw_fighter(); }
