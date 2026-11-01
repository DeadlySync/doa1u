// Offline regression: synthetic images are temporary and never game inputs.
#include "xiso_reader.h"
#include <windows.h>
#include <winioctl.h>
#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <memory>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

extern "C" int xiso_reader_c_check(void);
namespace {
constexpr size_t sector = 2048;
constexpr size_t descriptor = 32 * sector;
constexpr size_t root = 40 * sector;
constexpr size_t alpha_record = root + 20;
constexpr size_t zero_record = root + 44;
constexpr size_t padded_record = root + 64;
constexpr size_t subdir = 41 * sector;
constexpr size_t padded = 42 * sector;
constexpr size_t payload = 50 * sector;
const char magic[] = "MICROSOFT*XBOX*MEDIA";
unsigned checks = 0;
void check(bool condition, const char *message) {
    ++checks;
    if (!condition) throw std::runtime_error(message);
}
void put16(std::vector<uint8_t> &v, size_t at, uint16_t n) {
    v.at(at) = uint8_t(n); v.at(at + 1) = uint8_t(n >> 8);
}
void put32(std::vector<uint8_t> &v, size_t at, uint32_t n) {
    put16(v, at, uint16_t(n)); put16(v, at + 2, uint16_t(n >> 16));
}
void record(std::vector<uint8_t> &v, size_t at, const char *name, uint32_t location,
            uint32_t size, uint8_t attributes = 0, uint16_t left = 0, uint16_t right = 0) {
    const size_t n = std::strlen(name);
    put16(v, at, left); put16(v, at + 2, right);
    put32(v, at + 4, location); put32(v, at + 8, size);
    v.at(at + 12) = attributes; v.at(at + 13) = static_cast<uint8_t>(n);
    std::memcpy(v.data() + at + 14, name, n);
}
std::vector<uint8_t> fixture() {
    std::vector<uint8_t> v(64 * sector, 0xff);
    std::fill(v.begin() + descriptor, v.begin() + descriptor + sector, uint8_t(0));
    std::memcpy(v.data() + descriptor, magic, 20);
    std::memcpy(v.data() + descriptor + sector - 20, magic, 20);
    put32(v, descriptor + 20, 40); put32(v, descriptor + 24, sector);
    record(v, root, "Folder", 41, sector, 0x10, 5, 11);
    record(v, alpha_record, "Alpha.bin", 50, 6);
    record(v, zero_record, "Zero", 0, 0, 0x10, 16, 0);
    record(v, padded_record, "Padded", 42, sector, 0x10);
    record(v, subdir, "Mixed.DAT", 51, 8);
    std::memcpy(v.data() + payload, "abcdef", 6);
    std::memcpy(v.data() + 51 * sector, "01234567", 8);
    return v;
}

struct TemporaryImage {
    std::wstring path;
    explicit TemporaryImage(const std::vector<uint8_t> &bytes) {
        wchar_t directory[MAX_PATH], filename[MAX_PATH];
        check(GetTempPathW(MAX_PATH, directory) > 0, "GetTempPath failed");
        check(GetTempFileNameW(directory, L"d1x", 0, filename) != 0, "GetTempFileName failed");
        path = filename;
        std::ofstream file(std::filesystem::path(path), std::ios::binary | std::ios::trunc);
        file.write(reinterpret_cast<const char *>(bytes.data()), static_cast<std::streamsize>(bytes.size()));
        check(bool(file), "Could not write synthetic image");
    }
    ~TemporaryImage() { DeleteFileW(path.c_str()); }
    void sparse_payload(uint64_t offset, const char *data, DWORD size) {
        HANDLE h = CreateFileW(path.c_str(), GENERIC_WRITE, 0, nullptr, OPEN_EXISTING, 0, nullptr);
        check(h != INVALID_HANDLE_VALUE, "Could not reopen sparse fixture");
        DWORD ignored = 0;
        const BOOL sparse = DeviceIoControl(h, FSCTL_SET_SPARSE, nullptr, 0, nullptr, 0, &ignored, nullptr);
        LARGE_INTEGER position; position.QuadPart = static_cast<LONGLONG>(offset);
        const BOOL positioned = SetFilePointerEx(h, position, nullptr, FILE_BEGIN);
        DWORD written = 0;
        const BOOL written_ok = positioned && WriteFile(h, data, size, &written, nullptr);
        CloseHandle(h);
        check(sparse && written_ok && written == size, "Could not write >4GiB sparse fixture");
    }
};
using Mount = std::unique_ptr<xiso_image, decltype(&xiso_unmount)>;
Mount mount(const wchar_t *path) {
    xiso_image *image = nullptr;
    char message[256];
    const xiso_result result = xiso_mount(path, &image, message, sizeof(message));
    if (result != XISO_OK) {
        std::fprintf(stderr, "mount failed: %s (%s)\n", message, xiso_result_string(result));
        throw std::runtime_error("Expected valid image");
    }
    return Mount(image, xiso_unmount);
}
void reject(std::vector<uint8_t> bytes, xiso_result expected = XISO_INVALID_IMAGE) {
    TemporaryImage file(bytes);
    xiso_image *image = nullptr;
    char message[64];
    const auto result = xiso_mount(file.path.c_str(), &image, message, sizeof(message));
    if (result != expected) std::fprintf(stderr, "rejection mismatch: %s, expected %s; %s\n",
                                         xiso_result_string(result), xiso_result_string(expected), message);
    check(result == expected && !image && message[0], "Invalid image accepted or wrong failure");
    // Failed mounts must release the image handle.
    HANDLE h = CreateFileW(file.path.c_str(), GENERIC_WRITE, 0, nullptr, OPEN_EXISTING, 0, nullptr);
    const bool released = h != INVALID_HANDLE_VALUE;
    if (released) CloseHandle(h);
    check(released, "Failed mount leaked image handle");
}

void valid_tests() {
    TemporaryImage file(fixture());
    auto image = mount(file.path.c_str());
    xiso_info info{};
    check(xiso_get_info(image.get(), &info) == XISO_OK, "Info failed");
    check(info.file_count == 2 && info.directory_count == 4 && info.partition_offset == 0,
          "Incorrect index counts");
    check(info.metadata_bytes_read == 4 * sector, "Reader scanned unexpected data");
    xiso_entry entry{};
    check(xiso_lookup(image.get(), "\\fOlDeR//./mIXed.dat/", &entry) == XISO_OK,
          "Case/separator normalization failed");
    check(!std::strcmp(entry.path, "Folder/Mixed.DAT") && !std::strcmp(entry.name, "Mixed.DAT"),
          "Original filename spelling lost");
    check(entry.parent_id != 0 && entry.size == 8, "Entry metadata incorrect");
    char buffer[16]; std::memset(buffer, '?', sizeof(buffer));
    size_t got = 999;
    check(xiso_read(image.get(), entry.id, 6, buffer, sizeof(buffer), &got) == XISO_OK && got == 2,
          "EOF partial read failed");
    check(buffer[0] == '6' && buffer[1] == '7' && buffer[2] == '?', "Read crossed file extent");
    check(xiso_read(image.get(), entry.id, UINT64_MAX, buffer, 1, &got) == XISO_OK && got == 0,
          "Huge offset wrapped");
    check(xiso_read(image.get(), entry.id, 8, buffer, 1, &got) == XISO_OK && got == 0, "EOF failed");
    check(xiso_read(image.get(), entry.id, 0, nullptr, 0, &got) == XISO_OK && got == 0, "Zero read failed");
    check(xiso_read(image.get(), entry.id, 0, nullptr, 1, &got) == XISO_INVALID_ARGUMENT,
          "Null buffer accepted");
    check(xiso_lookup(image.get(), "missing", &entry) == XISO_NOT_FOUND, "Missing file found");
    check(xiso_lookup(image.get(), "Folder/../Alpha.bin", &entry) == XISO_INVALID_ARGUMENT,
          "Parent path traversal accepted");
    check(xiso_lookup(image.get(), "D:\\Alpha.bin", &entry) == XISO_INVALID_ARGUMENT,
          "Reader unexpectedly resolved Xbox drive");
    check(xiso_lookup(image.get(), "", &entry) == XISO_OK && entry.id == 0 && entry.is_directory,
          "Root lookup failed");
    check(xiso_read(image.get(), 0, 0, buffer, 1, &got) == XISO_IS_DIRECTORY, "Read directory accepted");
    size_t count = 0;
    check(xiso_child_count(image.get(), 0, &count) == XISO_OK && count == 4, "Root enumeration failed");
    check(xiso_child_at(image.get(), 0, 0, &entry) == XISO_OK && !std::strcmp(entry.name, "Alpha.bin"),
          "Enumeration not normalized-name sorted");
    check(xiso_child_count(image.get(), entry.id, &count) == XISO_NOT_DIRECTORY, "File enumerated as directory");
    check(xiso_child_at(image.get(), 0, 4, &entry) == XISO_NOT_FOUND, "Enumeration bounds failed");
    check(xiso_lookup(image.get(), "Zero", &entry) == XISO_OK && entry.is_directory, "Empty dir lost");
    check(xiso_child_count(image.get(), entry.id, &count) == XISO_OK && count == 0, "Empty dir not empty");
    check(xiso_lookup(image.get(), "Padded", &entry) == XISO_OK, "Padded dir lost");
    check(xiso_child_count(image.get(), entry.id, &count) == XISO_OK && count == 0, "FF dir not empty");
    check(xiso_get_entry(image.get(), UINT32_MAX, &entry) == XISO_NOT_FOUND, "Invalid ID accepted");
    std::string long_path(4097, 'x');
    check(xiso_lookup(image.get(), long_path.c_str(), &entry) == XISO_LIMIT_EXCEEDED, "Unbounded lookup path");
    // There is no shared seek pointer: simultaneous reads must not interfere.
    xiso_entry alpha{}, mixed{};
    check(xiso_lookup(image.get(), "Alpha.bin", &alpha) == XISO_OK &&
          xiso_lookup(image.get(), "Folder/Mixed.dat", &mixed) == XISO_OK, "Read setup failed");
    std::atomic<bool> good{true};
    std::vector<std::thread> threads;
    for (int t = 0; t < 8; ++t) threads.emplace_back([&, t] {
        const auto &e = (t % 2) ? mixed : alpha;
        const char *expected = (t % 2) ? "01234567" : "abcdef";
        for (size_t n = 0; n < 1000; ++n) {
            const size_t start = n % static_cast<size_t>(e.size);
            char data[8]; size_t received = 0;
            if (xiso_read(image.get(), e.id, start, data, sizeof(data), &received) != XISO_OK ||
                received != e.size - start || std::memcmp(data, expected + start, received)) good = false;
        }
    });
    for (auto &t : threads) t.join();
    check(good, "Concurrent read data corruption");
    HANDLE writer = CreateFileW(file.path.c_str(), GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
                                nullptr, OPEN_EXISTING, 0, nullptr);
    if (writer != INVALID_HANDLE_VALUE) CloseHandle(writer);
    check(writer == INVALID_HANDLE_VALUE, "Mounted image allows concurrent mutation");
    image.reset();
    for (int n = 0; n < 30; ++n) { auto again = mount(file.path.c_str()); }
}

void malformed_tests() {
    auto v = fixture(); v[descriptor] = 0; reject(v);
    v = fixture(); v[descriptor + sector - 1] = 0; reject(v);
    v = fixture(); put32(v, descriptor + 20, UINT32_MAX); reject(v);
    v = fixture(); put32(v, alpha_record + 8, UINT32_MAX); reject(v);
    v = fixture(); put32(v, alpha_record + 4, UINT32_MAX); reject(v);
    v = fixture(); put16(v, alpha_record, 5); reject(v); // self-link
    v = fixture(); put16(v, root + 2, 5); reject(v); // shared child
    v = fixture(); put16(v, root + 2, 7); reject(v); // pointer into a name
    v = fixture(); put16(v, root + 2, 65534); reject(v); // outside table
    v = fixture(); put16(v, root + 2, 0); reject(v); // unreachable physical nodes
    v = fixture(); put16(v, root, 11); put16(v, root + 2, 5); reject(v); // invalid BST order
    v = fixture(); record(v, padded_record, "alpha.BIN", 50, 6); reject(v); // duplicate path
    v = fixture(); v[root + 14] = '/'; reject(v);
    v = fixture(); v[root + 15] = 0; reject(v); // embedded NUL
    v = fixture(); record(v, root, "..", 41, sector, 0x10, 5, 11); reject(v);
    v = fixture(); v[root + 13] = 0; reject(v); // non-padding empty name
    v = fixture(); put32(v, root + 4, 40); reject(v); // directory cycle to root
    v = fixture(); put32(v, padded_record + 4, 41); reject(v); // directory alias
    v = fixture(); put32(v, descriptor + 24, 15); reject(v); // truncated name
    v = fixture(); v.resize(descriptor + 10); reject(v); // truncated descriptor
    v = fixture(); put32(v, descriptor + 24, 1024 * 1024 + 1);
    v.resize(root + 1024 * 1024 + 1, 0xff); reject(v, XISO_LIMIT_EXCEEDED);
    // A directory spanning sectors must not lose records after sector padding.
    v = fixture(); put32(v, descriptor + 24, 2 * sector);
    std::copy(v.begin() + subdir, v.begin() + subdir + sector, v.begin() + padded);
    put32(v, root + 4, 42); // move nested table out of expanded root
    std::fill(v.begin() + root + sector, v.begin() + root + 2 * sector, uint8_t(0xff));
    record(v, root + sector, "Zlast", 52, 0);
    put16(v, zero_record + 2, sector / 4);
    // This fixture intentionally aliases the Padded dir; replace it with zero size.
    put32(v, padded_record + 8, 0);
    TemporaryImage multisector(v);
    auto image = mount(multisector.path.c_str());
    xiso_entry e{};
    check(xiso_lookup(image.get(), "Zlast", &e) == XISO_OK, "Multi-sector directory lost file");
}

std::vector<uint8_t> chain_fixture(uint32_t levels, const std::string &name) {
    auto v = fixture();
    v.resize((41 + size_t(levels)) * sector, 0xff);
    std::fill(v.begin() + root, v.end(), uint8_t(0xff));
    for (uint32_t level = 0; level < levels; ++level)
        record(v, root + size_t(level) * sector, name.c_str(), 41 + level, sector, 0x10);
    return v;
}
void empty_and_limit_tests() {
    auto v = fixture();
    put32(v, descriptor + 20, 0); put32(v, descriptor + 24, 0);
    TemporaryImage empty(v);
    auto image = mount(empty.path.c_str());
    size_t count = 99;
    check(xiso_child_count(image.get(), 0, &count) == XISO_OK && count == 0, "Zero-sized root failed");
    v = fixture();
    std::fill(v.begin() + root, v.begin() + root + sector, uint8_t(0));
    TemporaryImage zeros(v);
    image = mount(zeros.path.c_str());
    check(xiso_child_count(image.get(), 0, &count) == XISO_OK && count == 0, "Zero-padded root failed");
    // Same basename in distinct directories must not collide.
    v = fixture(); record(v, subdir, "Alpha.bin", 51, 8);
    TemporaryImage repeated(v);
    image = mount(repeated.path.c_str());
    xiso_entry a{}, b{};
    check(xiso_lookup(image.get(), "alpha.bin", &a) == XISO_OK &&
          xiso_lookup(image.get(), "Folder/ALPHA.BIN", &b) == XISO_OK && a.id != b.id,
          "Index keyed on basename rather than full path");
    TemporaryImage deepest(chain_fixture(256, "a"));
    image = mount(deepest.path.c_str());
    xiso_info info{}; xiso_get_info(image.get(), &info);
    check(info.directory_count == 257, "Maximum supported depth lost directories");
    reject(chain_fixture(257, "a"), XISO_LIMIT_EXCEEDED);
    reject(chain_fixture(17, std::string(255, 'n')), XISO_LIMIT_EXCEEDED);
    TemporaryImage longest_name(chain_fixture(1, std::string(255, 'n')));
    image = mount(longest_name.path.c_str());
    check(xiso_child_at(image.get(), 0, 0, &a) == XISO_OK && std::strlen(a.name) == 255,
          "Maximum-length filename failed");
}

void large_and_prefixed_tests() {
    auto v = fixture();
    const uint64_t high = (uint64_t(1) << 32) + 8 * sector;
    put32(v, alpha_record + 4, static_cast<uint32_t>(high / sector));
    TemporaryImage file(v);
    file.sparse_payload(high, "abcdef", 6);
    auto image = mount(file.path.c_str());
    xiso_entry e{}; char data[6]; size_t got = 0;
    check(xiso_lookup(image.get(), "alpha.bin", &e) == XISO_OK && e.image_offset == high,
          "64-bit extent truncated");
    check(xiso_read(image.get(), e.id, 0, data, sizeof(data), &got) == XISO_OK && got == 6 &&
          !std::memcmp(data, "abcdef", 6), "Read above 4GiB failed");
    image.reset();
    // A valid image with a known leading partition prefix uses base-relative extents.
    v = fixture();
    std::vector<uint8_t> prefixed(0x30600 + v.size(), 0);
    std::copy(v.begin(), v.end(), prefixed.begin() + 0x30600);
    TemporaryImage prefix(prefixed);
    image = mount(prefix.path.c_str());
    xiso_info info{}; xiso_get_info(image.get(), &info);
    check(info.partition_offset == 0x30600, "Partition base not detected");
    check(xiso_lookup(image.get(), "alpha.bin", &e) == XISO_OK && e.image_offset == 0x30600 + payload,
          "Partition-relative extent incorrect");
    check(xiso_read(image.get(), e.id, 0, data, sizeof(data), &got) == XISO_OK && got == 6 &&
          !std::memcmp(data, "abcdef", 6), "Prefixed image read failed");
}

void compare_file(const xiso_image *image, const xiso_entry &e, const std::filesystem::path &folder) {
    const auto path = folder / std::filesystem::path(e.path);
    check(std::filesystem::file_size(path) == e.size, "Extracted file size mismatch");
    std::ifstream original(path, std::ios::binary);
    check(bool(original), "Could not open extracted file");
    std::vector<char> expected(1024 * 1024), actual(expected.size());
    uint64_t offset = 0;
    while (offset < e.size) {
        size_t count = static_cast<size_t>((std::min)(uint64_t(expected.size()), e.size - offset));
        original.read(expected.data(), static_cast<std::streamsize>(count));
        size_t got = 0;
        check(size_t(original.gcount()) == count &&
              xiso_read(image, e.id, offset, actual.data(), count, &got) == XISO_OK && got == count &&
              !std::memcmp(expected.data(), actual.data(), count), "Image/extracted content mismatch");
        offset += count;
    }
    std::printf("  content match: %s (%llu bytes)\n", e.path, static_cast<unsigned long long>(e.size));
}
void real_image_tests(const wchar_t *path, const wchar_t *folder, bool full) {
    const auto start = std::chrono::steady_clock::now();
    auto image = mount(path);
    const double ms = std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - start).count();
    xiso_info info{}; xiso_get_info(image.get(), &info);
    std::printf("Real image: %u files, %u directories, %llu metadata bytes, mount %.3f ms\n",
                info.file_count, info.directory_count, static_cast<unsigned long long>(info.metadata_bytes_read), ms);
    if (!folder) return;
    unsigned compared = 0;
    for (uint32_t id = 1; ; ++id) {
        xiso_entry e{};
        if (xiso_get_entry(image.get(), id, &e) == XISO_NOT_FOUND) break;
        if (e.is_directory) continue;
        std::string name(e.name);
        for (auto &c : name) if (c >= 'A' && c <= 'Z') c += 'a' - 'A';
        const bool sample = name == "doa1.xbe" || name == "default.xbe" || name == "ks_cmd.bin" ||
                            name == "hate_kin.bin" || (name.size() >= 4 && name.substr(name.size() - 4) == ".sfd");
        if (full || sample) { compare_file(image.get(), e, std::filesystem::path(folder)); ++compared; }
    }
    check(compared > 0, "No real files compared");
    std::printf("Compared %u complete files byte-for-byte.\n", compared);
}
} // namespace

int wmain(int argc, wchar_t **argv) {
    try {
        check(xiso_reader_c_check() != 0, "C ABI regression failed");
        valid_tests();
        malformed_tests();
        empty_and_limit_tests();
        large_and_prefixed_tests();
        if (argc > 1) {
            if (argc > 4 || (argc == 4 && std::wcscmp(argv[3], L"--full"))) {
                std::fprintf(stderr, "Usage: xiso_reader_check [image [extracted-folder [--full]]]\n");
                return 2;
            }
            real_image_tests(argv[1], argc > 2 ? argv[2] : nullptr, argc == 4);
        }
        std::printf("PASS: XISO reader (%u checks; includes 8000 concurrent reads).\n", checks);
        return 0;
    } catch (const std::exception &error) {
        std::fprintf(stderr, "FAIL after %u checks: %s\n", checks, error.what());
        return 1;
    }
}
