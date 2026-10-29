#!/usr/bin/env python3
"""Restore same-frame jumps across the lifted 1EEF0/1EF70 game-loop split.

These guest entries share a frame. Native call/return back-edges accumulate
128-byte frames until they overwrite the adjacent fiber stack (PID41808 dump).
Keep both dispatch entry points but run their bodies in one C activation.
Fail closed if regeneration changes the expected boundaries/edges.
"""
import argparse
from pathlib import Path
import re

MARKER = "GEN-EDIT: constant-stack 0001EEF0/0001EF70 cycle"


def transform(text):
    if MARKER in text:
        return text
    first = re.search(r"^void sub_0001EEF0\(void\)\n\{", text, re.M)
    second = re.search(r"^void sub_0001EF70\(void\)\n\{", text, re.M)
    following = re.search(r"^void sub_0001F930\(void\)\n\{", text, re.M)
    if not (first and second and following):
        raise ValueError("missing game-loop definitions")
    end1 = text.index("\n}\n", first.end()) + 3
    end2 = text.index("\n}\n", second.end()) + 3
    if not (first.start() < end1 < second.start() < end2 < following.start()):
        raise ValueError("unexpected game-loop boundaries")
    prefix = text[text.index("loc_0001EEF0: ;", first.end()):end1 - 3]
    fallthrough = "g_seh_ebp = ebp; sub_0001EF70(); return; /* fallthrough 0x0001EF70 */"
    if prefix.count(fallthrough) != 1:
        raise ValueError("missing prefix fallthrough")
    prefix = prefix.replace(fallthrough, "g_seh_ebp = ebp; goto game_loop_0001EF70;")
    body = text[second.end():end2 - 3]
    edge = "g_seh_ebp = ebp; sub_0001EEF0(); return;"
    if body.count(edge) != 7:
        raise ValueError("expected exactly seven game-loop back-edges")
    body = body.replace(edge, "g_seh_ebp = ebp; goto game_loop_0001EEF0;")
    entry = "loc_0001EF70: ;"
    if body.count(entry) != 1:
        raise ValueError("missing game-loop body entry")
    # Reset C-local scratch flags just as entering the original lifted functions
    # did. Guest GPRs, guest ESP and the inherited EBP are not pushed/restored.
    labels = """    if (!from_prefix) goto game_loop_0001EF70;

game_loop_0001EEF0: ;
    _flags = 0; _fa = _fb = 0; _fas = _fbs = 0;
""" + prefix + """
game_loop_0001EF70: ;
    _flags = 0; _fa = _fb = 0; _fas = _fbs = 0; _cf = 0;
loc_0001EF70: ;"""
    body = body.replace(entry, labels)
    replacement = """/* %s.
 * Original fallthrough/back-jumps are NOT recursive calls. Keep this explicit:
 * correctness must not depend on compiler tail-call optimization.
 */
static void game_loop_0001EEF0_0001EF70(int from_prefix);
void sub_0001EEF0(void) { game_loop_0001EEF0_0001EF70(1); }
void sub_0001EF70(void) { game_loop_0001EEF0_0001EF70(0); }

static void game_loop_0001EEF0_0001EF70(int from_prefix)
{%s
}
""" % (MARKER, body)
    return text[:first.start()] + replacement + text[end2:]


def apply(files, dry_run=False):
    for filename in files:
        path = Path(filename)
        text = path.read_text(encoding="utf-8", errors="surrogateescape")
        if MARKER in text:
            print("  skip     constant-stack game loop already present")
            return
        if "void sub_0001EEF0(void)\n{" not in text:
            continue
        updated = transform(text)
        if not dry_run:
            path.write_text(updated, encoding="utf-8", errors="surrogateescape")
        print("  APPLIED  constant-stack game loop -> %s%s" %
              (path.name, " [dry-run]" if dry_run else ""))
        return
    raise ValueError("game-loop split not found; inspect regenerated boundaries")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--gen-dir", type=Path,
                        default=Path(__file__).resolve().parents[1] / "src/recomp/gen")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    apply(sorted(args.gen_dir.glob("recomp_*.c")), args.dry_run)
