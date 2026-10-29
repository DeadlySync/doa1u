/* Diagnostic vertex, matrix and display-list probes; excluded from release builds. */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

#include "common/guest_runtime.h"
#include "common/diagnostics.h"

/* set by draw_fighter (fighter_isolation.c) around a fighter's draw submit */
extern int g_in_fighter_draw;

/* Inspect vertex-copy count/stride descriptors and caller-frame pointers before the original scatter-copy. */
extern void sub_00166367_gen(void);

// FUN_00166367  (d3d8_vertex_scatter_copy) -- PROBE
void d3d_vertexcopy_probe(void)
{
    static int n;
    uint32_t ebp = g_seh_ebp;
    if (n < 24 && gmem_ok(ebp)) 
    {
        uint32_t desc  = GMEM32(ebp - 16);
        uint32_t outer = GMEM32(ebp - 8);
        uint32_t inner = GMEM32(ebp - 4);
        uint32_t src   = GMEM32(ebp + 8);
        uint32_t dst   = GMEM32(ebp + 0x10);
        uint32_t s0=0,s1=0,s2=0,s3=0;
        n++;

        if (gmem_ok(desc)) 
        { 
            s0=GMEM32(desc); 
            s1=GMEM32(desc+4);
            s2=GMEM32(desc+8); 
            s3=GMEM32(desc+0xC); 
        }

        fprintf(stderr,
            "[D3DCOPY] #%d ebp=%08X desc=%08X outer=%08X inner=%08X "
            "src=%08X dst=%08X desc[0..3]=%08X %08X %08X %08X\n",
            n, ebp, desc, outer, inner, src, dst, s0, s1, s2, s3);
        fflush(stderr);
    }
    sub_00166367_gen();
}
void sub_00166367(void) { d3d_vertexcopy_probe(); }   /* dispatch/caller symbol */

/* Find the COMPUTATION site of the squashed fighter matrix ("detached pieces" artifact). 
The four matrix-emit routines are reached by statically-resolved DIRECT calls, 
so recomp_lookup_manual() never sees them. */
extern void sub_0016AD00_gen(void);   /* generated transpose-copy body */
extern void sub_00171600_gen(void);   /* generated transform-flush body */

static float emit_gmf(uint32_t va) 
{ 
    uint32_t u = GMEM32(va); 
    float f; 
    memcpy(&f, &u, 4); 
    return f; 
}

static void emit_dump_mat(const char *tag, uint32_t p)
{
    int r;
    if (!gmem_ok(p) || !gmem_ok(p + 0x3Cu)) 
    { 
        fprintf(stderr, "[EMIT]   %s @%08X <unmapped>\n", tag, p); 
        return; 
    }

    for (r = 0; r < 4; r++)
        fprintf(stderr, "[EMIT]   %s r%d % .4f % .4f % .4f % .4f\n", tag, r,
                emit_gmf(p + (uint32_t)(r * 16) + 0), emit_gmf(p + (uint32_t)(r * 16) + 4),
                emit_gmf(p + (uint32_t)(r * 16) + 8), emit_gmf(p + (uint32_t)(r * 16) + 12));
}

/* 1 if the 16-float matrix at guest `p` (row-major) has the squash
 * fingerprint. Fills rows[0..2] with |basis row i| (i.e. per-axis scale). */
static int emit_mat_squashed(uint32_t p, float rows[3])
{
    int i, hi = 0, lo = 0;

    if (!gmem_ok(p) || !gmem_ok(p + 0x3Cu)) 
        return 0;

    for (i = 0; i < 3; i++) 
    {
        float a = emit_gmf(p + (uint32_t)(i * 16) + 0);
        float b = emit_gmf(p + (uint32_t)(i * 16) + 4);
        float c = emit_gmf(p + (uint32_t)(i * 16) + 8);
        float m = (float)sqrt((double)(a * a + b * b + c * c));

        /* Gate for "Not a Number" values */
        if (!(m == m) || m > 1e6f) 
            return 0;

        /* a healthy axis present */
        rows[i] = m;
        if (m >= 0.75f && m <= 8.0f) 
            hi = 1;

        /* a collapsed axis present */
        if (m > 0.001f && m < 0.75f) 
            lo = 1;
    }

    return hi && lo;
}

/* Classify the 16-float matrix at guest `p` (row-major). 
Fills rows[0..2] with |basis row i| (per-axis scale). */
static int emit_mat_class(uint32_t p, float rows[3])
{
    int i, hi = 0, lo = 0, weird = 0;
    rows[0] = rows[1] = rows[2] = 0.0f;

    if (!gmem_ok(p) || !gmem_ok(p + 0x3Cu)) 
        return 0;

    for (i = 0; i < 16; i++) 
    {
        float f = emit_gmf(p + (uint32_t)(i * 4));
        if (!(f == f) || f > 1e30f || f < -1e30f) 
            return 2;   /* NaN / Inf */
    }

    for (i = 0; i < 3; i++) 
    {
        float a = emit_gmf(p + (uint32_t)(i * 16) + 0);
        float b = emit_gmf(p + (uint32_t)(i * 16) + 4);
        float c = emit_gmf(p + (uint32_t)(i * 16) + 8);
        float m = (float)sqrt((double)(a * a + b * b + c * c));
        rows[i] = m;

        if (m >= 0.5f && m <= 2.0f) hi = 1;              /* a healthy axis */
        if (m > 0.001f && m < 0.75f) lo = 1;             /* a collapsed axis */
        if (m < 0.5f || m > 2.0f) weird = 1;             /* an off-scale axis */
    }

    if (hi && lo) return 1;   /* SQUASH */
    if (weird)    return 3;   /* WEIRD  */
    return 0;                 /* HEALTHY */
}

/* matrix_transpose_copy(dest, method_header, src): shadow over the matrix
 * transpose-copy choke point. All matrix emits funnel here; 
 * log the squashed ones + caller. */
// FUN_0016AD00  (matrix_transpose_copy) -- EMIT PROBE
void matrix_emit_probe(void)
{
    static int budget = -1, nseen = 0;
    if (budget < 0) 
    { 
        const char *e = getenv("RECOMP_EMIT_PROBE"); 
        budget = e ? atoi(e) : 0; 
    }

    if (budget > 0) 
    {
        uint32_t caller = GMEM32(g_esp);              /* synthetic guest ret VA = inside the emitter */
        uint32_t method = GMEM32(g_esp + 8);
        uint32_t src    = GMEM32(g_esp + 0xC);

        /* first few of ANY method, to confirm we are reached + see the mix */
        if (nseen < 6) 
        { 
            nseen++;
            fprintf(stderr, "[AD00] #%d caller=%08X method=%08X src=%08X\n", nseen, caller, method, src);
            fflush(stderr); 
        }

        if (method == 0x400480u || method == 0x400680u) 
        {
            float rows[3];
            if (emit_mat_squashed(src, rows)) 
            {
                int r;
                budget--;
                fprintf(stderr, "[EMIT] SQUASH caller=%08X method=%08X src=%08X |rows|=%.3f %.3f %.3f\n",
                        caller, method, src, rows[0], rows[1], rows[2]);

                for (r = 0; r < 4; r++)
                {
                    fprintf(stderr, "[EMIT]   row%d % .4f % .4f % .4f % .4f\n", r,
                        emit_gmf(src + (uint32_t)(r * 16) + 0), emit_gmf(src + (uint32_t)(r * 16) + 4),
                        emit_gmf(src + (uint32_t)(r * 16) + 8), emit_gmf(src + (uint32_t)(r * 16) + 12));
                }
                fflush(stderr);
            }
        }
    }
    sub_0016AD00_gen();
}
void sub_0016AD00(void) { matrix_emit_probe(); }   /* dispatch/caller symbol */

/* transform_flush(device, ...): the transform-flush that computes model-view =
 * world(device+0xDE0) x view(device+0xC60) and composite = modelview x
 * proj(device+0x980), each via the verified-correct multiply sub_0016B900.
 * When the WORLD matrix is already squashed on entry, the defect is upstream
 * (the game's SetTransform(WORLD) / animation), not the D3D fold. Log world +
 * view + the CALLER (per-object render site one frame up) to localise it. */
// FUN_00171600  (transform_flush) -- EMIT PROBE
void transform_flush_probe(void)
{
    uint32_t dev    = GMEM32(g_esp + 4);        /* param1 = device (cdecl)     */
    uint32_t caller = GMEM32(g_esp);            /* per-object render caller VA */
    uint32_t world  = dev + 0xDE0u;
    uint32_t view   = dev + 0xC60u;

    /* UNCONDITIONAL fighter-part WORLD dump (RECOMP_WORLD_DUMP=N). */
    {
        static int wdump = -1;
        if (wdump < 0) 
        { 
            const char *e = getenv("RECOMP_WORLD_DUMP"); 
            wdump = e ? atoi(e) : 0; 
        }

        if (wdump > 0 && g_in_fighter_draw > 0 && gmem_ok(dev)) 
        {
            wdump--;
            fprintf(stderr, "[WORLD] fighter-part caller=%08X dev=%08X\n", caller, dev);
            emit_dump_mat("W", world);
            fflush(stderr);
        }
    }

    {
        static int budget = -1;
        if (budget < 0) 
        { 
            const char *e = getenv("RECOMP_EMIT_PROBE"); 
            budget = e ? atoi(e) : 0; 
        }

        if (budget > 0) 
        {
            float wr[3];
            int cls = gmem_ok(dev) ? emit_mat_class(world, wr) : 0;

            /* squash / NaN / weird -- the broken fighter world in any form */
            if (cls != 0) 
            {
                static const char *NAMES[4] = { "HEALTHY", "SQUASH", "NAN", "WEIRD" };
                budget--;
                fprintf(stderr, "[EMIT] WORLD-%s caller=%08X dev=%08X |world rows|=%.3f %.3f %.3f\n", NAMES[cls], caller, dev, wr[0], wr[1], wr[2]);
                
                emit_dump_mat("WORLD", world);
                emit_dump_mat("VIEW ", view);

                fprintf(stderr, "[EMIT]   world slot guest VA = %08X\n", world);
                fflush(stderr);

                #if defined(_MSC_VER)
                /* RECOMP_EMIT_PROBE_BREAK=1: trap into cdb exactly at the fight so a
                 * hardware write-breakpoint can be armed on the 0x902800 scratch
                 * source to catch the upstream WORLD composer. Gated to cls==1*/
                { 
                    const char *b = getenv("RECOMP_EMIT_PROBE_BREAK");
                    static int broke = 0;
                    if (cls == 1 && b && b[0] == '1' && !broke) 
                    { 
                        broke = 1; 
                        __debugbreak(); 
                    } 
                }
                #endif
            }
        }
    }
    sub_00171600_gen();
}
void sub_00171600(void) { transform_flush_probe(); }   /* dispatch/caller symbol */

/* iter-55 character-draw probe. Called at the top of sub_00065000 (the per-model submit; __fastcall ecx = model base). */
void recomp_char_draw_probe(void)
{
    static int done, lines, charseen;
    static int have_prev;
    static uint32_t p_model, p_dc, p_vc;
    uint32_t model, dc, vc;
    int is_char;

    if (done)
        return;

    model = g_ecx;                 /* fastcall arg0: model base, read before the body clobbers ecx */
    dc = GMEM32(0x6EED70);         /* per-frame draw-call count   */
    vc = GMEM32(0x6EED74);         /* accumulated vtx/prim count  */
    is_char = (model >= 0x81760000u && model < 0x81770000u);

    /* dc >= p_dc: still the same frame (not a per-frame reset) */
    if (have_prev && dc >= p_dc) 
    { 
        fprintf(stderr, "[CHARDRAW] 0x%08X %-5s draws+%u verts+%u\n", p_model,
                (p_model >= 0x81760000u && p_model < 0x81770000u) ? "CHAR" : "stage", dc - p_dc, vc - p_vc);
    }
    p_model = model; p_dc = dc; p_vc = vc; have_prev = 1;

    if (is_char && charseen < 6) 
    {
        uint32_t vb = GMEM32(model + 0x14);
        charseen++;
        fprintf(stderr, "[CHARDRAW] == CHAR 0x%08X  +14(vb)=0x%08X +1C(idx)=0x%08X +24=0x%08X +60=0x%08X +68=0x%08X\n",
                model, vb, GMEM32(model + 0x1C), GMEM32(model + 0x24),
                GMEM32(model + 0x60), GMEM32(model + 0x68));

        if (vb >= 0x10000u)
            fprintf(stderr, "[CHARDRAW]    vb@0x%08X: %08X %08X %08X %08X %08X %08X\n",
                    vb, GMEM32(vb), GMEM32(vb + 4), GMEM32(vb + 8),
                    GMEM32(vb + 0xC), GMEM32(vb + 0x10), GMEM32(vb + 0x14));
    }

    if (++lines >= 600) 
    {
        done = 1;
        fprintf(stderr, "[CHARDRAW] capture complete (%d submits)\n", lines);
    }

    fflush(stderr);
}

/* Report malformed display-list records and cursor/stack state. The generated guard handles control flow. */
void recomp_dl_badptr(uint32_t entry_base, uint32_t bad_record_ptr)
{
    static uint64_t hits;
    uint64_t n;

    hits++;
    n = hits;
    while (n >= 10 && n % 10 == 0)
        n /= 10;

    if (n != 1)
        return;

    fprintf(stderr, "[DL-GUARD] corrupted display-list entry: slot 0x%08X (entry_base 0x%08X) holds record-ptr 0x%08X (expected >=0x10000); "
                    "skipping entry to avoid walk spin -- hit %llu time(s). field-watch 0x%08X to find the writer.\n", entry_base + 0x10, entry_base, bad_record_ptr,
                    (unsigned long long)hits, entry_base + 0x10);

    /* dump the display-list header globals so the real corrupt field
     * (and its FIXED address, for field-watch) is named. */
    fprintf(stderr, "[DL-GUARD] header: cnt(0x779200)=0x%08X src(0x779204)=0x%08X "
                    "END(0x779208)=0x%08X tail(0x77920C)=0x%08X base(0x779210)=0x%08X\n",
            GMEM32(0x779200), GMEM32(0x779204), GMEM32(0x779208),
            GMEM32(0x77920C), GMEM32(0x779210));

    fprintf(stderr, "[DL-GUARD] entry0@0x779210: %08X %08X %08X %08X %08X  "
                    "entry1@0x779224: %08X %08X %08X %08X %08X\n",
            GMEM32(0x779210), GMEM32(0x779214), GMEM32(0x779218),
            GMEM32(0x77921C), GMEM32(0x779220),
            GMEM32(0x779224), GMEM32(0x779228), GMEM32(0x77922C),
            GMEM32(0x779230), GMEM32(0x779234));

    fprintf(stderr, "[DL-GUARD] regs: esp=0x%08X ebp=0x%08X esi=0x%08X eax=0x%08X "
                    "ebx=0x%08X  [esp+0x14]=0x%08X\n",
            g_esp, g_ebp, g_esi, g_eax, g_ebx, GMEM32(g_esp + 0x14));

    fprintf(stderr, "[DL-GUARD] stack @esp: %08X %08X %08X %08X %08X %08X %08X %08X\n",
            GMEM32(g_esp + 0x00), GMEM32(g_esp + 0x04), GMEM32(g_esp + 0x08),
            GMEM32(g_esp + 0x0C), GMEM32(g_esp + 0x10), GMEM32(g_esp + 0x14),
            GMEM32(g_esp + 0x18), GMEM32(g_esp + 0x1C));

    fflush(stderr);
}

/* per-walk inner-record esp trace counter */
static int s_dl_trace;

/* called at the top of the display-list inner-record head (sub_00067F53 loc_00067F53), 
 * BEFORE the guard. Logs guest esp per record so the 0x18 esp
 * LEAK that shifts the [esp+0x14] cursor read localizes to the opcode handler. */
void recomp_dl_trace(void)
{
    if (s_dl_trace >= 40)
        return;

    s_dl_trace++;
    fprintf(stderr, "[DL-TRACE] rec#%d: esp=0x%08X ebp=0x%08X ebx=0x%08X opcode=%s0x%08X\n",
            s_dl_trace, g_esp, g_ebp, g_ebx,
            (g_ebx >= 0x10000u) ? "" : "(wild)",
            (g_ebx >= 0x10000u) ? GMEM32(g_ebx) : g_ebx);
    fflush(stderr);
}

/* esp probe bracketing the opcode-1 handler calls to name the nested
 * callee that leaks 0x18 of guest esp. Gated to the first few records of a walk. */
void recomp_dl_esp(int site)
{
    if (s_dl_trace < 1 || s_dl_trace > 3)
        return;

    fprintf(stderr, "[DL-ESP] site %d: esp=0x%08X\n", site, g_esp);
    fflush(stderr);
}

/* called at the display-list walk START with the initial cursor. 
 * A cursor < 0x10000 here means esi was clobbered UPSTREAM of the walk, 
 * not mid-walk. Also resets the per-walk esp trace. 
 * Throttled like recomp_dl_badptr. */
void recomp_dl_cursor_check(uint32_t cursor, uint32_t end)
{
    static uint64_t hits;
    static uint64_t starts;
    uint64_t n;

    /* reset per-walk esp trace */
    s_dl_trace = 0;
    
    /* non-empty list -> this walk actually iterates (State A) */
    if (cursor != end) 
    {
        starts++;
        {
            uint64_t s = starts;
            while (s >= 10 && s % 10 == 0) 
                s /= 10;

            if (s == 1)
                fprintf(stderr, "[DL-START] NON-EMPTY walk start #%llu: esp=0x%08X ebp=0x%08X cursor=0x%08X end=0x%08X\n",
                        (unsigned long long)starts, g_esp, g_ebp, cursor, end);

            fflush(stderr);
        }
    }

    if (cursor >= 0x10000u)
        return;   /* normal: real base pointer */

    hits++;
    n = hits;
    while (n >= 10 && n % 10 == 0)
        n /= 10;

    if (n != 1)
        return;

    fprintf(stderr, "[DL-CURSOR] walk START cursor already bad: cursor=0x%08X end=0x%08X esi=0x%08X esp=0x%08X -- esi clobbered UPSTREAM "
                    "of the walk (hit %llu).\n", cursor, end, g_esi, g_esp, (unsigned long long)hits);
    fflush(stderr);
}
