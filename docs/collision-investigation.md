# Training throw collision investigation — 2026-10-30

## User confirmation - 2026-10-31

User retested the deployed correction and confirmed: "that's it! it's fixed!"
Hayabusa Training Left+C wrong throw / subsequent sinking CLOSED for this
reproduction. Preserve the570E0 table-selector predicate correction. No new
build required. B2 vault, B3 stage collision and attract-mode B5 are NOT claimed
resolved by this confirmation; their connection remains unverified.

## 2026-10-31: CDB capture explains wrong throw; correction deployed

User proposed attaching CDB and tracing callers above animation load. Attached
to user-run Training; no game launch or input automation. First attach attempt
had command parsing/EOF failure and closed the game (reported to user). Second
interactive attach used `-pd` and a command file; finally detached using `qd`.
Use software breakpoints, not hardware action watchpoints: the latter interacted
poorly with the runtime's handled AV/single-step machinery. Ignore first-chance
AV/SSE notifications, not second-chance failures. TLS values must be evaluated
on the guest thread with `@@c++(doa1u_recomp!g_esp)`.

Captured setter stack: `535C0 <- 56B74 <- 56E50 <- 52230`. Guest ESP017F0054
contains `56BA0, 3F, 0, 0`: wrong action3F is already an input, not setter damage.
Second throw stopped at `53710 <- 56040 <- 56B74` with guest stack
`563F8, 0, 0`, while P1 actionDD/selector0/category5.
Log: XISO/captures/throw-cdb_6070_2026-10-31_10-24-50-348.log.
Selective config, move-table and throw-table dumps alongside it.

Original XBE 570D9 compares config+2B with1; 570E0 JNE skips XOR-player when
not equal. Generated split570D0 ->570E0 discards those flags; 570E0 initializes
`_flags=0`, so always executes the XOR. P1 selector0 incorrectly reads the P2
move table. Captured DD entry: correct P1 index5, incorrect P2 index33.
P1 throw lookup at6EA920: index5/mode0 isE9; index33/mode0 reads unrelated
data beyond the throw records and is3F. This explains the EXACT selected wrong
action and matches xemu's expected E9. No forced action or height reset patch.

Project-owned throw_move_lookup.c shadows570E0, recovering the original
predicate from unchanged config memory while preserving register/stack effects.
Generated definition renamed_gen; reapply_gen_edits.py preserves rename.
Offline production check covers131072 player/selector/action combinations,
scratch/callee register effects, guest ESP and captured-DD index regression.
PASS. Reapply dry-run has0MISSING; no unrelated pending patches applied.

Release built, EXE/PDB immediately copied toXISO; source/destination hashes match:
EXE 2D9822F2CD4C7E927D1F71C685A85FC2A2A438161D324F83434D54BCAE77B09E
PDB 5C5E5EB811D37DD9A51CCF0198CAF5A268F492F60366FCD8BAF83A2B2004DE5E
SDL3 unchanged2B4B128D8D510CC2D442693CF848C050D700D43DC667AFE9E5FD82B0570D667E.
User gameplay retest pending: same Left+C, correct throw animation and no sinking.
B2/B3/new attract B5 effects UNVERIFIED. No commit/push or INI edits.
General audit_source.py reports existing collision_watch.h diagnostic issues:
unused RECOMP_GENERATED_CODE/XBOX_PTR and late define line18. Not a clean audit
pass. Diagnostic OFF127/ON128 source configuration checks PASS.

## Reproduction confirmed by user

Hayabusa executes a throw using Left + C on the keyboard (C maps to Xbox X).
After the animation ends, positioning remains wrong until a jump restores both
fighters. Initial description as a forward high punch was superseded by this
confirmed throw input. Do not infer a move name yet.

## Evidence

Same-session RenderDoc captures in
`XISO/captures/training-dimming-27668-27605`:

- `training_frame995.rdc`: normal standing positions.
- `training_frame1397.rdc`: Hayabusa intersects the floor; opponent and camera
  composition are also displaced.

These prove the visible symptom, not the gameplay-state cause. GPU captures do
not contain the guest fighter state needed to identify the first bad update.
The apparent connection to earlier B2/B3 reports remains unproven.

## Static findings and hypotheses

- `fighter_move_advance` calls original `sub_00042C50_gen` without freezing it;
  the generated function's freeze comment is stale.
- `sub_00043400` updates fighter state unless paused, and invokes move advance
  and `sub_00042B50`. Follow-up action bookkeeping includes `0x336EE4`,
  `0x347F00`, `0x347F04`, and `0x348814` (16-bit per-player arrays).
- Animation-script handlers `0x410C6` and `0x410FB` set/clear the per-player
  `0x337178` flag and movement field `0x348818`. These are investigation targets,
  not verified throw-specific causes.
- `sub_00047E80` consumes animation offsets `0x348CC0..0x348CC8` (12-byte
  per-player stride), applies rotated horizontal displacement to fighter config
  +4/+12, and clears consumed horizontal offsets.
- Jump recovery suggests stale motion/position state, but does not establish
  whether collision, animation root motion, or camera state is responsible.
  Do not apply a floor clamp without identifying the bad transition.

## Next evidence collection

`tools/capture_collision.bat` enables read-only guest snapshots at frame end.
It does not launch automatically during development. User performs one normal
stance → throw → bad stance → jump recovery → normal stance sequence, then exits.
No INI changes, input injection, or guest-state corrections are performed.
The trace is opt-in via `RECOMP_COLLISION_TRACE` (output path), bounded to 7200
records. Startup frames count toward that bound.

Format: little-endian `DOACOL01` header, then repeated uint64 frame plus raw
blocks (VA, bytes): `(0x30D9A0,0xB0)`, `(0x336E00,0x400)`,
`(0x347E00,0x2000)`, `(0x6E9A98,0x10)`, `(0x6E9B48,0x10)`,
`(0x30AE30,0x10)`. Each record is flushed; partial writes are reported and stop
tracing. `tools/collision_trace.py state.bin` exports selected fields to CSV;
retain the binary for analysis of unknown fields. Compare both players before
and after throw completion and recovery; add narrower function-level probes
only if this does not locate the transition. No root cause or fix verified yet.

## Diagnostic validation/deployment

Release build passed; EXE and matching PDB deployed to XISO, SDL3 unchanged.
`check_collision_trace.py` compiles the actual hook offline and passes disabled
mode, snapshot contents, read-only sampled memory, sequential frames, 7200-frame
limit, and CSV export. Source selection check passed (126 sources, diagnostic OFF).
Live game not launched by agent; reproduction pending user.

- EXE SHA256: `CA680FCBBD56D3A2B1F9C7F8A35C89F90724A9C0B4D582061B9DFE9E7E72BC46`
- PDB SHA256: `A6C1F31D5A3ECE372F102D6F29EC49F2D3D3EBBD499D3C58C4C60B00D6E8B885`
- SDL3 SHA256: `2B4B128D8D510CC2D442693CF848C050D700D43DC667AFE9E5FD82B0570D667E`

## First CPU trace findings

`XISO/captures/collision-29810-672/state.bin`: 1558 complete records.
At frame 1113 P1 config height (`0x30D9A8`) changes from 1.0 to 0.0.
It stays zero through frame 1287, even while horizontal movement continues.
Jump rises from 0.084 at 1288 to 0.630 at 1301; frame 1302 snaps to 1.0.
P2 height remains 1.0 over this interval. This confirms CPU-side persistent
root-height displacement; it does not prove that collision flags caused it.
It also corrects the visual interpretation that both roots necessarily moved:
the opponent/camera composition can change without P2 root height changing.

Second-stage diagnostic: `collision_watch.h` is force-included only for guest
chunks 4 and 5 through CMake; no generated-file edits. It observes scalar
accesses to the two root-height addresses, logging changes and the preceding
access's file/line to run.err. A write outside these chunks could intervene, so
the preceding access is evidence, not automatically the writer. Disabled unless
the existing `RECOMP_COLLISION_TRACE` output path is set, at most 512 changes.
The same capture_collision.bat collects both snapshots and this provenance.
Needs one further reproduction to attribute the height write. No gameplay fix.

Second-stage Release build and source-selection/diff checks passed; deployed:

- EXE: `D71F0F568C7193CA564B0A9C230A52BF92E5414355EE515073986F464F6885C4`
- PDB: `AD3C2928EB18379D3024799424FC9269852332A02C6AB165D8EB50867CFAD710`
- SDL3 unchanged (hash above).

## Second CPU trace and expanded provenance

`XISO/captures/collision-31270-21081/state.bin`: 1559 records. P1 root Y
again drops from 1.0 to 0.0 (frame 1205), at X=-0.5170877576,
Z=-0.050783366. Jump recovery begins at frame 1337. P2 Y remains 1.0.
The initial provenance probe reports recomp_0005.c:14327 as preceding access,
but inspection identifies that as a READ in sub_00046662, not the writer.
The observation at line 19187 is another read in sub_00048870. Thus the
actual write escaped the initial two-chunk coverage; no cause is proven.

Expanded diagnostic force-includes collision_watch.h across all generated
translation units and observes accesses from config start through root Z,
including starting addresses used by potential block stores. No generated
sources are edited. Shared routine sub_00057CB0 (chunk 7) has original
arena-dependent root-height writes and is a candidate to observe, not an
established defect. Previous access remains evidence, not guaranteed writer.

Offline hook checks pass (disabled/enabled, read-only memory, snapshots,
7200-frame bound, CSV export), source selection passes, and diff check passes.
One more user reproduction with the same capture_collision.bat is needed.

Expanded Release build passed and EXE/matching PDB deployed immediately:
- EXE SHA256: `31F9FC84520F74E37F54101E65A5D9AF8BCC40158266CBB1CF76E8F4C352773A`
- PDB SHA256: `EE12AF2B97AD71700B589D35A9E70E1F4BC0FB468664D9FA33034EC4CFFB61ED`
- SDL3 build/deployment hashes match and are unchanged.

## Third CPU trace: writer identified

`XISO/captures/collision-89-1927/state.bin`: 1523 records. P1 root Y
changes 1.0 -> 0.0 at frame 1161. At frame 1160 the config has action
0x3F (+0x2A), category 0x0D (+0x2D), completion flag 1 (+0x35).
At frame 1161 it transitions to action 0x32/category 0x0C, flag zero.

Expanded provenance identifies recomp_0007.c:8449, a direct store in
sub_000552D0, original instruction VA 0x00055322: `mov [esi+8],ecx`.
ECX is explicitly zeroed at 0x5530E. This is no longer a nearby-read
inference: Capstone disassembly of XISO/Doa1.xbe confirms the original
instruction and branch predicates match the generated code. The write is
conditional on category 0x0D and action range 0x34..0x3F after completion
flag 1 (with the distinct 0x8C..0x93 exclusion). This capture meets them.
The earlier candidate sub_00057CB0 did NOT produce this height drop.

The jump path sub_00049D70 restores height 1 via the original landing
logic (and its training-mode branch). Its restoration conditions include
vertical motion state; an idle zero-height fighter need not pass them.
This explains why jumping can recover but does not prove why the original
throw reset persists differently from original hardware/emulation.

No gameplay correction applied: changing the zero store blindly would alter
original behavior, including other throw actions. User asked to reproduce
same throw in xemu; verbal confirmation is sufficient initially. If xemu
also sinks, classify original-game behavior before considering a scoped
optional correction. If xemu does not sink, trace the first divergent
post-throw update/grounding path rather than replacing the reset globally.
No further build required for this evidence-only update.

## Xemu comparison: port defect confirmed by user

User confirms the same Hayabusa throw does NOT sink in xemu and its animation
is COMPLETELY different from the port. This rules out the earlier possibility
that the observed reproduction simply reflects an original-game bug. It does
not establish whether animation selection, playback, root motion, or subsequent
recovery first diverges. Retain the original reset while investigating upstream.

Static script-dispatch audit: original table 0x418E8 has 73 entries/72 distinct
targets. Dispatch lacks 0x40EFB (opcode 8) and 0x41501 (opcode 53). Neither was
reported as unresolved in this reproduction; no causal claim or speculative
handler/gameplay patch made. Throw command pointers and pose offsets continue
to change throughout frames 1115..1160, so it is not a wholly frozen script.

Prepared docs/collision-xemu-comparison.md and tools/compare_collision_state.py
for two paused xemu guest-virtual snapshots (mid-throw and after). Existing port
trace can be reused. Offline reconstructed-snapshot field comparison passes for
both players. No live game launched and no Release build/deployment changes.

## Xemu dumps received: different paired action selected

Validated the four xemu dump lengths (config 0xB0, motion 0x13400) and
compared them with collision-89-1927. Character IDs match: P1 Hayabusa 4,
P2 training model 10. The snapshots are not frame/time aligned.

| State | Xemu mid-throw | Port frame 1160 |
| --- | --- | --- |
| P1 action / category | 0xE9 / 0x06 | 0x3F / 0x0D |
| P2 action / category | 0xEA / 0x0B | 0x40 / 0x05 |
| P1 root Y | 1 | 1 |
| P2 root Y | 1 | 1 |

Xemu after-throw has both fighters at idle action/category 0 and root Y 1.
The port instead reaches P1 action 0x32/category 0x0C with root Y 0 at
1161. Its incorrect paired actions first appear at frame 1115, following
P1 action 0xDD/category 5 from frame 1100. This moves the investigation
upstream of the final root-height store: the animation/action state already
differs before the sinking. It does not yet distinguish input recognition,
throw selection, move-table data, or a lifted-code execution defect.

Static audit narrowed relevant paired-action setters to sub_000535C0 and
sub_00053FD0. The former is reached through the split sub_000567A0-family
throw-resolution branches and sub_00056040; the latter consumes pending
actions through state/category handlers. Do not assume sub_00053FD0 is the
writer merely because the actions are consecutive. The category-dispatch
table at 0x5678C maps category 5 and 0xD to sub_000552D0, while categories
6 and 0xB use sub_00054DF0. The table therefore explains different update
paths after selection, not the selection's cause.

Original XBE disassembly of sub_000535C0's entry/argument selection through
0x53629 agrees with the generated instructions; no correction justified
there. Current snapshots omit the move tables pointed to by 0x301E34 and
0x3020C0 and the throw table pointers at 0x6EA8EC/0x6EA91C. Their contents
cannot be compared from these dumps. No floor clamp or forced action ID
applied. No new Release build, deployment, or live-game launch performed.
