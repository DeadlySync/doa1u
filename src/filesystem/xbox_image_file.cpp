// Internal, synchronous read-only adapter underneath the existing Xbox APIs.
#include "xbox_image_file.h"
#include "xbox_disc_path.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <cstdlib>
#include <memory>
#include <mutex>
#include <new>
#include <string>
#include <unordered_map>

namespace {
constexpr NTSTATUS read_only = NTSTATUS(0xc00000a2u);
constexpr NTSTATUS too_small = NTSTATUS(0xc0000023u);
constexpr NTSTATUS not_directory = NTSTATUS(0xc0000103u);
constexpr NTSTATUS is_directory = NTSTATUS(0xc00000bau);
constexpr NTSTATUS sharing_violation = NTSTATUS(0xc0000043u);
struct Mount {
    xiso_image *image = nullptr;
    xiso_info info{};
    ~Mount() { xiso_unmount(image); }
};
struct File {
    std::shared_ptr<Mount> mount;
    xiso_entry entry{};
    ACCESS_MASK access = 0;
    ULONG share = 0, options = 0;
    uint64_t position = 0;
    size_t ordinal = 0;
    bool enumerated = false;
    std::string pattern;
    std::mutex mutex; // Serializes only this open object's cursor/enumeration.
};
struct Handle {
    HANDLE native = nullptr;
    std::shared_ptr<File> file;
    ~Handle() { if (native) CloseHandle(native); }
};
std::mutex registry_mutex;
std::shared_ptr<Mount> mounted;
std::unordered_map<HANDLE, std::shared_ptr<Handle>> handles;
std::shared_ptr<Handle> find_handle(HANDLE handle) {
    std::lock_guard<std::mutex> lock(registry_mutex);
    const auto found = handles.find(handle);
    return found == handles.end() ? nullptr : found->second;
}
NTSTATUS finish(PXBOX_IO_STATUS_BLOCK ios, NTSTATUS status, size_t count = 0) {
    if (ios) { ios->Status = status; ios->Information = count; }
    return status;
}
NTSTATUS translate(xiso_result result) {
    switch (result) {
    case XISO_OK: return STATUS_SUCCESS;
    case XISO_NOT_FOUND: return STATUS_OBJECT_NAME_NOT_FOUND;
    case XISO_NOT_DIRECTORY: return not_directory;
    case XISO_IS_DIRECTORY: return is_directory;
    case XISO_OUT_OF_MEMORY: return STATUS_INSUFFICIENT_RESOURCES;
    case XISO_INVALID_ARGUMENT: case XISO_LIMIT_EXCEEDED: return STATUS_OBJECT_NAME_INVALID;
    default: return STATUS_UNSUCCESSFUL;
    }
}
bool readable(ACCESS_MASK access) {
    return (access & (XBOX_GENERIC_READ | XBOX_GENERIC_ALL | XBOX_FILE_READ_DATA | 0x02000000u)) != 0
        || access == 0 || access == XBOX_SYNCHRONIZE;
}
ULONG attributes(const xiso_entry &e) {
    return ULONG(e.attributes & (1 | 2 | 4 | 0x10 | 0x20)) | FILE_ATTRIBUTE_READONLY;
}
uint64_t file_size(const xiso_entry &e) { return e.is_directory ? 0 : e.size; }
uint64_t allocation(const xiso_entry &e) { return (file_size(e) + 2047) & ~uint64_t(2047); }
void network_info(const Mount &mount, const xiso_entry &e, XBOX_FILE_NETWORK_OPEN_INFORMATION &out) {
    out = {};
    out.CreationTime.QuadPart = out.LastAccessTime.QuadPart = out.LastWriteTime.QuadPart =
        out.ChangeTime.QuadPart = static_cast<LONGLONG>(mount.info.volume_timestamp);
    out.EndOfFile.QuadPart = static_cast<LONGLONG>(file_size(e));
    out.AllocationSize.QuadPart = static_cast<LONGLONG>(allocation(e));
    out.FileAttributes = attributes(e);
}
struct Resolved {
    bool claimed = false;
    NTSTATUS status = STATUS_SUCCESS;
    std::shared_ptr<Mount> mount;
    xiso_entry entry{};
};
Resolved resolve(PXBOX_OBJECT_ATTRIBUTES oa) {
    Resolved out;
    std::shared_ptr<Handle> root;
    {
        std::lock_guard<std::mutex> lock(registry_mutex);
        out.mount = mounted;
        if (oa && oa->RootDirectory) {
            auto it = handles.find(oa->RootDirectory);
            if (it != handles.end()) root = it->second;
        }
    }
    if (!out.mount && !root) return out; // Folder mode unchanged.
    if (!oa || !oa->ObjectName || !oa->ObjectName->Buffer) {
        out.claimed = true; out.status = STATUS_INVALID_PARAMETER; return out;
    }
    const auto &name = *oa->ObjectName;
    if (name.Length >= DOA1U_DISC_PATH_CAPACITY ||
        (name.MaximumLength && name.Length > name.MaximumLength) ||
        std::memchr(name.Buffer, 0, name.Length)) {
        out.claimed = true; out.status = STATUS_OBJECT_NAME_INVALID; return out;
    }
    std::string path(name.Buffer, name.Length);
    char relative[DOA1U_DISC_PATH_CAPACITY];
    const auto kind = doa1u_classify_disc_path(path.c_str(), relative, sizeof(relative));
    if (kind == DOA1U_PATH_INVALID) {
        out.claimed = true; out.status = STATUS_OBJECT_NAME_INVALID; return out;
    }
    if (kind == DOA1U_PATH_RELATIVE && root) {
        out.claimed = true;
        out.mount = root->file->mount;
        if (!root->file->entry.is_directory) { out.status = not_directory; return out; }
        std::string combined(root->file->entry.path);
        if (!combined.empty() && !path.empty()) combined += '/';
        combined += path;
        out.status = translate(xiso_lookup(out.mount->image, combined.c_str(), &out.entry));
    } else if (kind == DOA1U_PATH_DISC && out.mount) {
        out.claimed = true;
        out.status = translate(xiso_lookup(out.mount->image, relative, &out.entry));
    }
    if (out.claimed && out.status == STATUS_OBJECT_NAME_NOT_FOUND) {
        // Distinguish missing parent vs missing final name without host probing.
        std::string parent = kind == DOA1U_PATH_RELATIVE && root
            ? std::string(root->file->entry.path) + '/' + path : std::string(relative);
        const auto cut = parent.find_last_of("/\\");
        if (cut != std::string::npos) {
            parent.resize(cut);
            xiso_entry e{};
            if (xiso_lookup(out.mount->image, parent.c_str(), &e) != XISO_OK || !e.is_directory)
                out.status = STATUS_OBJECT_PATH_NOT_FOUND;
        }
    }
    return out;
}
char fold(char c) { return c >= 'a' && c <= 'z' ? char(c - ('a' - 'A')) : c; }
bool wildcard(const std::string &pattern, const char *name) {
    // Iterative ASCII '*'/'?' matching; no recursion or exponential backtracking.
    const char *p = pattern.c_str(), *star = nullptr, *retry = nullptr;
    if (pattern == "*.*") return true; // DOS all-files spelling.
    while (*name) {
        if (*p == '?' || (*p && fold(*p) == fold(*name))) { ++p; ++name; }
        else if (*p == '*') { star = p++; retry = name; }
        else if (star) { p = star + 1; name = ++retry; }
        else return false;
    }
    while (*p == '*') ++p;
    return !*p;
}
// All allocating dispatch paths catch before crossing the C ABI.
#define ADAPTER_CATCH(ios) catch (const std::bad_alloc &) { *status = finish(ios, STATUS_INSUFFICIENT_RESOURCES); return 1; } \
    catch (...) { *status = finish(ios, STATUS_UNSUCCESSFUL); return 1; }
} // namespace

extern "C" xiso_result doa1u_image_mount(const wchar_t *path, char *error, size_t capacity) {
    try {
        std::lock_guard<std::mutex> lock(registry_mutex);
        if (mounted) {
            if (error && capacity) { const char *s = "Disc is already mounted";
                const size_t n = (std::min)(capacity - 1, std::strlen(s)); std::memcpy(error, s, n); error[n] = 0; }
            return XISO_INVALID_ARGUMENT;
        }
        auto next = std::make_shared<Mount>();
        const auto result = xiso_mount(path, &next->image, error, capacity);
        if (result != XISO_OK) return result;
        xiso_get_info(next->image, &next->info);
        mounted = std::move(next);
        return XISO_OK;
    } catch (const std::bad_alloc &) { return XISO_OUT_OF_MEMORY; }
      catch (...) { return XISO_IO_ERROR; }
}
extern "C" void doa1u_image_unmount(void) {
    std::lock_guard<std::mutex> lock(registry_mutex);
    mounted.reset();
}
extern "C" xiso_result doa1u_image_load_file(const char *path, size_t limit, void **data, size_t *size) {
    if (!data || !size) return XISO_INVALID_ARGUMENT;
    *data = nullptr; *size = 0;
    std::shared_ptr<Mount> mount;
    { std::lock_guard<std::mutex> lock(registry_mutex); mount = mounted; }
    if (!mount) return XISO_INVALID_ARGUMENT;
    xiso_entry entry{};
    auto result = xiso_lookup(mount->image, path, &entry);
    if (result != XISO_OK) return result;
    if (entry.is_directory) return XISO_IS_DIRECTORY;
    if (!entry.size || entry.size > limit) return XISO_LIMIT_EXCEEDED;
    void *bytes = std::malloc(static_cast<size_t>(entry.size));
    if (!bytes) return XISO_OUT_OF_MEMORY;
    size_t read = 0;
    result = xiso_read(mount->image, entry.id, 0, bytes, static_cast<size_t>(entry.size), &read);
    if (result != XISO_OK || read != entry.size) {
        std::free(bytes); return result == XISO_OK ? XISO_IO_ERROR : result;
    }
    *data = bytes; *size = read; return XISO_OK;
}
extern "C" int doa1u_image_is_handle(HANDLE h) { return find_handle(h) != nullptr; }
extern "C" int doa1u_image_size(HANDLE h, uint64_t *out) {
    auto handle = find_handle(h);
    if (!handle) return 0;
    if (out) *out = handle->file->entry.id == 0
        ? handle->file->mount->info.image_size - handle->file->mount->info.partition_offset
        : file_size(handle->file->entry);
    return 1;
}
extern "C" int doa1u_image_close(HANDLE h) {
    std::lock_guard<std::mutex> lock(registry_mutex);
    return handles.erase(h) != 0; // OS handle closes after any active calls finish.
}
extern "C" int doa1u_image_duplicate(HANDLE source, HANDLE *out, DWORD options) {
    try {
        std::lock_guard<std::mutex> lock(registry_mutex);
        const auto it = handles.find(source);
        if (it == handles.end()) return 0;
        if (out) *out = nullptr;
        if (!out || (options & ~(DUPLICATE_SAME_ACCESS | DUPLICATE_CLOSE_SOURCE))) {
            SetLastError(ERROR_INVALID_PARAMETER); return 1;
        }
        auto duplicate = std::make_shared<Handle>();
        duplicate->file = it->second->file;
        // The Xbox 3-argument API supplies no alternate access mask. Retain access.
        if (!DuplicateHandle(GetCurrentProcess(), source, GetCurrentProcess(), &duplicate->native,
                             0, FALSE, DUPLICATE_SAME_ACCESS)) return 1;
        const HANDLE native = duplicate->native;
        handles.emplace(native, std::move(duplicate));
        if (options & DUPLICATE_CLOSE_SOURCE) handles.erase(source);
        *out = native;
        return 1;
    } catch (...) { if (out) *out = nullptr; SetLastError(ERROR_NOT_ENOUGH_MEMORY); return 1; }
}
extern "C" int doa1u_image_open(PHANDLE out, ACCESS_MASK access, PXBOX_OBJECT_ATTRIBUTES oa,
    PXBOX_IO_STATUS_BLOCK ios, ULONG share, ULONG disposition, ULONG options, NTSTATUS *status) {
    try {
        auto r = resolve(oa);
        if (!r.claimed) return 0;
        if (out) *out = nullptr;
        if (!out) { *status = finish(ios, STATUS_INVALID_PARAMETER); return 1; }
        // Never let a failed disc lookup fall back to an extracted/host file.
        if (r.status != STATUS_SUCCESS) {
            *status = finish(ios, r.status == STATUS_OBJECT_NAME_NOT_FOUND && disposition == XBOX_FILE_OPEN_IF
                ? read_only : r.status); return 1;
        }
        constexpr ACCESS_MASK mutating = XBOX_GENERIC_WRITE | XBOX_GENERIC_ALL | XBOX_DELETE |
            XBOX_FILE_WRITE_DATA | XBOX_FILE_APPEND_DATA | XBOX_FILE_WRITE_ATTRIBUTES | 0x10u | 0x40u | 0xc0000u;
        if ((access & mutating) || (options & 0x1000u) ||
            (disposition != XBOX_FILE_OPEN && disposition != XBOX_FILE_OPEN_IF)) {
            *status = finish(ios, disposition > XBOX_FILE_OVERWRITE_IF ? STATUS_INVALID_PARAMETER : read_only); return 1;
        }
        if ((options & XBOX_FILE_DIRECTORY_FILE) && !r.entry.is_directory)
            *status = not_directory;
        else if ((options & XBOX_FILE_NON_DIRECTORY_FILE) && r.entry.is_directory)
            *status = is_directory;
        else if ((options & XBOX_FILE_DIRECTORY_FILE) && (options & XBOX_FILE_NON_DIRECTORY_FILE))
            *status = STATUS_INVALID_PARAMETER;
        else *status = STATUS_SUCCESS;
        if (*status != STATUS_SUCCESS) { finish(ios, *status); return 1; }
        auto file = std::make_shared<File>();
        file->mount = r.mount; file->entry = r.entry; file->access = access;
        file->share = share; file->options = options;
        auto handle = std::make_shared<Handle>(); handle->file = file;
        handle->native = CreateEventW(nullptr, TRUE, TRUE, nullptr);
        if (!handle->native) { *status = finish(ios, STATUS_INSUFFICIENT_RESOURCES); return 1; }
        std::lock_guard<std::mutex> lock(registry_mutex);
        for (const auto &item : handles) {
            const auto &other = *item.second->file;
            if (other.mount == r.mount && other.entry.id == r.entry.id &&
                ((readable(access) && !(other.share & FILE_SHARE_READ)) ||
                 (readable(other.access) && !(share & FILE_SHARE_READ)))) {
                *status = finish(ios, sharing_violation); return 1;
            }
        }
        handles.emplace(handle->native, handle);
        *out = handle->native;
        *status = finish(ios, STATUS_SUCCESS, 1);
        return 1;
    } ADAPTER_CATCH(ios)
}
extern "C" int doa1u_image_read(HANDLE h, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    void *buffer, ULONG length, PLARGE_INTEGER offset, NTSTATUS *status) {
    try {
        auto handle = find_handle(h);
        if (!handle) return 0;
        auto &file = *handle->file;
        std::lock_guard<std::mutex> lock(file.mutex);
        NTSTATUS result = STATUS_SUCCESS; size_t copied = 0;
        if (!ios || (!buffer && length) || (offset && offset->QuadPart < 0 && offset->QuadPart != -2))
            result = STATUS_INVALID_PARAMETER;
        else if (file.entry.is_directory) result = is_directory;
        else if (!readable(file.access)) result = STATUS_ACCESS_DENIED;
        else {
            const uint64_t at = offset && offset->QuadPart >= 0 ? uint64_t(offset->QuadPart) : file.position;
            ResetEvent(handle->native);
            result = translate(xiso_read(file.mount->image, file.entry.id, at, buffer, length, &copied));
            if (result == STATUS_SUCCESS) {
                file.position = at + copied;
                if (!copied && length) result = STATUS_END_OF_FILE;
            }
        }
        *status = finish(ios, result, copied);
        SetEvent(handle->native);
        if (event) SetEvent(event);
        return 1;
    } ADAPTER_CATCH(ios)
}
extern "C" int doa1u_image_write(HANDLE h, HANDLE event, PXBOX_IO_STATUS_BLOCK ios, NTSTATUS *status) {
    if (!find_handle(h)) return 0;
    *status = finish(ios, read_only);
    if (event) SetEvent(event);
    return 1;
}
extern "C" int doa1u_image_query(HANDLE h, PXBOX_IO_STATUS_BLOCK ios, void *buffer,
    ULONG length, XBOX_FILE_INFORMATION_CLASS cls, int set, NTSTATUS *status) {
    try {
        auto handle = find_handle(h);
        if (!handle) return 0;
        auto &f = *handle->file;
        std::lock_guard<std::mutex> lock(f.mutex);
        if (!ios || !buffer) { *status = finish(ios, STATUS_INVALID_PARAMETER); return 1; }
        if (set) {
            if (cls != XboxFilePositionInformation) { *status = finish(ios, read_only); return 1; }
            if (length < sizeof(XBOX_FILE_POSITION_INFORMATION)) { *status = finish(ios, too_small); return 1; }
            auto at = static_cast<XBOX_FILE_POSITION_INFORMATION *>(buffer)->CurrentByteOffset.QuadPart;
            *status = finish(ios, at < 0 ? STATUS_INVALID_PARAMETER : STATUS_SUCCESS);
            if (at >= 0) f.position = uint64_t(at);
            return 1;
        }
        XBOX_FILE_NETWORK_OPEN_INFORMATION network{};
        network_info(*f.mount, f.entry, network);
        size_t required = 0;
        switch (cls) {
        case XboxFileBasicInformation: required = sizeof(XBOX_FILE_BASIC_INFORMATION); break;
        case XboxFileStandardInformation: required = sizeof(XBOX_FILE_STANDARD_INFORMATION); break;
        case XboxFilePositionInformation: required = sizeof(XBOX_FILE_POSITION_INFORMATION); break;
        case XboxFileNetworkOpenInformation: required = sizeof(network); break;
        case XboxFileInternalInformation: required = sizeof(LARGE_INTEGER); break;
        default: *status = finish(ios, STATUS_INVALID_INFO_CLASS); return 1;
        }
        if (length < required) { *status = finish(ios, too_small); return 1; }
        std::memset(buffer, 0, required);
        switch (cls) {
        case XboxFileBasicInformation: {
            auto &out = *static_cast<XBOX_FILE_BASIC_INFORMATION *>(buffer);
            out.CreationTime = network.CreationTime; out.LastAccessTime = network.LastAccessTime;
            out.LastWriteTime = network.LastWriteTime; out.ChangeTime = network.ChangeTime;
            out.FileAttributes = network.FileAttributes; break;
        }
        case XboxFileStandardInformation: {
            auto &out = *static_cast<XBOX_FILE_STANDARD_INFORMATION *>(buffer);
            out.EndOfFile = network.EndOfFile; out.AllocationSize = network.AllocationSize;
            out.NumberOfLinks = 1; out.Directory = f.entry.is_directory ? TRUE : FALSE; break;
        }
        case XboxFilePositionInformation:
            static_cast<XBOX_FILE_POSITION_INFORMATION *>(buffer)->CurrentByteOffset.QuadPart = static_cast<LONGLONG>(f.position); break;
        case XboxFileNetworkOpenInformation: std::memcpy(buffer, &network, sizeof(network)); break;
        case XboxFileInternalInformation: static_cast<LARGE_INTEGER *>(buffer)->QuadPart = f.entry.id; break;
        default: break;
        }
        *status = finish(ios, STATUS_SUCCESS, required);
        return 1;
    } ADAPTER_CATCH(ios)
}
extern "C" int doa1u_image_volume(HANDLE h, PXBOX_IO_STATUS_BLOCK ios, void *buffer,
    ULONG length, XBOX_FS_INFORMATION_CLASS cls, NTSTATUS *status) {
    auto handle = find_handle(h);
    if (!handle) return 0;
    if (!buffer || !ios) { *status = finish(ios, STATUS_INVALID_PARAMETER); return 1; }
    const auto &info = handle->file->mount->info;
    const uint64_t sectors = (info.image_size - info.partition_offset) / 2048;
    size_t needed;
    switch (cls) {
    case XboxFileFsVolumeInformation: needed = 17 + 6; break; // ANSI label follows BOOLEAN.
    case XboxFileFsSizeInformation: needed = sizeof(XBOX_FILE_FS_SIZE_INFORMATION); break;
    case XboxFileFsDeviceInformation: needed = 8; break;
    case XboxFileFsAttributeInformation: needed = 12 + 6; break; // ANSI filesystem name.
    case XboxFileFsFullSizeInformation: needed = 32; break;
    default: *status = finish(ios, STATUS_INVALID_INFO_CLASS); return 1;
    }
    if (length < needed) { *status = finish(ios, too_small); return 1; }
    std::memset(buffer, 0, needed);
    auto *bytes = static_cast<unsigned char *>(buffer);
    auto put32 = [bytes](size_t at, uint32_t value) { std::memcpy(bytes + at, &value, 4); };
    auto put64 = [bytes](size_t at, uint64_t value) { std::memcpy(bytes + at, &value, 8); };
    switch (cls) {
    case XboxFileFsVolumeInformation:
        put64(0, info.volume_timestamp); put32(8, uint32_t(info.volume_timestamp));
        put32(12, 6); std::memcpy(bytes + 17, "XDVDFS", 6); break;
    case XboxFileFsSizeInformation: put64(0, sectors); put32(16, 1); put32(20, 2048); break;
    case XboxFileFsDeviceInformation: put32(0, 2); put32(4, 3); break; // CDROM, removable/read-only.
    case XboxFileFsAttributeInformation: put32(0, 0x80002); put32(4, 255); put32(8, 6);
        std::memcpy(bytes + 12, "XDVDFS", 6); break;
    case XboxFileFsFullSizeInformation: put64(0, sectors); put32(24, 1); put32(28, 2048); break;
    default: break;
    }
    *status = finish(ios, STATUS_SUCCESS, needed);
    return 1;
}
extern "C" int doa1u_image_directory(HANDLE h, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    void *buffer, ULONG length, XBOX_FILE_INFORMATION_CLASS cls,
    PXBOX_ANSI_STRING pattern, BOOLEAN restart, NTSTATUS *status) {
    try {
        auto handle = find_handle(h);
        if (!handle) return 0;
        auto &f = *handle->file;
        std::lock_guard<std::mutex> lock(f.mutex);
        auto done = [&](NTSTATUS s, size_t count = 0) {
            *status = finish(ios, s, count); if (event) SetEvent(event); return 1;
        };
        if (!buffer || !ios) return done(STATUS_INVALID_PARAMETER);
        if (!f.entry.is_directory) return done(not_directory);
        if (!readable(f.access)) return done(STATUS_ACCESS_DENIED);
        if (cls != XboxFileDirectoryInformation) return done(STATUS_INVALID_INFO_CLASS);
        if (restart || !f.enumerated) {
            std::string next = "*";
            if (pattern) {
                if ((!pattern->Buffer && pattern->Length) || pattern->Length > 255 ||
                    (pattern->MaximumLength && pattern->Length > pattern->MaximumLength))
                    return done(STATUS_INVALID_PARAMETER);
                if (pattern->Length) next.assign(pattern->Buffer, pattern->Length);
                if (next.find_first_of("/\\:") != std::string::npos || next.find('\0') != std::string::npos)
                    return done(STATUS_OBJECT_NAME_INVALID);
            }
            f.pattern = std::move(next); f.ordinal = 0; f.enumerated = true;
        }
        size_t count = 0;
        xiso_child_count(f.mount->image, f.entry.id, &count);
        for (size_t i = f.ordinal; i < count; ++i) {
            xiso_entry entry{};
            xiso_child_at(f.mount->image, f.entry.id, i, &entry);
            if (!wildcard(f.pattern, entry.name)) continue;
            const size_t name_length = std::strlen(entry.name);
            const size_t required = offsetof(XBOX_FILE_DIRECTORY_INFORMATION, FileName) + name_length;
            // Do not advance on short output: a retry must return the same item.
            if (length < required) return done(too_small);
            std::memset(buffer, 0, required);
            auto &out = *static_cast<XBOX_FILE_DIRECTORY_INFORMATION *>(buffer);
            out.FileIndex = entry.id;
            out.CreationTime.QuadPart = out.LastAccessTime.QuadPart = out.LastWriteTime.QuadPart =
                out.ChangeTime.QuadPart = static_cast<LONGLONG>(f.mount->info.volume_timestamp);
            out.EndOfFile.QuadPart = static_cast<LONGLONG>(file_size(entry));
            out.AllocationSize.QuadPart = static_cast<LONGLONG>(allocation(entry));
            out.FileAttributes = attributes(entry); out.FileNameLength = static_cast<ULONG>(name_length);
            std::memcpy(out.FileName, entry.name, name_length);
            f.ordinal = i + 1;
            return done(STATUS_SUCCESS, required);
        }
        f.ordinal = count;
        return done(STATUS_NO_MORE_FILES);
    } ADAPTER_CATCH(ios)
}
extern "C" int doa1u_image_attributes(PXBOX_OBJECT_ATTRIBUTES oa,
    PXBOX_FILE_NETWORK_OPEN_INFORMATION info, NTSTATUS *status) {
    try {
        auto r = resolve(oa);
        if (!r.claimed) return 0;
        *status = !info ? STATUS_INVALID_PARAMETER : r.status;
        if (*status == STATUS_SUCCESS) network_info(*r.mount, r.entry, *info);
        return 1;
    } ADAPTER_CATCH(nullptr)
}
extern "C" int doa1u_image_delete(PXBOX_OBJECT_ATTRIBUTES oa, NTSTATUS *status) {
    try {
        auto r = resolve(oa);
        if (!r.claimed) return 0;
        *status = r.status == STATUS_SUCCESS ? read_only : r.status;
        return 1;
    } ADAPTER_CATCH(nullptr)
}
extern "C" int doa1u_image_rename(HANDLE source, PXBOX_OBJECT_ATTRIBUTES target, NTSTATUS *status) {
    if (find_handle(source)) { *status = read_only; return 1; }
    return doa1u_image_delete(target, status); // Also prevent host -> disc rename.
}
extern "C" int doa1u_image_flush(HANDLE h, PXBOX_IO_STATUS_BLOCK ios, NTSTATUS *status) {
    if (!find_handle(h)) return 0;
    *status = finish(ios, STATUS_SUCCESS);
    return 1;
}
extern "C" int doa1u_image_control(HANDLE h, HANDLE event, PXBOX_IO_STATUS_BLOCK ios,
    ULONG control, void *output, ULONG length, NTSTATUS *status) {
    auto handle = find_handle(h);
    if (!handle) return 0;
    const auto &info = handle->file->mount->info;
    const uint64_t bytes = info.image_size - info.partition_offset;
    const size_t needed = control == 0x70000 ? 24 : control == 0x74004 ? 32 : 0;
    NTSTATUS result = STATUS_SUCCESS;
    if (!ios) result = STATUS_INVALID_PARAMETER;
    else if (!needed) result = STATUS_INVALID_DEVICE_REQUEST;
    else if (!output || length < needed) result = too_small;
    else {
        std::memset(output, 0, needed);
        auto *p = static_cast<unsigned char *>(output);
        if (control == 0x70000) {
            const uint64_t cylinders = bytes / 2048;
            const uint32_t geometry[] = {11, 1, 1, 2048};
            std::memcpy(p, &cylinders, 8); std::memcpy(p + 8, geometry, sizeof(geometry));
        } else std::memcpy(p + 8, &bytes, 8);
    }
    *status = finish(ios, result, result == STATUS_SUCCESS ? needed : 0);
    if (event) SetEvent(event);
    return 1;
}
