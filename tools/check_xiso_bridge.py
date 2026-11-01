"""Extract actual file bridge bodies for the headless Xbox API contract test.

Only guest memory/registers, logging, and unrelated thread-object bookkeeping are
supplied by the harness. Handle/token, completion, and file functions stay real.
Fail closed if source boundaries change; never rewrite the production bridge.
"""
from pathlib import Path
import re
import sys

source = Path(sys.argv[1]).read_text(encoding="utf-8")
output = Path(sys.argv[2])


def between(start, end):
    a = source.index(start)
    b = source.index(end, a)
    return source[a:b]


def function(name):
    if name == "handle_unlock":
        return next(line for line in source.splitlines(True) if line.startswith("static void handle_unlock(void) {"))
    starts = list(re.finditer(r"^static [^\n]*\b" + name + r"\([^;]*?\)\n\{", source, re.M))
    assert len(starts) == 1, f"Ambiguous bridge function {name}"
    a = starts[0].start()
    b = source.index("\n}\n", starts[0].end()) + 3
    return source[a:b] + "\n"


parts = ["// Generated from the tracked production bridge; do not edit.\n",
         between("#define BRIDGE_HANDLE_TAG ", "static void handle_lock(void)"),
         between("#define BRIDGE_ASYNC_MAX ", "static void bridge_note_async_handle(uint32_t token)\n{"),
         between("#define IOCTL_DISK_GET_DRIVE_GEOMETRY ", "static void bridge_NtDeviceIoControlFile(void)"),
         "\n#define BRIDGE_CDROM_HANDLE 0xDECD0001u\n"]
for name in (
    "handle_lock", "handle_unlock", "bridge_handle_token_ex", "bridge_handle_token",
    "bridge_write_handle", "bridge_resolve_handle", "bridge_take_handle",
    "bridge_write_iostatus", "bridge_note_async_handle", "bridge_forget_async_handle",
    "bridge_handle_is_async", "bridge_complete_file_io", "bridge_get_xbox_path",
    "bridge_build_oa", "bridge_is_cdrom_device", "bridge_create_file_open",
    "bridge_async_io_enabled", "bridge_NtReadFile", "bridge_NtQueryDirectoryFile",
    "bridge_NtDeviceIoControlFile", "bridge_NtDuplicateObject", "bridge_NtClose",
):
    parts.append(function(name))
output.parent.mkdir(parents=True, exist_ok=True)
output.write_text("".join(parts), encoding="utf-8")
