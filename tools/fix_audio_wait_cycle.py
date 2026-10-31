"""Keep the guest 1B559F/1B55A6 audio wait cycle on one native stack frame."""
from pathlib import Path
import argparse
import re

MARKER = "GEN-EDIT: constant-stack audio wait 001B559F/001B55A6"


def transform(text):
    if MARKER in text:
        return text
    first = re.search(r"^void sub_001B559F\(void\)\n\{", text, re.M)
    second = re.search(r"^void sub_001B55A6\(void\)\n\{", text, re.M)
    if not first or not second:
        raise ValueError("missing audio wait entries")
    end1 = text.index("\n}\n", first.end()) + 3
    end2 = text.index("\n}\n", second.end()) + 3
    if not first.start() < end1 < second.start() < end2:
        raise ValueError("unexpected audio wait boundaries")
    poll = text[text.index("loc_001B559F: ;", first.end()):end1-3]
    edge = "g_seh_ebp = ebp; sub_001B55A6(); return; /* fallthrough 0x001B55A6 */"
    if poll.count(edge) != 1:
        raise ValueError("missing audio poll fallthrough")
    poll = poll.replace(edge, "g_seh_ebp = ebp;")
    body = text[second.end():end2-3]
    edge = "g_seh_ebp = ebp; sub_001B559F(); return;"
    if body.count(edge) != 1 or body.count("loc_001B55A6: ;") != 1:
        raise ValueError("missing audio wait back-edge")
    body = body.replace(edge, "g_seh_ebp = ebp; goto audio_wait_poll;")
    body = body.replace("loc_001B55A6: ;", """    if (!poll_first) goto loc_001B55A6;
audio_wait_poll: ;
""" + poll + "\nloc_001B55A6: ;")
    replacement = """/* %s. Guest jumps must not depend on tail-call optimization. */
static void audio_wait_cycle(int poll_first);
void sub_001B559F(void) { audio_wait_cycle(1); }
void sub_001B55A6(void) { audio_wait_cycle(0); }
static void audio_wait_cycle(int poll_first)
{%s
}
""" % (MARKER, body)
    return text[:first.start()] + replacement + text[end2:]


def apply(files, dry_run=False):
    for filename in files:
        path = Path(filename)
        text = path.read_text(encoding="utf-8", errors="surrogateescape")
        if MARKER in text:
            print("  skip     constant-stack audio wait already present")
            return
        if "void sub_001B559F(void)\n{" not in text:
            continue
        updated = transform(text)
        if not dry_run:
            path.write_text(updated, encoding="utf-8", errors="surrogateescape")
        print("  APPLIED  constant-stack audio wait -> " + path.name)
        return
    raise ValueError("audio wait split not found")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--gen-dir", type=Path,
                        default=Path(__file__).resolve().parents[1] / "src/recomp/gen")
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()
    apply(sorted(args.gen_dir.glob("recomp_*.c")), args.dry_run)
