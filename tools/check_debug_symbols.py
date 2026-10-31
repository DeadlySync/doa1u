"""Resolve host/guest symbols and source lines offline, without running the EXE.

Usage: python tools/check_debug_symbols.py build/Debug/doa1u_recomp.exe
Uses Windows DbgHelp, the same symbol infrastructure used by native debuggers.
"""
import ctypes as c
from ctypes import wintypes as w
from pathlib import Path
import sys

exe = Path(sys.argv[1]).resolve()
dbg = c.WinDLL("dbghelp", use_last_error=True)
kernel = c.WinDLL("kernel32", use_last_error=True)
kernel.GetCurrentProcess.restype = w.HANDLE
process = kernel.GetCurrentProcess()
dbg.SymInitializeW.argtypes = [w.HANDLE, w.LPCWSTR, w.BOOL]
dbg.SymInitializeW.restype = w.BOOL
dbg.SymSetOptions.argtypes = [w.DWORD]
dbg.SymLoadModuleExW.argtypes = [w.HANDLE, w.HANDLE, w.LPCWSTR, w.LPCWSTR,
                               c.c_ulonglong, w.DWORD, c.c_void_p, w.DWORD]
dbg.SymLoadModuleExW.restype = c.c_ulonglong
dbg.SymFromName.argtypes = [w.HANDLE, c.c_char_p, c.c_void_p]
dbg.SymFromName.restype = w.BOOL
dbg.SymCleanup.argtypes = [w.HANDLE]


class Symbol(c.Structure):
    _fields_ = [("SizeOfStruct", w.ULONG), ("TypeIndex", w.ULONG),
                ("Reserved", c.c_ulonglong * 2), ("Index", w.ULONG), ("Size", w.ULONG),
                ("ModBase", c.c_ulonglong), ("Flags", w.ULONG), ("Value", c.c_ulonglong),
                ("Address", c.c_ulonglong), ("Register", w.ULONG), ("Scope", w.ULONG),
                ("Tag", w.ULONG), ("NameLen", w.ULONG), ("MaxNameLen", w.ULONG),
                ("Name", c.c_char * 1)]


class Line(c.Structure):
    _fields_ = [("SizeOfStruct", w.DWORD), ("Key", c.c_void_p), ("LineNumber", w.DWORD),
                ("FileName", c.c_char_p), ("Address", c.c_ulonglong)]


dbg.SymGetLineFromAddr64.argtypes = [w.HANDLE, c.c_ulonglong, c.POINTER(w.DWORD), c.POINTER(Line)]
dbg.SymGetLineFromAddr64.restype = w.BOOL
dbg.SymSetOptions(0x10 | 0x200)  # Load source lines, no critical-error dialogs.
if not dbg.SymInitializeW(process, str(exe.parent), False):
    raise c.WinError(c.get_last_error())
try:
    if not dbg.SymLoadModuleExW(process, None, str(exe), None, 0, 0, None, 0):
        raise c.WinError(c.get_last_error())
    for name in ("WinMain", "sub_000570E0"):
        storage = c.create_string_buffer(c.sizeof(Symbol) + 1024)
        symbol = c.cast(storage, c.POINTER(Symbol)).contents
        symbol.SizeOfStruct, symbol.MaxNameLen = c.sizeof(Symbol), 1024
        if not dbg.SymFromName(process, (exe.stem + "!" + name).encode(), storage):
            raise c.WinError(c.get_last_error())
        line = Line()
        line.SizeOfStruct = c.sizeof(Line)
        displacement = w.DWORD()
        if not dbg.SymGetLineFromAddr64(process, symbol.Address, c.byref(displacement), c.byref(line)):
            raise c.WinError(c.get_last_error())
        print(f"PASS: {name} at 0x{symbol.Address:X}, {line.FileName.decode()}:{line.LineNumber}")
finally:
    dbg.SymCleanup(process)
