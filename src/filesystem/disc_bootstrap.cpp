// Project-owned startup policy; no image offsets or game payloads baked in.
#include "disc_bootstrap.h"
#include "xbox_image_file.h"
#include <bcrypt.h>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
namespace fs = std::filesystem;
constexpr char executable[] = "Doa1.xbe";
constexpr uint32_t title_id = 0x54430006;
constexpr char supported_hash[] = "8d4c14a7443f6d3aca4577fde7759abbb9863aeb97833f7f8af0054b59d40787";
constexpr size_t xbe_limit = 64 * 1024 * 1024;
doa1u_boot_source *active = nullptr; // Startup/shutdown on the main thread only.
std::string utf8(const fs::path &path) { return path.u8string(); }
[[noreturn]] void fail(const std::string &reason) { throw std::runtime_error(reason); }
struct NativeFile {
    HANDLE h = INVALID_HANDLE_VALUE;
    ~NativeFile() { if (h != INVALID_HANDLE_VALUE) CloseHandle(h); }
};
struct Algorithm {
    BCRYPT_ALG_HANDLE h = nullptr;
    ~Algorithm() { if (h) BCryptCloseAlgorithmProvider(h, 0); }
};
uint32_t word(const unsigned char *bytes, size_t at) {
    return uint32_t(bytes[at]) | uint32_t(bytes[at + 1]) << 8 |
        uint32_t(bytes[at + 2]) << 16 | uint32_t(bytes[at + 3]) << 24;
}
bool range(uint64_t at, uint64_t length, uint64_t total) {
    return at <= total && length <= total - at;
}
void validate(const void *data, size_t size) {
    const auto *p = static_cast<const unsigned char *>(data);
    if (size < 0x178 || std::memcmp(p, "XBEH", 4)) fail("Invalid XBE header/magic");
    const uint32_t base = word(p, 0x104), header = word(p, 0x108), image = word(p, 0x10c);
    if (base != 0x10000 || header < 0x178 || header > 0x10000 || header > size ||
        image < header || !range(base, image, 0x04000000)) fail("Invalid XBE image/header bounds");
    const uint32_t cert_va = word(p, 0x118);
    if (cert_va < base || !range(cert_va - base, 0x5c, header)) fail("Invalid XBE certificate bounds");
    const size_t cert = cert_va - base;
    const uint32_t cert_size = word(p, cert);
    if (cert_size < 0x5c || !range(cert, cert_size, header)) fail("Invalid XBE certificate size");
    const uint32_t count = word(p, 0x11c), sections_va = word(p, 0x120);
    if (!count || sections_va < base || !range(sections_va - base, uint64_t(count) * 56, header))
        fail("Invalid XBE section table bounds");
    for (uint32_t i = 0; i < count; ++i) {
        const size_t s = size_t(sections_va - base) + size_t(i) * 56;
        const uint32_t va = word(p, s + 4), virtual_size = word(p, s + 8);
        const uint32_t raw = word(p, s + 12), raw_size = word(p, s + 16);
        if (va < base || !range(va - base, virtual_size, image) || raw_size > virtual_size ||
            !range(raw, raw_size, size)) fail("Invalid XBE section extent");
    }
    Algorithm algorithm;
    unsigned char digest[32];
    if (BCryptOpenAlgorithmProvider(&algorithm.h, BCRYPT_SHA256_ALGORITHM, nullptr, 0) < 0 ||
        BCryptHash(algorithm.h, nullptr, 0, const_cast<PUCHAR>(p), static_cast<ULONG>(size), digest, sizeof(digest)) < 0)
        fail("Windows SHA-256 calculation failed");
    char actual_hash[65];
    for (size_t i = 0; i < sizeof(digest); ++i) std::snprintf(actual_hash + i * 2, 3, "%02x", digest[i]);
    const uint32_t actual_id = word(p, cert + 8);
    std::fprintf(stderr, "[DISC] XBE title ID expected=0x%08X actual=0x%08X; SHA-256 expected=%s actual=%s\n",
        title_id, actual_id, supported_hash, actual_hash);
    if (actual_id != title_id) fail("Unsupported XBE title ID");
    if (std::strcmp(actual_hash, supported_hash)) fail("Unsupported XBE SHA-256");
}
fs::path exe_directory() {
    wchar_t filename[32768];
    const DWORD n = GetModuleFileNameW(nullptr, filename, DWORD(std::size(filename)));
    if (!n || n >= std::size(filename)) fail("Cannot resolve executable directory");
    return fs::path(filename).parent_path();
}
void load_folder(const fs::path &path, doa1u_boot_source &source) {
    NativeFile file;
    file.h = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL | FILE_FLAG_SEQUENTIAL_SCAN, nullptr);
    if (file.h == INVALID_HANDLE_VALUE) fail("Cannot open extracted Doa1.xbe (Win32 " + std::to_string(GetLastError()) + ")");
    LARGE_INTEGER length{};
    if (!GetFileSizeEx(file.h, &length) || length.QuadPart <= 0 || uint64_t(length.QuadPart) > xbe_limit)
        fail("Invalid/excessive XBE file size (limit 64 MiB)");
    source.xbe_size = static_cast<size_t>(length.QuadPart);
    source.xbe_data = std::malloc(source.xbe_size);
    if (!source.xbe_data) throw std::bad_alloc();
    DWORD read = 0;
    if (!ReadFile(file.h, source.xbe_data, DWORD(source.xbe_size), &read, nullptr) || read != source.xbe_size)
        fail("Failed to read complete extracted XBE");
}
} // namespace

extern "C" int doa1u_boot_open(const wchar_t *directory, doa1u_boot_source *out) {
    if (!out || out->xbe_data || out->xbe_size || out->image_mode || active) {
        std::fprintf(stderr, "[DISC] Bootstrap requires an empty output and no active source\n"); return 0;
    }
    doa1u_boot_source source{};
    std::string selected = "(unresolved executable directory)";
    try {
        const fs::path root = directory ? fs::path(directory) : exe_directory();
        selected = utf8(root);
        if (!root.is_absolute()) fail("Bootstrap directory must be absolute");
        std::vector<fs::path> candidates;
        // Fail on enumeration errors; never treat a failed scan as 'no image'.
        for (const auto &entry : fs::directory_iterator(root)) {
            const auto ext = entry.path().extension().wstring();
            if ((_wcsicmp(ext.c_str(), L".iso") == 0 || _wcsicmp(ext.c_str(), L".xiso") == 0) &&
                !entry.is_directory()) candidates.push_back(entry.path());
        }
        std::sort(candidates.begin(), candidates.end());
        if (candidates.size() > 1) {
            for (const auto &path : candidates) std::fprintf(stderr, "[DISC] Ambiguous image: %s\n", utf8(path).c_str());
            fail("Multiple disc images beside EXE; keep exactly one candidate");
        }
        if (candidates.empty()) {
            selected = utf8(root / executable);
            std::fprintf(stderr, "[DISC] Folder source: %s\n", selected.c_str());
            load_folder(root / executable, source);
        } else {
            selected = utf8(candidates.front());
            std::fprintf(stderr, "[DISC] Image source: %s; root executable: %s\n", selected.c_str(), executable);
            char error[512]{};
            const auto mounted = doa1u_image_mount(candidates.front().c_str(), error, sizeof(error));
            if (mounted != XISO_OK) fail(std::string("Cannot mount image: ") + xiso_result_string(mounted) + "; " + error);
            source.image_mode = 1;
            const auto loaded = doa1u_image_load_file(executable, xbe_limit, &source.xbe_data, &source.xbe_size);
            if (loaded != XISO_OK) fail(std::string("Cannot load root Doa1.xbe: ") + xiso_result_string(loaded));
        }
        validate(source.xbe_data, source.xbe_size);
        *out = source; active = out;
        std::fprintf(stderr, "[DISC] Verified %zu original XBE bytes; %s source retained for process lifetime\n",
            source.xbe_size, source.image_mode ? "image" : "folder");
        return 1;
    } catch (const std::exception &e) {
        std::fprintf(stderr, "[DISC] Startup rejected '%s': %s\n", selected.c_str(), e.what());
    } catch (...) { std::fprintf(stderr, "[DISC] Startup rejected '%s': unexpected error\n", selected.c_str()); }
    if (source.image_mode) doa1u_image_unmount();
    std::free(source.xbe_data);
    return 0;
}
extern "C" void doa1u_boot_close(doa1u_boot_source *source) {
    if (!source || active != source) return;
    if (source->image_mode) doa1u_image_unmount();
    std::free(source->xbe_data);
    *source = {}; active = nullptr;
}
