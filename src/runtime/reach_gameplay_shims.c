/* Guest audio/GPU busy-wait adapters; functional runtime fixes, not probes. */
#include <stdlib.h>
#ifdef _WIN32
#  include <windows.h>
#endif

/* Reach-gameplay audio-spin shim (TEMPORARY, roadmap #5)  sub_001B1384 is a per-frame DSOUND/APU update reached from the frame driver (sub_00053020 -> sub_0004E930 -> ... -> sub_001B1384). */
int recomp_audio_spin_shim(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_AUDIO_SPIN_SHIM");
        on = e && *e && *e != '0';   /* default OFF unless explicitly enabled */
    }
    return on;
}

/* GPU busy-wait shim -- the MATCH-render hang (Bug B / roadmap #3). At a 3D match the render walk reaches sub_0016B2E4, which kicks a GPU op by setting bit 0x10000 at an NV2A status register (device[0x1C28] + 0x100410, in the WC/GPU aperture) and busy-waits at loc_0016B310 for the hardware to clear it. */
int recomp_gpu_busywait_shim(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_GPU_BUSYWAIT_SHIM");
        on = e && *e && *e != '0';   /* default OFF unless explicitly enabled */
    }
    return on;
}

/* ADX shutdown polling needs a host yield to avoid starving guest/render threads. */
void recomp_adx_worker_yield(void)
{
    static int on = -1;
    if (on < 0) {
        const char *e = getenv("RECOMP_ADX_YIELD");
        on = e && *e && *e != '0';   /* default OFF unless explicitly enabled */
    }
#ifdef _WIN32
    if (on) Sleep(1);
#endif
}
