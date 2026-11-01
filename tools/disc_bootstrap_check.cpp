// Offline production bootstrap/identity checks. Never starts guest code.
#include "disc_bootstrap.h"
#include "xbox_image_file.h"
extern "C" {
#include "kernel_virtual_disk.h"
}
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string>
#include <vector>
extern "C" void xbox_log(int, const char *, const char *, ...) {}
extern "C" const char *xbox_LookupSymbolicLink(const char *) { return nullptr; }
namespace {
namespace fs = std::filesystem;
unsigned checks;
void check(bool ok, const char *message) {
    ++checks; if (!ok) throw std::runtime_error(message);
}
std::vector<unsigned char> read(const fs::path &path) {
    std::ifstream f(path, std::ios::binary);
    check(bool(f), "Cannot read fixture input");
    return {std::istreambuf_iterator<char>(f), {}};
}
void write(const fs::path &path, const std::vector<unsigned char> &data) {
    std::ofstream f(path, std::ios::binary);
    f.write(reinterpret_cast<const char *>(data.data()), static_cast<std::streamsize>(data.size()));
    check(bool(f), "Cannot write fixture");
}
void put(std::vector<unsigned char> &data, size_t at, uint32_t value) {
    for (size_t i = 0; i < 4; ++i) data.at(at + i) = static_cast<unsigned char>(value >> (8 * i));
}
uint32_t word(const std::vector<unsigned char> &data, size_t at) {
    return uint32_t(data.at(at)) | uint32_t(data.at(at + 1)) << 8 |
        uint32_t(data.at(at + 2)) << 16 | uint32_t(data.at(at + 3)) << 24;
}
void image(const fs::path &path, const std::vector<unsigned char> &xbe, const char *name = "dOa1.XbE", bool directory = false) {
    constexpr size_t sector = 2048, descriptor = 32 * sector, table = 40 * sector, payload = 48 * sector;
    std::vector<unsigned char> data(payload + ((xbe.size() + sector - 1) / sector) * sector, 0);
    std::memcpy(data.data() + descriptor, "MICROSOFT*XBOX*MEDIA", 20);
    std::memcpy(data.data() + descriptor + sector - 20, "MICROSOFT*XBOX*MEDIA", 20);
    put(data, descriptor + 20, 40); put(data, descriptor + 24, sector);
    // Unused table bytes may be FF or zero; a single leaf has no child links.
    std::memset(data.data() + table, 0xff, sector);
    put(data, table, 0); put(data, table + 4, directory ? 0 : 48);
    put(data, table + 8, directory ? 0 : static_cast<uint32_t>(xbe.size()));
    data[table + 12] = directory ? 0x10 : 0;
    data[table + 13] = static_cast<unsigned char>(std::strlen(name));
    std::memcpy(data.data() + table + 14, name, std::strlen(name));
    std::memcpy(data.data() + payload, xbe.data(), xbe.size());
    write(path, data);
}
void failure(const fs::path &root) {
    doa1u_boot_source source{};
    check(!doa1u_boot_open(root.c_str(), &source), "Incorrect source was accepted");
    check(!source.xbe_data && !source.xbe_size && !source.image_mode, "Failed source left output/ownership");
    doa1u_boot_close(&source);
}
void success(const fs::path &root, const std::vector<unsigned char> &expected, bool in_image) {
    doa1u_boot_source source{};
    check(doa1u_boot_open(root.c_str(), &source) != 0, "Supported source rejected");
    check(bool(source.image_mode) == in_image && source.xbe_size == expected.size() &&
        !std::memcmp(source.xbe_data, expected.data(), expected.size()), "Verified original XBE bytes differ");
    // No second discovery/mount while the current game is using this source.
    doa1u_boot_source second{};
    check(!doa1u_boot_open(root.c_str(), &second), "Allowed duplicate bootstrap");
    xbox_virtual_disk_enable();
    xbox_path_init(root.u8string().c_str(), root.u8string().c_str());
    // Main passes the EXE directory for both roots in both modes. Confirm
    // a bootstrap-owned image does not intercept persistent host save files.
    char save_name[] = "\\Device\\Harddisk0\\Partition1\\UDATA\\stage4-save.bin";
    XBOX_ANSI_STRING save_string{}; save_string.Buffer = save_name;
    save_string.Length = static_cast<USHORT>(std::strlen(save_name));
    XBOX_OBJECT_ATTRIBUTES save_oa{}; save_oa.ObjectName = &save_string;
    XBOX_IO_STATUS_BLOCK save_ios{}; HANDLE save = nullptr;
    check(xbox_NtCreateFile(&save, XBOX_GENERIC_READ | XBOX_GENERIC_WRITE, &save_oa, &save_ios, nullptr, 0,
        FILE_SHARE_READ, XBOX_FILE_OVERWRITE_IF, 0) == STATUS_SUCCESS && !doa1u_image_is_handle(save), "Save not host-backed");
    char content[] = "SAVE";
    check(xbox_NtWriteFile(save, nullptr, nullptr, nullptr, &save_ios, content, 4, nullptr) == STATUS_SUCCESS &&
        save_ios.Information == 4, "Host save write failed with bootstrap source");
    check(xbox_NtClose(save) == STATUS_SUCCESS, "Save close failed");
    check(read(root / "UDATA" / "stage4-save.bin") == std::vector<unsigned char>({'S','A','V','E'}), "Save was not beside EXE directory");
    if (in_image) {
        char name[] = "D:\\Doa1.xbe";
        XBOX_ANSI_STRING string{}; string.Buffer = name; string.Length = static_cast<USHORT>(std::strlen(name));
        XBOX_OBJECT_ATTRIBUTES oa{}; oa.ObjectName = &string;
        XBOX_IO_STATUS_BLOCK ios{}; HANDLE h = nullptr;
        check(xbox_NtCreateFile(&h, XBOX_GENERIC_READ, &oa, &ios, nullptr, 0, FILE_SHARE_READ,
            XBOX_FILE_OPEN, 0) == STATUS_SUCCESS && h, "Bootstrap mount not shared with Xbox APIs");
        unsigned char bytes[32]{}; LARGE_INTEGER offset{};
        check(xbox_NtReadFile(h, nullptr, nullptr, nullptr, &ios, bytes, sizeof(bytes), &offset) == STATUS_SUCCESS &&
            ios.Information == sizeof(bytes) && !std::memcmp(bytes, expected.data(), sizeof(bytes)), "Xbox read uses different source");
        // Outstanding handles retain ownership even when bootstrap drops it.
        doa1u_boot_close(&source);
        offset.QuadPart = 32;
        check(xbox_NtReadFile(h, nullptr, nullptr, nullptr, &ios, bytes, sizeof(bytes), &offset) == STATUS_SUCCESS &&
            !std::memcmp(bytes, expected.data() + 32, sizeof(bytes)), "Shutdown invalidated outstanding image handle");
        check(xbox_NtClose(h) == STATUS_SUCCESS, "Cannot close retained image handle");
    } else doa1u_boot_close(&source);
    check(!source.xbe_data && !source.xbe_size && !source.image_mode, "Close did not clear source");
}
void exclusive(const fs::path &image_path) {
    HANDLE h = CreateFileW(image_path.c_str(), GENERIC_READ | GENERIC_WRITE, 0, nullptr,
        OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);
    check(h != INVALID_HANDLE_VALUE, "Failed/bootstrap close leaked image handle");
    CloseHandle(h); // No writes, including when path is a hard link to original.
}
void child(const fs::path &exe, const fs::path &root, bool use_module_path, bool accept = true) {
    std::wstring command = L"\"" + exe.wstring() + L"\" --child \"" + root.wstring() + L"\"";
    command += use_module_path ? L" module" : L" explicit";
    if (!accept) command += L" reject";
    STARTUPINFOW si{}; si.cb = sizeof(si); PROCESS_INFORMATION pi{};
    check(CreateProcessW(exe.c_str(), command.data(), nullptr, nullptr, FALSE, CREATE_NO_WINDOW, nullptr,
        root.parent_path().c_str(), &si, &pi) != 0, "Cannot start fresh-process bootstrap probe");
    const auto wait = WaitForSingleObject(pi.hProcess, 30000);
    DWORD result = 1;
    if (wait == WAIT_TIMEOUT) TerminateProcess(pi.hProcess, 99);
    GetExitCodeProcess(pi.hProcess, &result); CloseHandle(pi.hThread); CloseHandle(pi.hProcess);
    check(wait == WAIT_OBJECT_0 && result == 0, "Fresh-process bootstrap/module-directory probe failed");
}
} // namespace
int wmain(int argc, wchar_t **argv) {
    try {
        if (argc >= 3 && !std::wcscmp(argv[1], L"--child")) {
            doa1u_boot_source source{};
            const bool accept = argc <= 4;
            check(bool(doa1u_boot_open(argc > 3 && !std::wcscmp(argv[3], L"module") ? nullptr : argv[2], &source)) == accept,
                "Child source acceptance differs");
            if (accept) check(source.xbe_size == 4354048, "Child source size differs");
            doa1u_boot_close(&source); return 0;
        }
        if (argc < 3) throw std::runtime_error("Usage: disc_bootstrap_check <fresh absolute fixture root> <original Doa1.xbe> [original image]");
        const fs::path root = argv[1];
        check(root.is_absolute() && !fs::exists(root), "Use a fresh absolute fixture root");
        fs::create_directories(root);
        _putenv_s("RECOMP_SAVE_DIR", ""); // Never write to an inherited external save override.
        const auto original = read(argv[2]);
        const auto folder = root / L"folder", disc = root / L"image-\u00e7";
        fs::create_directories(folder); fs::create_directories(disc);
        const auto xbe_path = folder / "Doa1.xbe", disc_path = disc / "game.iso.xiso";
        failure(folder); // No XBE and no image.
        write(xbe_path, original); success(folder, original, false);
        image(disc_path, original); success(disc, original, true); exclusive(disc_path);
        // Check repeated discovery/revalidation across the same fresh-process
        // boundary used by ESC. No UI/guest code or test scheduling assumption.
        wchar_t module[32768]; check(GetModuleFileNameW(nullptr, module, 32768) != 0, "Cannot locate test EXE");
        child(module, disc, false); child(module, disc, false);
        const auto copied_exe = disc / "bootstrap-probe.exe";
        fs::copy_file(module, copied_exe);
        child(copied_exe, disc, true); // NULL-directory production path; different CWD.
        // Nested images and directories with image-like names are not candidates.
        fs::create_directories(folder / "nested"); write(folder / "nested" / "ignored.iso", {1,2,3});
        fs::create_directories(folder / "directory.xiso"); success(folder, original, false);
        // A candidate overrides even a valid extracted XBE and must never fall back.
        write(folder / "bad.ISO", {1,2,3}); failure(folder); fs::remove(folder / "bad.ISO");
        // Both suffixes count, deterministically rejecting ambiguity.
        image(disc / "another.ISO", original); failure(disc); fs::remove(disc / "another.ISO");
        for (const char *name : {"default.xbe", "Other.xbe"}) {
            image(disc_path, original, name); failure(disc); exclusive(disc_path);
        }
        image(disc_path, original, "Doa1.xbe", true); failure(disc); exclusive(disc_path);
        // Every malformed/identity mutation must fail in BOTH modes. Baseline
        // succeeds again after each one, proving rollback releases the mount.
        const size_t cert = word(original, 0x118) - word(original, 0x104);
        const size_t sections = word(original, 0x120) - word(original, 0x104);
        for (unsigned mode = 0; mode < 12; ++mode) {
            auto modified = original;
            switch (mode) {
            case 0: modified[0] = 0; break;
            case 1: put(modified, 0x108, 0xffffffff); break;
            case 2: put(modified, 0x118, 1); break;
            case 3: put(modified, 0x118, 0xffffffff); break;
            case 4: put(modified, cert, 0xffffffff); break;
            case 5: put(modified, cert, 4); break;
            case 6: put(modified, 0x11c, 0xffffffff); break;
            case 7: put(modified, sections + 12, 0xffffffff); break;
            case 8: put(modified, sections + 4, 0xffffffff); break;
            case 9: put(modified, cert + 8, 0x12345678); break;
            case 10: modified.back() ^= 1; break; // Correct title ID, wrong full-XBE hash.
            case 11: modified.resize(128); break;
            }
            write(xbe_path, modified); failure(folder);
            image(disc_path, modified); failure(disc); exclusive(disc_path);
            image(disc_path, original); success(disc, original, true);
        }
        write(xbe_path, original); success(folder, original, false);
        image(disc_path, original);
        // Revalidation in a fresh process catches corruption, rather than
        // inheriting a parent's cached identity/index.
        auto modified = original; modified.back() ^= 1;
        write(xbe_path, modified); failure(folder); child(module, folder, false, false); write(xbe_path, original);
        image(disc_path, modified); child(copied_exe, disc, true, false); image(disc_path, original);
        if (argc > 3) {
            const auto real = root / "real-disc"; fs::create_directories(real);
            const auto link = real / "original.xiso.iso";
            check(CreateHardLinkW(link.c_str(), fs::absolute(argv[3]).c_str(), nullptr) != 0, "Cannot link original image read-only for discovery");
            success(real, original, true); exclusive(link);
        }
        std::printf("Stage 4 bootstrap: %u checks passed\n", checks);
        return 0;
    } catch (const std::exception &e) { std::fprintf(stderr, "FAIL: %s\n", e.what()); return 1; }
}
