// Offline checks through the actual public Xbox APIs and selected xbox_kernel.
#include "xbox_image_file.h"
extern "C" {
#include "kernel_virtual_disk.h"
}
#include <winioctl.h>
#include <atomic>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

extern "C" void xbox_log(int, const char *, const char *, ...) {}
static const char *disc_alias = nullptr;
extern "C" const char *xbox_LookupSymbolicLink(const char *name) {
    if (!_stricmp(name, "\\??\\D:")) return disc_alias;
    if (!_stricmp(name, "\\??\\U:")) return "\\Device\\Harddisk0\\Partition1\\UDATA\\54430006";
    return nullptr;
}
namespace {
unsigned checks;
constexpr NTSTATUS read_only = NTSTATUS(0xc00000a2u);
constexpr NTSTATUS short_buffer = NTSTATUS(0xc0000023u);
void check(bool yes, const char *message) {
    ++checks;
    if (!yes) throw std::runtime_error(message);
}
struct ObjectName {
    XBOX_ANSI_STRING name{};
    XBOX_OBJECT_ATTRIBUTES oa{};
    explicit ObjectName(const char *path, HANDLE parent = nullptr) {
        name.Buffer = const_cast<char *>(path); name.Length = static_cast<USHORT>(std::strlen(path));
        name.MaximumLength = name.Length + 1; oa.ObjectName = &name; oa.RootDirectory = parent;
    }
};
NTSTATUS open_status(const char *path, HANDLE &out, ULONG options = 0,
                     ULONG disposition = XBOX_FILE_OPEN, ACCESS_MASK access = XBOX_GENERIC_READ,
                     ULONG share = FILE_SHARE_READ, HANDLE parent = nullptr) {
    ObjectName name(path, parent); XBOX_IO_STATUS_BLOCK ios{};
    const auto result = xbox_NtCreateFile(&out, access, &name.oa, &ios, nullptr, 0, share, disposition, options);
    check(result == ios.Status, "Open result/IO status disagree");
    if (!NT_SUCCESS(result)) check(!out, "Failed image open leaked output handle");
    return result;
}
HANDLE open(const char *path, ULONG options = 0, HANDLE parent = nullptr) {
    HANDLE h = nullptr;
    const auto status = open_status(path, h, options, XBOX_FILE_OPEN, XBOX_GENERIC_READ, FILE_SHARE_READ, parent);
    if (status != STATUS_SUCCESS) std::fprintf(stderr, "Open failed: %s = %08lx\n", path, ULONG(status));
    check(status == STATUS_SUCCESS && h, "Image open failed");
    return h;
}
void close(HANDLE h) { check(xbox_NtClose(h) == STATUS_SUCCESS, "Close failed"); }
void read(HANDLE h, const char *expected, ULONG length, PLARGE_INTEGER at = nullptr,
          NTSTATUS result = STATUS_SUCCESS, HANDLE event = nullptr) {
    char data[64]; std::memset(data, '?', sizeof(data)); XBOX_IO_STATUS_BLOCK ios{};
    check(length <= sizeof(data), "Test buffer too small");
    const auto status = xbox_NtReadFile(h, event, nullptr, nullptr, &ios, data, length, at);
    const size_t count = std::strlen(expected);
    check(status == result && ios.Status == result && ios.Information == count, "Read status/count incorrect");
    check(!std::memcmp(data, expected, count) && (count == sizeof(data) || data[count] == '?'), "Read data/extent incorrect");
}
uint64_t position(HANDLE h) {
    XBOX_FILE_POSITION_INFORMATION out{}; XBOX_IO_STATUS_BLOCK ios{};
    check(xbox_NtQueryInformationFile(h, &ios, &out, sizeof(out), XboxFilePositionInformation) == STATUS_SUCCESS,
          "Position query failed");
    return static_cast<uint64_t>(out.CurrentByteOffset.QuadPart);
}
void seek(HANDLE h, LONGLONG position_value, NTSTATUS expected = STATUS_SUCCESS) {
    XBOX_FILE_POSITION_INFORMATION value{}; value.CurrentByteOffset.QuadPart = position_value;
    XBOX_IO_STATUS_BLOCK ios{};
    check(xbox_NtSetInformationFile(h, &ios, &value, sizeof(value), XboxFilePositionInformation) == expected &&
          ios.Status == expected && ios.Information == 0, "Seek result incorrect");
}
std::filesystem::path fixture(const std::filesystem::path &root) {
    constexpr size_t sector = 2048, desc = 32 * sector, table = 40 * sector;
    std::vector<unsigned char> data(64 * sector, 0xff);
    auto put16 = [&](size_t at, uint16_t value) { data[at] = uint8_t(value); data[at + 1] = uint8_t(value >> 8); };
    auto put32 = [&](size_t at, uint32_t value) { put16(at, uint16_t(value)); put16(at + 2, uint16_t(value >> 16)); };
    auto entry = [&](size_t at, const char *name, uint32_t sector_number, uint32_t size,
                     uint8_t attr, uint16_t left, uint16_t right) {
        put16(at, left); put16(at + 2, right); put32(at + 4, sector_number); put32(at + 8, size);
        data[at + 12] = attr; data[at + 13] = uint8_t(std::strlen(name));
        std::memcpy(data.data() + at + 14, name, std::strlen(name));
    };
    std::memset(data.data() + desc, 0, sector);
    std::memcpy(data.data() + desc, "MICROSOFT*XBOX*MEDIA", 20);
    std::memcpy(data.data() + desc + sector - 20, "MICROSOFT*XBOX*MEDIA", 20);
    put32(desc + 20, 40); put32(desc + 24, sector); put32(desc + 28, 123456);
    entry(table, "Folder", 41, sector, 0x10, 5, 11);
    entry(table + 20, "Alpha.bin", 50, 6, 0, 0, 0);
    const uint64_t high = (uint64_t(1) << 32) + sector * 8;
    entry(table + 44, "High.bin", uint32_t(high / sector), 6, 0, 0, 17);
    entry(table + 68, "Zero", 0, 0, 0x10, 22, 0);
    entry(table + 88, "Padded", 42, sector, 0x10, 0, 0);
    entry(41 * sector, "Mixed.DAT", 51, 8, 0, 0, 0);
    std::memcpy(data.data() + 50 * sector, "abcdef", 6);
    std::memcpy(data.data() + 51 * sector, "01234567", 8);
    auto path = root / "fixture.xiso";
    { std::ofstream out(path, std::ios::binary); out.write(reinterpret_cast<const char *>(data.data()), data.size());
      check(bool(out), "Fixture write failed"); }
    HANDLE h = CreateFileW(path.c_str(), GENERIC_WRITE, 0, nullptr, OPEN_EXISTING, 0, nullptr);
    check(h != INVALID_HANDLE_VALUE, "Sparse fixture open failed");
    DWORD ignored, written = 0;
    const BOOL sparse = DeviceIoControl(h, FSCTL_SET_SPARSE, nullptr, 0, nullptr, 0, &ignored, nullptr);
    LARGE_INTEGER offset; offset.QuadPart = static_cast<LONGLONG>(high);
    const BOOL ok = SetFilePointerEx(h, offset, nullptr, FILE_BEGIN) && WriteFile(h, "hijklm", 6, &written, nullptr);
    CloseHandle(h);
    check(sparse && ok && written == 6, "Sparse >4GiB fixture failed");
    for (const char *name : {"Alpha.bin", "host-only.bin"}) {
        std::ofstream host(root / name, std::ios::binary); host << "HOST";
        check(bool(host), "Host fallback decoy write failed");
    }
    return path;
}
namespace guest_bridge {
// Exercise production bridge bodies with a small guest-memory arena. No guest
// CPU/renderer is needed; unrelated thread objects and APC execution are mocked.
alignas(16) unsigned char memory[8192]{};
uint32_t args[10]{}, g_eax = 0, g_xbox_kernel_caller = 0;
unsigned delivered = 0;
int g_defer_io_apc = 1, g_io_apc_count = 0;
constexpr int IO_APC_QUEUE = 16;
uint32_t g_io_apc[IO_APC_QUEUE][3]{};
bool bridge_va_mapped(uint32_t at, uint32_t size) { return at && at <= sizeof(memory) && size <= sizeof(memory) - at; }
bool bridge_buf_ok(uint32_t at, uint32_t size, const char *) { return !size || bridge_va_mapped(at, size); }
void deliver_one_apc(uint32_t, uint32_t, uint32_t) { ++delivered; }
void *thobj_from_token(uint32_t) { return nullptr; }
void thobj_attach_token(uint32_t, void *) {}
void thobj_detach_token(uint32_t) {}
#define STACK_ARG(i) args[i]
#define XBOX_TO_NATIVE(at) (memory + (at))
#define BRIDGE_MEM32(at) (*reinterpret_cast<uint32_t *>(memory + (at)))
#define BRIDGE_MEM16(at) (*reinterpret_cast<uint16_t *>(memory + (at)))
#define BRIDGE_MEM8(at) memory[at]
#define RECOMP_TLS thread_local
#define KERNEL_LOG_ON() 0
// The inherited C bodies retain their production compiler warnings. Harness
// and new assertions still compile with /W4 /WX.
#pragma warning(push, 0)
#include "xiso_bridge_bodies.h"
#pragma warning(pop)
uint32_t guest_open(const char *path, uint32_t root = 0) {
    const auto length = static_cast<uint16_t>(std::strlen(path));
    BRIDGE_MEM32(0x100) = root; BRIDGE_MEM32(0x104) = 0x120;
    BRIDGE_MEM16(0x120) = length; BRIDGE_MEM16(0x122) = length;
    BRIDGE_MEM32(0x124) = 0x180;
    std::memcpy(memory + 0x180, path, length); memory[0x180 + length] = '!'; // Counted, not NUL terminated.
    XBOX_ANSI_STRING name{};
    check(bridge_create_file_open(0x80, XBOX_GENERIC_READ, 0x100, 0x90, 0, FILE_SHARE_READ,
          XBOX_FILE_OPEN, 0, &name) == STATUS_SUCCESS && BRIDGE_MEM32(0x90) == 0,
          "Guest bridge open failed");
    return BRIDGE_MEM32(0x80);
}
void guest_close(uint32_t token) { args[0] = token; bridge_NtClose(); check(!g_eax, "Guest bridge close failed"); }
void run(const std::filesystem::path &image) {
    _putenv_s("RECOMP_ASYNC_IO", "1");
    char error[128]; check(doa1u_image_mount(image.c_str(), error, sizeof(error)) == XISO_OK, "Bridge fixture mount failed");
    uint32_t file = guest_open("D:\\Alpha.bin");
    bridge_note_async_handle(file);
    HANDLE event = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    check(event != nullptr, "Guest event failed");
    const uint32_t event_token = bridge_handle_token(event);
    args[0] = file; args[1] = event_token; args[2] = 0x700; args[3] = 0x701;
    args[4] = 0x90; args[5] = 0x300; args[6] = 2; args[7] = 0;
    bridge_NtReadFile();
    check(g_eax == STATUS_PENDING && BRIDGE_MEM32(0x90) == 0 && BRIDGE_MEM32(0x94) == 2 &&
          !std::memcmp(memory + 0x300, "ab", 2), "Guest read status/data layout failed");
    check(WaitForSingleObject(event, 0) == WAIT_OBJECT_0 && g_io_apc_count == 1 &&
          g_io_apc[0][0] == 0x700 && g_io_apc[0][1] == 0x701 && g_io_apc[0][2] == 0x90,
          "Guest event/deferred APC completion lost");
    args[0] = file; args[1] = 0x84; args[2] = 2;
    bridge_NtDuplicateObject(); const uint32_t duplicate = BRIDGE_MEM32(0x84);
    check(!g_eax && duplicate != file && bridge_handle_is_async(duplicate), "Guest duplicate token/async contract failed");
    guest_close(file);
    args[0] = duplicate; args[1] = 0x84; args[2] = 3;
    bridge_NtDuplicateObject(); file = BRIDGE_MEM32(0x84);
    check(!g_eax && !bridge_resolve_handle(duplicate) && !bridge_handle_is_async(duplicate) &&
          bridge_handle_is_async(file), "Guest duplicate-close-source retained stale token");
    args[0] = file; args[1] = event_token; args[2] = 0x700; args[3] = 0;
    args[4] = 0x90; args[5] = 0x300; args[6] = 8; args[7] = 0;
    g_defer_io_apc = 0; bridge_NtReadFile();
    check(g_eax == STATUS_PENDING && BRIDGE_MEM32(0x94) == 4 && delivered == 1 &&
          !std::memcmp(memory + 0x300, "cdef", 4), "Guest duplicate lost shared position or inline completion");
    bridge_NtReadFile();
    check(BRIDGE_MEM32(0x90) == uint32_t(STATUS_END_OF_FILE) && !BRIDGE_MEM32(0x94), "Guest EOF layout failed");
    uint32_t dir = guest_open("D:\\Folder");
    uint32_t child = guest_open("Mixed.DAT", dir); guest_close(dir);
    read(bridge_resolve_handle(child), "01234567", 8); guest_close(child);
    dir = guest_open("D:\\");
    args[0] = dir; args[1] = event_token; args[2] = 0; args[3] = 0;
    args[4] = 0x90; args[5] = 0x70000; args[8] = 0x300; args[9] = 64;
    ResetEvent(event); bridge_NtDeviceIoControlFile();
    check(!g_eax && BRIDGE_MEM32(0x94) == 24 && BRIDGE_MEM32(0x314) == 2048 &&
          WaitForSingleObject(event, 0) == WAIT_OBJECT_0, "Guest image geometry used host event as a file");
    args[5] = 0x74004; bridge_NtDeviceIoControlFile();
    uint64_t size = 0; std::memcpy(&size, memory + 0x308, 8);
    check(!g_eax && size > (uint64_t(1) << 32), "Guest image partition size truncated");
    args[5] = 0x300; args[6] = 128; args[7] = XboxFileDirectoryInformation; args[8] = 0; args[9] = 1;
    ResetEvent(event); bridge_NtQueryDirectoryFile();
    check(!g_eax && BRIDGE_MEM32(0x94) > 64 && WaitForSingleObject(event, 0) == WAIT_OBJECT_0,
          "Guest directory result/completion failed");
    guest_close(dir);
    // Table exhaustion must release the newly duplicated/opened image object.
    const HANDLE sentinel = reinterpret_cast<HANDLE>(uintptr_t(0x1234));
    for (auto &slot : s_handle_table) if (!slot) slot = sentinel;
    DWORD before = 0, after = 0;
    check(GetProcessHandleCount(GetCurrentProcess(), &before) != 0, "Handle count query failed");
    args[0] = file; args[1] = 0x84; args[2] = 2;
    bridge_NtDuplicateObject();
    check(g_eax == uint32_t(STATUS_INSUFFICIENT_RESOURCES) && !BRIDGE_MEM32(0x84), "Full guest table accepted duplicate");
    // OA still contains the most recent D:\ root path.
    XBOX_ANSI_STRING name{};
    check(bridge_create_file_open(0x80, XBOX_GENERIC_READ, 0x100, 0x90, 0, FILE_SHARE_READ,
          XBOX_FILE_OPEN, 0, &name) == STATUS_INSUFFICIENT_RESOURCES, "Full guest table accepted open");
    check(GetProcessHandleCount(GetCurrentProcess(), &after) && before == after, "Full guest table leaked native image handles");
    for (auto &slot : s_handle_table) if (slot == sentinel) slot = nullptr;
    guest_close(file); guest_close(event_token);
    bool empty = true; for (auto slot : s_handle_table) if (slot) empty = false;
    check(empty, "Guest token leaked");
    doa1u_image_unmount();
    _putenv_s("RECOMP_ASYNC_IO", "");
}
#undef STACK_ARG
#undef XBOX_TO_NATIVE
#undef BRIDGE_MEM32
#undef BRIDGE_MEM16
#undef BRIDGE_MEM8
#undef RECOMP_TLS
#undef KERNEL_LOG_ON
} // namespace guest_bridge
void files_and_lifetimes(const std::filesystem::path &image) {
    char error[256]{};
    check(doa1u_image_mount(image.c_str(), error, sizeof(error)) == XISO_OK, "Mount failed");
    check(doa1u_image_mount(image.c_str(), error, sizeof(error)) == XISO_INVALID_ARGUMENT, "Mount replacement allowed");
    HANDLE a = open("D:\\Alpha.bin"), b = open("\\Device\\CdRom0\\aLPHa.BIN");
    check(doa1u_image_is_handle(a) && WaitForSingleObject(a, 0) == WAIT_OBJECT_0, "Not a real waitable handle");
    read(a, "ab", 2); check(position(a) == 2 && position(b) == 0, "Independent opens share position");
    HANDLE duplicate = nullptr;
    check(doa1u_image_duplicate(a, &duplicate, DUPLICATE_SAME_ACCESS) && duplicate && duplicate != a, "Duplicate failed");
    read(duplicate, "cd", 2); check(position(a) == 4, "Duplicate lost shared file position");
    close(a); read(duplicate, "ef", 4); read(duplicate, "", 1, nullptr, STATUS_END_OF_FILE);
    check(doa1u_image_duplicate(duplicate, &a, DUPLICATE_SAME_ACCESS | DUPLICATE_CLOSE_SOURCE) && a,
          "Duplicate-close-source failed");
    check(!doa1u_image_is_handle(duplicate), "Closed source still registered");
    seek(a, 1); read(a, "bc", 2); seek(a, -1, STATUS_INVALID_PARAMETER);
    LARGE_INTEGER at; at.QuadPart = 5; read(b, "f", 8, &at); check(position(b) == 6, "Explicit read position not updated");
    at.QuadPart = -2; read(a, "de", 2, &at);
    at.QuadPart = -1; read(a, "", 1, &at, STATUS_INVALID_PARAMETER);
    HANDLE event = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    check(event != nullptr, "Completion event creation failed");
    read(b, "", 1, nullptr, STATUS_END_OF_FILE, event);
    HANDLE waits[] = {b, event};
    check(WaitForMultipleObjects(2, waits, TRUE, 0) == WAIT_OBJECT_0, "EOF/file/event completion failed");
    CloseHandle(event);
    XBOX_IO_STATUS_BLOCK ios{};
    check(xbox_NtReadFile(a, nullptr, nullptr, nullptr, &ios, nullptr, 0, nullptr) == STATUS_SUCCESS &&
          ios.Information == 0, "Zero length read failed");
    XBOX_FILE_STANDARD_INFORMATION standard{};
    check(xbox_NtQueryInformationFile(a, &ios, &standard, sizeof(standard), XboxFileStandardInformation) == STATUS_SUCCESS &&
          standard.EndOfFile.QuadPart == 6 && standard.AllocationSize.QuadPart == 2048 && !standard.Directory,
          "File size/allocation query failed");
    XBOX_FILE_BASIC_INFORMATION basic{};
    check(xbox_NtQueryInformationFile(a, &ios, &basic, sizeof(basic), XboxFileBasicInformation) == STATUS_SUCCESS &&
          (basic.FileAttributes & FILE_ATTRIBUTE_READONLY) && basic.CreationTime.QuadPart == 123456,
          "Attributes/timestamp query failed");
    unsigned char guard[80]; std::memset(guard, 0xa5, sizeof(guard));
    check(xbox_NtQueryInformationFile(a, &ios, guard, 1, XboxFileStandardInformation) == short_buffer &&
          ios.Information == 0 && guard[0] == 0xa5 && guard[1] == 0xa5, "Short query wrote out of bounds");
    LARGE_INTEGER id{};
    check(xbox_NtQueryInformationFile(a, &ios, &id, sizeof(id), XboxFileInternalInformation) == STATUS_SUCCESS &&
          id.QuadPart != 0, "Stable file ID query failed");
    HANDLE dir = open("D:\\Folder", XBOX_FILE_DIRECTORY_FILE);
    HANDLE child = open("mIXED.dat", 0, dir); close(dir); read(child, "01234567", 8); close(child);
    HANDLE high = open("D:\\High.bin"); read(high, "hijklm", 8); close(high);
    // A mount is retained by objects, not the current device-global pointer.
    dir = open("D:\\Folder", XBOX_FILE_DIRECTORY_FILE);
    std::atomic<bool> good{true}, start{false};
    std::vector<std::thread> workers;
    for (int t = 0; t < 8; ++t) workers.emplace_back([&] {
        while (!start.load()) std::this_thread::yield();
        for (int n = 0; n < 1000; ++n) {
            LARGE_INTEGER zero{}; XBOX_IO_STATUS_BLOCK result{}; char bytes[6];
            if (xbox_NtReadFile(b, nullptr, nullptr, nullptr, &result, bytes, 6, &zero) != STATUS_SUCCESS ||
                result.Information != 6 || std::memcmp(bytes, "abcdef", 6)) good = false;
        }
    });
    start = true; doa1u_image_unmount();
    child = open("Mixed.DAT", 0, dir); read(child, "01234567", 8); close(child);
    for (auto &worker : workers) worker.join();
    check(good, "Concurrent reads/dismount lost image lifetime");
    seek(a, (LONGLONG(1) << 33) + 17);
    check(position(a) == (uint64_t(1) << 33) + 17, "64-bit cursor truncated");
    read(a, "", 1, nullptr, STATUS_END_OF_FILE);
    close(dir); close(a); close(b);
    HANDLE writer = CreateFileW(image.c_str(), GENERIC_WRITE, 0, nullptr, OPEN_EXISTING, 0, nullptr);
    check(writer != INVALID_HANDLE_VALUE, "Mount/image handle leaked after final close"); CloseHandle(writer);
}
void directory_and_policy(const std::filesystem::path &image) {
    char error[128]; check(doa1u_image_mount(image.c_str(), error, sizeof(error)) == XISO_OK, "Remount failed");
    XBOX_IO_STATUS_BLOCK ios{}; HANDLE h = nullptr;
    check(open_status("D:\\Alpha.bin", h, XBOX_FILE_DIRECTORY_FILE) == NTSTATUS(0xc0000103u), "File opened as directory");
    check(open_status("D:\\Folder", h, XBOX_FILE_NON_DIRECTORY_FILE) == NTSTATUS(0xc00000bau), "Directory opened as file");
    check(open_status("D:\\missing", h) == STATUS_OBJECT_NAME_NOT_FOUND, "Missing name status");
    check(open_status("D:\\host-only.bin", h) == STATUS_OBJECT_NAME_NOT_FOUND, "Missing image file fell back to host decoy");
    check(open_status("D:\\absent\\missing", h) == STATUS_OBJECT_PATH_NOT_FOUND, "Missing parent status");
    check(open_status("D:\\Folder\\..\\Alpha.bin", h) == STATUS_OBJECT_NAME_INVALID, "Parent traversal accepted");
    for (ULONG d : {XBOX_FILE_CREATE, XBOX_FILE_OVERWRITE, XBOX_FILE_OVERWRITE_IF, XBOX_FILE_SUPERSEDE})
        check(open_status("D:\\Alpha.bin", h, 0, d) == read_only, "Mutation disposition accepted");
    check(open_status("D:\\Alpha.bin", h, 0, XBOX_FILE_OPEN, XBOX_GENERIC_WRITE) == read_only, "Write access accepted");
    check(open_status("D:\\Alpha.bin", h, 0x1000) == read_only, "Delete-on-close accepted");
    check(open_status("D:\\missing", h, 0, XBOX_FILE_OPEN_IF) == read_only, "Open-if created disc file");
    check(open_status("D:\\Alpha.bin", h, 0, XBOX_FILE_OPEN_IF) == STATUS_SUCCESS, "Read-only open-if existing failed"); close(h);
    HANDLE exclusive = nullptr;
    check(open_status("D:\\Alpha.bin", exclusive, 0, XBOX_FILE_OPEN, XBOX_GENERIC_READ, 0) == STATUS_SUCCESS, "Exclusive read open failed");
    check(open_status("D:\\Alpha.bin", h) == NTSTATUS(0xc0000043u), "Share conflict ignored"); close(exclusive);
    h = open("D:\\Alpha.bin");
    LARGE_INTEGER value{};
    check(xbox_NtWriteFile(h, nullptr, nullptr, nullptr, &ios, &value, 1, nullptr) == read_only && ios.Information == 0,
          "Disc write accepted");
    for (auto cls : {XboxFileBasicInformation, XboxFileEndOfFileInformation, XboxFileAllocationInformation,
                     XboxFileDispositionInformation, XboxFileRenameInformation})
        check(xbox_NtSetInformationFile(h, &ios, &value, sizeof(value), cls) == read_only, "Metadata mutation accepted");
    ObjectName alpha("D:\\Alpha.bin"), target("U:\\rename.bin");
    check(xbox_NtDeleteFile(&alpha.oa) == read_only, "Disc delete accepted");
    check(xbox_RenameFileByHandle(h, &target.oa, FALSE) == read_only, "Disc rename accepted");
    XBOX_FILE_NETWORK_OPEN_INFORMATION attr{};
    check(xbox_NtQueryFullAttributesFile(&alpha.oa, &attr) == STATUS_SUCCESS && attr.EndOfFile.QuadPart == 6,
          "Path attributes query failed");
    // Honor counted ANSI input rather than reading through a non-NUL name.
    ObjectName counted("D:\\Alpha.binNOT_PART_OF_NAME"); counted.name.Length = 12;
    HANDLE counted_handle = nullptr;
    check(xbox_NtOpenFile(&counted_handle, XBOX_GENERIC_READ, &counted.oa, &ios, 1, 0) == STATUS_SUCCESS,
          "Counted ANSI name ignored"); close(counted_handle);
    close(h);
    HANDLE root = open("D:\\", XBOX_FILE_DIRECTORY_FILE);
    unsigned char bytes[512];
    check(xbox_NtQueryDirectoryFile(root, nullptr, nullptr, nullptr, &ios, bytes, 1, XboxFileDirectoryInformation,
                                   nullptr, TRUE) == short_buffer && ios.Information == 0, "Directory short buffer accepted");
    auto next = [&](const char *expected, PXBOX_ANSI_STRING pattern, BOOLEAN restart) {
        const auto result = xbox_NtQueryDirectoryFile(root, nullptr, nullptr, nullptr, &ios, bytes, sizeof(bytes),
                                                       XboxFileDirectoryInformation, pattern, restart);
        if (!expected) { check(result == STATUS_NO_MORE_FILES && ios.Information == 0, "Enumeration EOF incorrect"); return; }
        auto *e = reinterpret_cast<XBOX_FILE_DIRECTORY_INFORMATION *>(bytes);
        check(result == STATUS_SUCCESS && e->FileNameLength == std::strlen(expected) &&
              !std::memcmp(e->FileName, expected, e->FileNameLength) &&
              ios.Information == offsetof(XBOX_FILE_DIRECTORY_INFORMATION, FileName) + e->FileNameLength,
              "Directory entry incorrect");
    };
    next("Alpha.bin", nullptr, FALSE); next("Folder", nullptr, FALSE); next("High.bin", nullptr, FALSE);
    next("Padded", nullptr, FALSE); next("Zero", nullptr, FALSE); next(nullptr, nullptr, FALSE); next(nullptr, nullptr, FALSE);
    ObjectName filter("*.bIn");
    next("Alpha.bin", &filter.name, TRUE); next("High.bin", nullptr, FALSE); next(nullptr, nullptr, FALSE);
    next("Alpha.bin", nullptr, TRUE);
    XBOX_FILE_FS_SIZE_INFORMATION volume{};
    check(xbox_NtQueryVolumeInformationFile(root, &ios, &volume, sizeof(volume), XboxFileFsSizeInformation) == STATUS_SUCCESS &&
          volume.BytesPerSector == 2048 && volume.SectorsPerAllocationUnit == 1 && !volume.AvailableAllocationUnits.QuadPart,
          "Disc volume/free space incorrect");
    for (auto cls : {XboxFileFsVolumeInformation, XboxFileFsDeviceInformation, XboxFileFsAttributeInformation, XboxFileFsFullSizeInformation})
        check(xbox_NtQueryVolumeInformationFile(root, &ios, bytes, sizeof(bytes), cls) == STATUS_SUCCESS,
              "Disc volume class query failed");
    check(xbox_NtDeviceIoControlFile(root, nullptr, nullptr, nullptr, &ios, 0x70000, nullptr, 0, bytes, sizeof(bytes)) == STATUS_SUCCESS &&
          ios.Information == 24 && *reinterpret_cast<uint32_t *>(bytes + 20) == 2048, "Disc geometry incorrect");
    check(xbox_NtDeviceIoControlFile(root, nullptr, nullptr, nullptr, &ios, 0x74004, nullptr, 0, bytes, sizeof(bytes)) == STATUS_SUCCESS &&
          ios.Information == 32 && *reinterpret_cast<uint64_t *>(bytes + 8) > (uint64_t(1) << 32), "Disc partition length truncated");
    check(xbox_NtDeviceIoControlFile(root, nullptr, nullptr, nullptr, &ios, 0xdead, nullptr, 0, bytes, sizeof(bytes)) == STATUS_INVALID_DEVICE_REQUEST,
          "Unsupported image IOCTL accepted");
    close(root);
    // Writable drives stay on the host even while an image is mounted.
    HANDLE save = nullptr;
    check(open_status("U:\\save.bin", save, 0, XBOX_FILE_OPEN_IF, XBOX_GENERIC_READ | XBOX_GENERIC_WRITE, 3) == STATUS_SUCCESS &&
          !doa1u_image_is_handle(save), "Save routed into image");
    check(xbox_NtWriteFile(save, nullptr, nullptr, nullptr, &ios, const_cast<char *>("SAVE"), 4, nullptr) == STATUS_SUCCESS,
          "Mounted image broke save writes");
    check(xbox_RenameFileByHandle(save, &alpha.oa, TRUE) == read_only, "Host-to-disc rename accepted"); close(save);
    disc_alias = "\\Device\\Harddisk0\\Partition1\\UDATA\\54430006";
    HANDLE host = open("D:\\save.bin"); check(!doa1u_image_is_handle(host), "Dynamic D: host remap ignored"); close(host);
    disc_alias = nullptr;
    doa1u_image_unmount();
}
void real_image(const wchar_t *image_path, const std::filesystem::path &folder) {
    char error[256];
    check(doa1u_image_mount(image_path, error, sizeof(error)) == XISO_OK, "Real adapter mount failed");
    xiso_image *index = nullptr;
    check(xiso_mount(image_path, &index, error, sizeof(error)) == XISO_OK, "Real comparison index failed");
    unsigned files = 0; uint64_t total = 0;
    std::vector<char> actual(1024 * 1024), expected(actual.size());
    for (uint32_t id = 1; ; ++id) {
        xiso_entry entry{};
        if (xiso_get_entry(index, id, &entry) != XISO_OK) break;
        if (entry.is_directory) continue;
        std::string path = "D:/"; path += entry.path;
        HANDLE h = open(path.c_str());
        std::ifstream original(folder / entry.path, std::ios::binary);
        check(bool(original), "Extracted comparison open failed");
        uint64_t offset = 0;
        while (offset < entry.size) {
            const ULONG count = static_cast<ULONG>((std::min)(uint64_t(actual.size()), entry.size - offset));
            original.read(expected.data(), count); XBOX_IO_STATUS_BLOCK ios{};
            check(xbox_NtReadFile(h, nullptr, nullptr, nullptr, &ios, actual.data(), count, nullptr) == STATUS_SUCCESS &&
                  ios.Information == count && original.gcount() == count && !std::memcmp(actual.data(), expected.data(), count),
                  "Xbox API/extracted content mismatch");
            offset += count;
        }
        close(h); ++files; total += entry.size;
    }
    xiso_unmount(index); doa1u_image_unmount();
    std::printf("Real image API comparison: %u files, %llu bytes matched.\n", files, static_cast<unsigned long long>(total));
}
} // namespace

int wmain(int argc, wchar_t **argv) {
    try {
        check(argc == 2 || argc == 4, "Usage: xbox_image_file_check fresh-build-fixture-root [real-image extracted-folder]");
        const std::filesystem::path root(argv[1]);
        std::filesystem::create_directories(root / "UDATA/54430006");
        xbox_virtual_disk_enable(); xbox_path_init(root.string().c_str(), root.string().c_str());
        const auto image = fixture(root);
        files_and_lifetimes(image);
        directory_and_policy(image);
        guest_bridge::run(image);
        if (argc == 4) real_image(argv[2], std::filesystem::path(argv[3]));
        std::printf("PASS: image-backed Xbox APIs (%u checks; 8000 concurrent reads across dismount).\n", checks);
        return 0;
    } catch (const std::exception &e) {
        doa1u_image_unmount(); std::fprintf(stderr, "FAIL after %u checks: %s\n", checks, e.what()); return 1;
    }
}
