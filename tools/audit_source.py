"""Audit handwritten source layout, includes and macro use without compiling."""
from collections import Counter, defaultdict
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
SRC = ROOT / "src"
LEXER = re.compile(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', re.S)


def code_only(text):
    return LEXER.sub(lambda m: "\n" * m[0].count("\n") or " ", text)


def main():
    files = sorted(p for p in SRC.rglob("*") if p.suffix in (".c", ".h")
                   and "gen" not in p.parts and "third_party" not in p.parts
                   and "xboxrecomp" not in p.parts)
    definitions = defaultdict(list)
    references = Counter()
    errors = []
    late = []
    for path in files:
        text = path.read_text(encoding="utf-8")
        code = code_only(text)
        for match in re.finditer(r'^\s*#\s*define\s+(\w+)([^\n]*)', code, re.M):
            definitions[match[1]].append((path.relative_to(SRC).as_posix(), match[2].strip()))
        # Exclude guards and macro definition names from reference counts.
        uses = re.sub(r'(^[ \t]*#\s*(?:define|ifdef|ifndef|undef)\s+)\w+', r'\1', code, flags=re.M)
        references.update(re.findall(r'\b[A-Za-z_]\w*\b', uses))
        # Include paths are parsed before string removal, but after removing comments.
        no_comments = LEXER.sub(lambda m: "\n" * m[0].count("\n") if m[0].startswith(("/*", "//")) else m[0], text)
        for match in re.finditer(r'^\s*#\s*include\s*"([^"]+)"', no_comments, re.M):
            candidates = (path.parent / match[1], SRC / match[1], SRC / "recomp" / match[1],
                          SRC / "xboxrecomp/src/kernel" / match[1],
                          ROOT.parent / "xboxrecomp/src/kernel" / match[1])
            if not any(p.is_file() for p in candidates):
                errors.append(f"missing include: {path.relative_to(SRC)}: {match[1]}")
        # Once ordinary C declarations start, all includes/definitions must be above them.
        in_macro = False
        ordinary_seen = False
        for line_no, line in enumerate(code.splitlines(), 1):
            stripped = line.strip()
            if in_macro:
                in_macro = line.rstrip().endswith("\\")
                continue
            if stripped.startswith("#"):
                if ordinary_seen and re.match(r'#\s*(?:define|include)\b', stripped):
                    late.append(f"{path.relative_to(SRC)}:{line_no}")
                in_macro = line.rstrip().endswith("\\")
            elif stripped:
                ordinary_seen = True
    platform = {"RTLS", "COBJMACROS", "WIN32_LEAN_AND_MEAN", "PL_MPEG_IMPLEMENTATION"}
    unused = sorted(name for name in definitions if not references[name]
                    and not name.endswith("_H") and name not in platform)
    duplicate = {name: rows for name, rows in definitions.items() if len(rows) > 1 and name not in platform}
    addresses = defaultdict(list)
    for name, rows in definitions.items():
        for file, value in rows:
            if re.fullmatch(r'0[xX][0-9A-Fa-f]+[uUlL]*', value) and int(value.rstrip("uUlL"), 16) >= 0x10000:
                addresses[int(value.rstrip("uUlL"), 16)].append((name, file))
                if file != "common/guest_addresses.h":
                    errors.append(f"address outside common header: {file}: {name}")
    for value, rows in addresses.items():
        if len(rows) > 1:
            errors.append(f"duplicate address 0x{value:08X}: {rows}")
    for name, rows in duplicate.items():
        errors.append(f"duplicate macro {name}: {rows}")
    errors.extend("unused macro: " + name for name in unused)
    errors.extend("late include/define: " + item for item in late)
    print(f"Audited {len(files)} handwritten files, {len(definitions)} macros, {len(addresses)} addresses.")
    for error in errors:
        print(error)
    if errors:
        return 1
    print("No duplicate/unused project macros, late directives, or missing local includes.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
