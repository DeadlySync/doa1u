#!/usr/bin/env python3
"""
relift_compile_fixes.py -- re-apply the tiny gen patches that make the fresh
v0.14.0 lift COMPILE. A `tools.recomp` regen overwrites gen/, wiping these.

These are NOT functional changes: both sites are misdisassembled / never-executed
code (a far-lcall tail; a privileged `mov cr4,eax` block) where the v0.14.0 lifter
emitted a reference to an undeclared temporary. We just declare it locally so the
translation unit compiles; the code never runs.

  * FUNCTION-ANCHORED (by the unique `void <fn>(void)` signature), not file/line:
    functions move between recomp_NNNN.c files on every reseed.
  * IDEMPOTENT: each patch carries a marker; if present, skip.
  * LOUD ON MISS: if a function can't be found, report and exit non-zero
    (means the lift changed and the fix needs review).

Usage:  py -3 tools/relift_compile_fixes.py [--gen-dir DIR] [--dry-run]
"""
import argparse, glob, os, sys
from pathlib import Path

DEFAULT_GEN = str(Path(__file__).resolve().parents[1] / "src/recomp/gen")

# fn: function whose body needs a local decl inserted right after the opening brace.
# decl: the C declaration line to insert. marker: substring proving it's applied.
PATCHES = [
    dict(fn="sub_00059BE0",
         marker="int _cf = 0; /* v0.14.0 relift",
         decl="    int _cf = 0; /* v0.14.0 relift compile-fix: lahf reads _cf in dead/misdisasm code (far-lcall) with no carry-producer in scope */"),
    dict(fn="sub_001C8BE5",
         marker="uint32_t cr4 = 0; /* v0.14.0 relift",
         decl="    uint32_t cr4 = 0; /* v0.14.0 relift compile-fix: mov cr4,eax in privileged/misdisasm code; declare so it compiles (never executes) */"),
]

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--gen-dir", default=DEFAULT_GEN)
    ap.add_argument("--dry-run", action="store_true")
    args = ap.parse_args()

    files = glob.glob(os.path.join(args.gen_dir, "*.c"))
    if not files:
        print(f"ERROR: no .c files under {args.gen_dir}", file=sys.stderr); sys.exit(2)

    missing = []
    for p in PATCHES:
        sig = f"void {p['fn']}(void)\n{{\n"
        done = False
        for fpath in files:
            with open(fpath, "r", encoding="utf-8", errors="surrogateescape") as f:
                text = f.read()
            if sig not in text:
                continue
            if p["marker"] in text:
                print(f"SKIP  {p['fn']} (already patched in {os.path.basename(fpath)})")
                done = True; break
            new = text.replace(sig, sig + p["decl"] + "\n", 1)
            if not args.dry_run:
                with open(fpath, "w", encoding="utf-8", errors="surrogateescape") as f:
                    f.write(new)
            print(f"APPLY {p['fn']} -> {os.path.basename(fpath)}{' (dry-run)' if args.dry_run else ''}")
            done = True; break
        if not done:
            missing.append(p["fn"])

    if missing:
        print(f"MISSING (not found; review the lift): {', '.join(missing)}", file=sys.stderr)
        sys.exit(1)
    print("relift compile-fixes OK")

if __name__ == "__main__":
    main()
