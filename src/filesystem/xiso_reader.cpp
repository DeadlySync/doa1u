// Project-owned read-only XDVDFS implementation. No extract-xiso/XEMU code is
// incorporated. Format references and ownership are recorded in README.md.
#include "xiso_reader.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <algorithm>
#include <cstring>
#include <memory>
#include <new>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

namespace {
constexpr uint64_t sector_size = 2048;
constexpr char magic[] = "MICROSOFT*XBOX*MEDIA";
constexpr size_t max_entries = 1024 * 1024;
constexpr uint64_t max_metadata = 64 * 1024 * 1024;
constexpr uint32_t max_table = 1024 * 1024;
constexpr size_t max_path = 4096;
constexpr uint32_t max_depth = 256;

struct FileHandle {
    HANDLE value = INVALID_HANDLE_VALUE;
    ~FileHandle() { if (value != INVALID_HANDLE_VALUE) CloseHandle(value); }
    FileHandle() = default;
    FileHandle(const FileHandle &) = delete;
    FileHandle &operator=(const FileHandle &) = delete;
};
struct Entry {
    std::string name, path, key;
    uint64_t offset = 0, size = 0;
    uint32_t parent = 0, depth = 0;
    uint8_t attributes = 0;
    std::vector<uint32_t> children;
    bool directory() const { return (attributes & 0x10) != 0; }
};
struct Failure { xiso_result result; const char *message; };
[[noreturn]] void fail(xiso_result r, const char *s) { throw Failure{r, s}; }
uint16_t le16(const uint8_t *p) { return uint16_t(p[0]) | uint16_t(p[1]) << 8; }
uint32_t le32(const uint8_t *p) { return uint32_t(le16(p)) | uint32_t(le16(p + 2)) << 16; }
uint64_t le64(const uint8_t *p) { return uint64_t(le32(p)) | uint64_t(le32(p + 4)) << 32; }
char fold(char c) { return c >= 'a' && c <= 'z' ? char(c - ('a' - 'A')) : c; }
bool valid_name(const std::string &name) {
    if (name.empty() || name == "." || name == "..") return false;
    for (unsigned char c : name)
        if (c < 32 || c == 127 || c == '/' || c == '\\' || c == ':') return false;
    return true;
}
xiso_result normalize(const char *path, std::string &key) {
    if (!path) return XISO_INVALID_ARGUMENT;
    // Bounded C-string input: accept at most max_path bytes, plus terminator.
    size_t length = 0;
    while (length <= max_path && path[length]) ++length;
    if (length > max_path) return XISO_LIMIT_EXCEEDED;
    size_t start = 0;
    while (start < length) {
        while (start < length && (path[start] == '/' || path[start] == '\\')) ++start;
        size_t end = start;
        while (end < length && path[end] != '/' && path[end] != '\\') ++end;
        if (end > start) {
            std::string part(path + start, end - start);
            if (part != ".") {
                if (!valid_name(part)) return XISO_INVALID_ARGUMENT;
                if (!key.empty()) key += '/';
                for (char c : part) key += fold(c);
            }
        }
        start = end;
    }
    return XISO_OK;
}
void error_text(char *out, size_t capacity, const char *message) {
    if (out && capacity) {
        const size_t n = (std::min)(capacity - 1, std::strlen(message));
        std::memcpy(out, message, n);
        out[n] = 0;
    }
}
} // namespace

struct xiso_image {
    FileHandle file;
    xiso_info info{};
    std::vector<Entry> entries;
    std::unordered_map<std::string, uint32_t> index;
};

namespace {
bool in_bounds(const xiso_image &image, uint64_t offset, uint64_t size) {
    return offset <= image.info.image_size && size <= image.info.image_size - offset;
}
// Each call owns its event and OVERLAPPED; the shared file pointer is never used.
xiso_result read_at(const xiso_image &image, uint64_t offset, void *buffer,
                    size_t length, size_t &copied) {
    copied = 0;
    if (!length) return XISO_OK;
    if (!in_bounds(image, offset, length)) return XISO_IO_ERROR;
    FileHandle event;
    event.value = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    if (!event.value) { event.value = INVALID_HANDLE_VALUE; return XISO_IO_ERROR; }
    auto *dest = static_cast<uint8_t *>(buffer);
    while (copied < length) {
        const uint64_t position = offset + copied;
        const DWORD requested = static_cast<DWORD>((std::min)(length - copied, size_t(1024 * 1024)));
        OVERLAPPED operation{};
        operation.Offset = DWORD(position);
        operation.OffsetHigh = DWORD(position >> 32);
        operation.hEvent = event.value;
        ResetEvent(event.value);
        DWORD received = 0;
        if (!ReadFile(image.file.value, dest + copied, requested, &received, &operation)) {
            if (GetLastError() != ERROR_IO_PENDING) return XISO_IO_ERROR;
            if (!GetOverlappedResult(image.file.value, &operation, &received, TRUE)) return XISO_IO_ERROR;
        }
        if (!received) return XISO_IO_ERROR;
        copied += received;
    }
    return XISO_OK;
}
void metadata_read(xiso_image &image, uint64_t offset, void *data, size_t length) {
    size_t copied;
    if (read_at(image, offset, data, length, copied) != XISO_OK)
        fail(XISO_IO_ERROR, "Could not read XDVDFS metadata");
    image.info.metadata_bytes_read += copied;
}
uint64_t extent(const xiso_image &image, uint32_t sector, uint32_t size) {
    // 32-bit sectors * 2048 plus the supported partition bases cannot overflow.
    const uint64_t offset = image.info.partition_offset + uint64_t(sector) * sector_size;
    if (!in_bounds(image, offset, size)) fail(XISO_INVALID_IMAGE, "Entry extent exceeds image size");
    return offset;
}
void export_entry(const xiso_image &image, uint32_t id, xiso_entry &out) {
    const auto &e = image.entries[id];
    out = {id, e.parent, e.name.c_str(), e.path.c_str(), e.offset, e.size,
           e.attributes, e.directory() ? 1 : 0};
}
struct Node { uint32_t offset; uint16_t left, right; uint32_t id; };
bool padding(const uint8_t *begin, const uint8_t *end) {
    while (begin != end) { if (*begin != 0 && *begin != 0xff) return false; ++begin; }
    return true;
}

void parse_directory(xiso_image &image, uint32_t parent, uint64_t &total_metadata) {
    // Copy these values: appending entries can relocate the vector.
    const uint64_t size = image.entries[parent].size;
    const uint64_t offset = image.entries[parent].offset;
    const uint32_t depth = image.entries[parent].depth;
    const std::string prefix = image.entries[parent].path;
    const std::string key_prefix = image.entries[parent].key;
    if (!size) return;
    if (size > max_table || size > max_metadata - total_metadata)
        fail(XISO_LIMIT_EXCEEDED, "Directory metadata limit exceeded");
    total_metadata += size;
    std::vector<uint8_t> data(static_cast<size_t>(size));
    metadata_read(image, offset, data.data(), data.size());
    std::vector<Node> nodes;
    std::unordered_map<uint32_t, size_t> boundaries;
    for (size_t block = 0; block < data.size(); block += sector_size) {
        const size_t end = (std::min)(data.size(), block + size_t(sector_size));
        size_t pos = block;
        while (pos < end) {
            const auto *p = data.data() + pos;
            // Sector padding is FF or zero. A real entry cannot have a zero
            // filename length. Inspect all trailing bytes, not just the header.
            if (end - pos < 14 || (p[0] == 0xff && p[1] == 0xff) || p[13] == 0) {
                if (!padding(p, data.data() + end))
                    fail(XISO_INVALID_IMAGE, "Malformed directory padding or empty name");
                break;
            }
            const size_t record_size = (size_t(14) + p[13] + 3) & ~size_t(3);
            if (record_size > end - pos) fail(XISO_INVALID_IMAGE, "Directory record crosses sector/table boundary");
            Entry entry;
            entry.name.assign(reinterpret_cast<const char *>(p + 14), p[13]);
            if (!valid_name(entry.name)) fail(XISO_INVALID_IMAGE, "Invalid directory entry name");
            entry.path = prefix.empty() ? entry.name : prefix + '/' + entry.name;
            if (entry.path.size() > max_path) fail(XISO_LIMIT_EXCEEDED, "Disc path length limit exceeded");
            entry.key = key_prefix;
            if (!entry.key.empty()) entry.key += '/';
            for (char c : entry.name) entry.key += fold(c);
            entry.parent = parent;
            entry.depth = depth + 1;
            entry.attributes = p[12];
            if (entry.directory() && entry.depth > max_depth)
                fail(XISO_LIMIT_EXCEEDED, "Directory depth limit exceeded");
            entry.size = le32(p + 8);
            entry.offset = extent(image, le32(p + 4), static_cast<uint32_t>(entry.size));
            if (image.entries.size() >= max_entries) fail(XISO_LIMIT_EXCEEDED, "Entry count limit exceeded");
            const uint32_t id = static_cast<uint32_t>(image.entries.size());
            if (!image.index.emplace(entry.key, id).second)
                fail(XISO_INVALID_IMAGE, "Duplicate case-insensitive disc path");
            image.entries.push_back(std::move(entry));
            image.entries[parent].children.push_back(id);
            boundaries.emplace(static_cast<uint32_t>(pos), nodes.size());
            nodes.push_back({static_cast<uint32_t>(pos), le16(p), le16(p + 2), id});
            pos += record_size;
        }
    }
    if (nodes.empty()) return; // Empty FF/zero-filled tables are valid.
    if (nodes.front().offset != 0) fail(XISO_INVALID_IMAGE, "Missing directory tree root");
    // Independently validate the link graph against physical record boundaries.
    // This rejects cycles, shared children, links into names/padding, and orphan
    // records that a permissive linear-only reader would silently accept.
    struct Branch { uint32_t offset; const std::string *lower, *upper; };
    std::vector<Branch> pending{{0, nullptr, nullptr}};
    std::unordered_set<uint32_t> visited;
    while (!pending.empty()) {
        const Branch branch = pending.back();
        pending.pop_back();
        const uint32_t pos = branch.offset;
        const auto match = boundaries.find(pos);
        if (match == boundaries.end()) fail(XISO_INVALID_IMAGE, "Directory tree pointer is not a record boundary");
        if (!visited.insert(pos).second) fail(XISO_INVALID_IMAGE, "Directory tree cycle or shared child");
        const auto &n = nodes[match->second];
        const auto &key = image.entries[n.id].key;
        if ((branch.lower && key <= *branch.lower) || (branch.upper && key >= *branch.upper))
            fail(XISO_INVALID_IMAGE, "Invalid case-insensitive directory tree ordering");
        if (n.left) pending.push_back({uint32_t(n.left) * 4, branch.lower, &key});
        if (n.right) pending.push_back({uint32_t(n.right) * 4, &key, branch.upper});
    }
    if (visited.size() != nodes.size()) fail(XISO_INVALID_IMAGE, "Unreachable directory records");
    auto &children = image.entries[parent].children;
    std::sort(children.begin(), children.end(), [&image](uint32_t a, uint32_t b) {
        return image.entries[a].key < image.entries[b].key;
    });
}

void build_index(xiso_image &image) {
    const uint64_t bases[] = {0, 0xfd90, 0x30600, 0xfd90000, 0x18300000};
    uint8_t descriptor[sector_size];
    bool found = false;
    for (uint64_t base : bases) {
        const uint64_t location = base + 32 * sector_size;
        if (!in_bounds(image, location, sizeof(descriptor))) continue;
        metadata_read(image, location, descriptor, sizeof(descriptor));
        if (std::memcmp(descriptor, magic, sizeof(magic) - 1)) continue;
        if (std::memcmp(descriptor + sector_size - (sizeof(magic) - 1), magic, sizeof(magic) - 1))
            fail(XISO_INVALID_IMAGE, "Invalid XDVDFS descriptor footer");
        image.info.partition_offset = base;
        image.info.volume_timestamp = le64(descriptor + 28);
        found = true;
        break;
    }
    if (!found) fail(XISO_INVALID_IMAGE, "No supported XDVDFS volume descriptor");
    Entry root;
    root.attributes = 0x10;
    root.size = le32(descriptor + 24);
    root.offset = extent(image, le32(descriptor + 20), static_cast<uint32_t>(root.size));
    image.entries.push_back(std::move(root));
    image.index.emplace("", 0);
    uint64_t total_metadata = 0;
    // Reject directory aliases/cycles without recursion or repeated table reads.
    std::unordered_set<uint64_t> directory_offsets;
    for (size_t id = 0; id < image.entries.size(); ++id) {
        if (!image.entries[id].directory()) { ++image.info.file_count; continue; }
        ++image.info.directory_count;
        if (image.entries[id].size && !directory_offsets.insert(image.entries[id].offset).second)
            fail(XISO_INVALID_IMAGE, "Directory extent cycle or alias");
        parse_directory(image, static_cast<uint32_t>(id), total_metadata);
    }
}
} // namespace

extern "C" xiso_result xiso_mount(const wchar_t *path, xiso_image **out_image,
                                   char *error, size_t capacity) {
    if (out_image) *out_image = nullptr;
    error_text(error, capacity, "");
    if (!path || !*path || !out_image) {
        error_text(error, capacity, "Invalid mount arguments");
        return XISO_INVALID_ARGUMENT;
    }
    try {
        auto image = std::make_unique<xiso_image>();
        image->file.value = CreateFileW(path, GENERIC_READ, FILE_SHARE_READ, nullptr,
                                       OPEN_EXISTING, FILE_FLAG_OVERLAPPED | FILE_FLAG_RANDOM_ACCESS, nullptr);
        if (image->file.value == INVALID_HANDLE_VALUE) fail(XISO_IO_ERROR, "Could not open image read-only");
        LARGE_INTEGER size;
        if (!GetFileSizeEx(image->file.value, &size) || size.QuadPart < 0)
            fail(XISO_IO_ERROR, "Could not query image size");
        image->info.image_size = static_cast<uint64_t>(size.QuadPart);
        build_index(*image);
        *out_image = image.release();
        return XISO_OK;
    } catch (const Failure &f) {
        error_text(error, capacity, f.message);
        return f.result;
    } catch (const std::bad_alloc &) {
        error_text(error, capacity, "Could not allocate XISO metadata");
        return XISO_OUT_OF_MEMORY;
    } catch (...) {
        error_text(error, capacity, "Unexpected XISO metadata error");
        return XISO_INVALID_IMAGE;
    }
}
extern "C" void xiso_unmount(xiso_image *image) { delete image; }
extern "C" xiso_result xiso_get_info(const xiso_image *image, xiso_info *out) {
    if (!image || !out) return XISO_INVALID_ARGUMENT;
    *out = image->info;
    return XISO_OK;
}
extern "C" xiso_result xiso_get_entry(const xiso_image *image, uint32_t id, xiso_entry *out) {
    if (!image || !out) return XISO_INVALID_ARGUMENT;
    if (id >= image->entries.size()) return XISO_NOT_FOUND;
    export_entry(*image, id, *out);
    return XISO_OK;
}
extern "C" xiso_result xiso_lookup(const xiso_image *image, const char *path, xiso_entry *out) {
    if (!image || !path || !out) return XISO_INVALID_ARGUMENT;
    try {
        std::string key;
        const xiso_result result = normalize(path, key);
        if (result != XISO_OK) return result;
        const auto found = image->index.find(key);
        if (found == image->index.end()) return XISO_NOT_FOUND;
        export_entry(*image, found->second, *out);
        return XISO_OK;
    } catch (const std::bad_alloc &) { return XISO_OUT_OF_MEMORY; }
      catch (...) { return XISO_INVALID_ARGUMENT; }
}
extern "C" xiso_result xiso_child_count(const xiso_image *image, uint32_t id, size_t *out) {
    if (!image || !out) return XISO_INVALID_ARGUMENT;
    *out = 0;
    if (id >= image->entries.size()) return XISO_NOT_FOUND;
    if (!image->entries[id].directory()) return XISO_NOT_DIRECTORY;
    *out = image->entries[id].children.size();
    return XISO_OK;
}
extern "C" xiso_result xiso_child_at(const xiso_image *image, uint32_t id, size_t ordinal, xiso_entry *out) {
    if (!image || !out) return XISO_INVALID_ARGUMENT;
    if (id >= image->entries.size()) return XISO_NOT_FOUND;
    const auto &entry = image->entries[id];
    if (!entry.directory()) return XISO_NOT_DIRECTORY;
    if (ordinal >= entry.children.size()) return XISO_NOT_FOUND;
    export_entry(*image, entry.children[ordinal], *out);
    return XISO_OK;
}
extern "C" xiso_result xiso_read(const xiso_image *image, uint32_t id, uint64_t offset,
                                  void *buffer, size_t length, size_t *out_read) {
    if (out_read) *out_read = 0;
    if (!image || !out_read || (!buffer && length)) return XISO_INVALID_ARGUMENT;
    if (id >= image->entries.size()) return XISO_NOT_FOUND;
    const auto &entry = image->entries[id];
    if (entry.directory()) return XISO_IS_DIRECTORY;
    if (offset >= entry.size || !length) return XISO_OK;
    const size_t bounded = static_cast<size_t>((std::min)(uint64_t(length), entry.size - offset));
    return read_at(*image, entry.offset + offset, buffer, bounded, *out_read);
}
extern "C" const char *xiso_result_string(xiso_result result) {
    switch (result) {
    case XISO_OK: return "success";
    case XISO_INVALID_ARGUMENT: return "invalid argument";
    case XISO_IO_ERROR: return "image I/O error";
    case XISO_INVALID_IMAGE: return "invalid XDVDFS image";
    case XISO_LIMIT_EXCEEDED: return "XISO metadata limit exceeded";
    case XISO_OUT_OF_MEMORY: return "out of memory";
    case XISO_NOT_FOUND: return "entry not found";
    case XISO_NOT_DIRECTORY: return "not a directory";
    case XISO_IS_DIRECTORY: return "entry is a directory";
    default: return "unknown XISO result";
    }
}
