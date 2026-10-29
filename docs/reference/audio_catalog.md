# audio_catalog

Historical reverse-engineering reference; current source and project memory take precedence.

```text
/* ════════════════════════════════════════════════════════════════════════
 * audio_catalog.h -- MAP of the DOA1U audio pipeline (BGM + voice + SFX).
 *
 * See fighters_catalog.h for the format contract (catalog, not moved code;
 * keyed off sub_<VA>; "?" = provisional; survives re-lift).
 *
 * IMPORTANT FINDING -- VOICE IS NOT A SEPARATE CODE PATH.
 *   DOA1U plays BGM, character voice, and SFX through the SAME CRI ADX engine
 *   (ADX/ADPCM, the 0x00100000-0x0011FFFF library band). "Voices" differ only
 *   in which bank/channel the game SOUND-MANAGER layer selects -- there is no
 *   distinct voice subsystem to extract. So a separate voices.c driver would
 *   call the same functions below with voice banks; it is a driver-layer split,
 *   not a code split. (This mirrors the loaders: one engine, typed by caller.)
 *
 * TWO LAYERS
 *   (A) game SOUND MANAGER  -- 0x0004F000-0x00051FFF (recomp_0006): the API the
 *       game/driver calls (play/stop/BGM/voice/loop/control + the per-frame
 *       audio server pump). This is what fighters/background/menus invoke.
 *   (B) CRI ADX library     -- 0x00106000-0x0010Bxxx: decode/mixer/voice-alloc
 *       internals. High fan-in; treat as a shared engine, do not hand-drive.
 *
 * Exhaustive member list (224 pipeline + 51 shared, depth 3):
 *   tools/catalog_data/audio.txt -- regenerate with:
 *     python tools/callgraph.py catalog 000301F0,0004FC30,000501E5,00050790,00051B70,000509F0,00050033 3
 * ════════════════════════════════════════════════════════════════════════ */
#ifndef DOA1U_AUDIO_CATALOG_H
#define DOA1U_AUDIO_CATALOG_H

/* ---- LAYER A: GAME SOUND MANAGER (the driver-facing API) ---------------
 *  CONFIRMED by the RECOMP_AUDIO_TRACE run (iter-31, audio.c shadows):
 *  snd_play_core            sub_0004F050  *** THE PLAYBACK DISPATCHER ***:
 *                                         snd_play_core(cueId, type). Attract
 *                                         fired discrete cues 9(type1), 6(type1),
 *                                         0(type2) = the real sounds. Single best
 *                                         point to see/drive "what plays". (arg3+
 *                                         in a raw g_esp read = caller stack noise.)
 *  start_stage_bgm          sub_000301F0  start_stage_bgm(ctxPtr): sets up the BGM
 *                                         sound-context (seen as 0x014500AC) then
 *                                         feeds snd_play_core. Called once at start.
 *  snd_audio_service        sub_000501E5  per-frame AUDIO SERVICE pump (~44/sec on
 *                                         a fixed handle, arg4=-1). NOT a play
 *                                         entry -- the "snd_play_ex" guess was
 *                                         WRONG; the trace corrected it.
 *  snd_play                 sub_0004FC30  called once at setup (ptr arg); funnels
 *                                         toward snd_play_core. Role TBD.
 *  ? snd_play_simple        sub_00050790  (not seen firing in attract)
 *  ? snd_oneshot            sub_000509F0  (not seen firing in attract)
 *  ? snd_ctl                sub_00050033  (control; not seen firing in attract)
 *  ? snd_server_pump        sub_00051B70  calls pump_task + 9 audio -> per-frame
 *                                         audio SERVER tick (the ADXM worker the
 *                                         ADX_YIELD flag targets; contends main-
 *                                         thread lock 0x009A4D00 -> match hang).
 *  ? snd_bank_setup         sub_0004EA40  (4 callees) bank/handle setup.
 *
 * ---- LAYER B: CRI ADX ENGINE (shared; drive only via Layer A) -----------
 *  ? adx_mixer_main         sub_001082C0  10 audio calls = mixer dispatch.
 *  ? adx_mixer_main2        sub_00108560  12 audio calls.
 *  ? adx_voice_dispatch     sub_00108AA0  19 audio calls = voice/channel fan-out.
 *  ? adx_decode_a           sub_001071C0  (fanin 13) decode/step.
 *  ? adx_decode_b           sub_00107240  (fanin 13)
 *  ? adx_stream_pump        sub_00107720  (fanin 10)
 *  ? adx_server_entry       sub_0010BA40  (fanin 64) top engine entry.
 *    (full 0x106xxx-0x10Bxxx set in tools/catalog_data/audio.txt)
 *
 * ---- LOADING ----------------------------------------------------------
 *  Audio banks are read via the SHARED disk path (loaders_catalog.h:
 *  build_asset_filename -> load_file_blocking), typed for audio assets. There
 *  is no separate audio-only disk reader to extract.
 *
 * ---- KEY STATE --------------------------------------------------------
 *    ADXM server lock  0x009A4D00  (main thread contends this with snd_server_pump)
 *    stage             DAT_0030F914  (selects BGM track)
 *  Runtime flag: RECOMP_ADX_YIELD=1 (baked in main.c) yields in the ADX worker
 *  spin so it stops starving the main thread -- see project_doa1u_next_steps #5.
 * ──────────────────────────────────────────────────────────────────────── */

#endif /* DOA1U_AUDIO_CATALOG_H */

```
