/* CPU-only Stage 2 contract check of the selected production Xbox backend.
 * Only diagnostics and the drive-link registry are mocked. No game is started.
 * Usage: xbox_file_backend_check <absolute empty fixture directory> */
#include "kernel.h"
#include "kernel_virtual_disk.h"
#include "xbox_disc_path.h"
#include "xiso_reader.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <shlobj.h>

static const char *d_link, *u_link, *z_link;
static unsigned checks, path_hooks;
void xbox_log(int level, const char *subsystem, const char *format, ...) {
    (void)level; (void)subsystem; (void)format;
}
const char *xbox_LookupSymbolicLink(const char *name) {
    if (!_stricmp(name, "\\??\\D:")) return d_link;
    if (!_stricmp(name, "\\??\\U:")) return u_link;
    if (!_stricmp(name, "\\??\\Z:")) return z_link;
    return NULL;
}
static void require(int yes, const char *why) {
    ++checks;
    if (!yes) { fprintf(stderr, "FAIL: %s\n", why); exit(1); }
}
static void path_hook(const char *path) { (void)path; ++path_hooks; }
static void classify(const char *path, doa1u_disc_path_kind kind, const char *expected) {
    char result[DOA1U_DISC_PATH_CAPACITY];
    memset(result, 'x', sizeof(result));
    doa1u_disc_path_kind actual = doa1u_classify_disc_path(path, result, sizeof(result));
    if (actual != kind || strcmp(result, expected)) fprintf(stderr, "path: %s; kind=%d, output=%s\n",
                                                           path ? path : "(NULL)", actual, result);
    require(actual == kind && !strcmp(result, expected), "disc path classification");
}
static void classification_tests(void) {
    g_xbox_path_hook = path_hook;
    classify("D:\\DOA1\\ss_opn.sfd", DOA1U_PATH_DISC, "DOA1/ss_opn.sfd");
    classify("d:/DOA1//./data/KS_CMD.BIN/", DOA1U_PATH_DISC, "DOA1/data/KS_CMD.BIN");
    classify("\\Device\\CdRom0\\Doa1.xbe", DOA1U_PATH_DISC, "Doa1.xbe");
    classify("\\device\\cdrom0", DOA1U_PATH_DISC, "");
    classify("\\??\\D:\\", DOA1U_PATH_DISC, "");
    classify("\\??\\Device\\CdRom0\\", DOA1U_PATH_HOST, ""); // Not a native device path.
    classify("D:", DOA1U_PATH_DISC, "");
    classify("D:relative", DOA1U_PATH_INVALID, "");
    classify("D:\\..\\escape", DOA1U_PATH_INVALID, "");
    classify("D:\\data\\..\\escape", DOA1U_PATH_INVALID, "");
    classify("D:\\data\\bad:name", DOA1U_PATH_INVALID, "");
    classify("D:\\bad\nname", DOA1U_PATH_INVALID, "");
    classify("\\Device\\CdRom01\\asset", DOA1U_PATH_HOST, "");
    classify("\\Device\\CdRom0suffix\\asset", DOA1U_PATH_HOST, "");
    classify("\\Device\\Harddisk0\\Partition1\\data", DOA1U_PATH_HOST, "");
    classify("\\Device\\Harddisk0\\Partition1\\UDATA\\save", DOA1U_PATH_HOST, "");
    classify("\\Device\\Harddisk0\\Partition0", DOA1U_PATH_HOST, "");
    classify("U:\\save", DOA1U_PATH_HOST, "");
    classify("T:\\save", DOA1U_PATH_HOST, "");
    classify("Z:\\cache", DOA1U_PATH_HOST, "");
    classify("Y:\\asset", DOA1U_PATH_HOST, "");
    classify("C:\\asset", DOA1U_PATH_HOST, "");
    classify("child.bin", DOA1U_PATH_RELATIVE, "");
    classify("", DOA1U_PATH_RELATIVE, "");
    classify("\\child.bin", DOA1U_PATH_HOST, "");
    classify(NULL, DOA1U_PATH_INVALID, "");
    char short_out[2] = {'x', 'x'};
    require(doa1u_classify_disc_path("D:\\abc", short_out, sizeof(short_out)) == DOA1U_PATH_INVALID &&
            !short_out[0], "small output is not truncated into a different path");
    char too_long[DOA1U_DISC_PATH_CAPACITY + 1];
    memset(too_long, 'a', sizeof(too_long)); too_long[sizeof(too_long) - 1] = 0;
    classify(too_long, DOA1U_PATH_INVALID, "");
    // Dynamic mappings take precedence over a drive's static meaning.
    d_link = "\\Device\\Harddisk0\\Partition1\\UDATA\\54430006";
    classify("D:\\save", DOA1U_PATH_HOST, "");
    d_link = "\\Device\\CdRom0";
    classify("\\??\\d:\\DOA1\\ss_end.sfd", DOA1U_PATH_DISC, "DOA1/ss_end.sfd");
    u_link = "\\Device\\CdRom0\\DOA1";
    classify("U:\\data\\KS_CMD.BIN", DOA1U_PATH_DISC, "DOA1/data/KS_CMD.BIN");
    z_link = "D:\\DOA1";
    classify("Z:\\data", DOA1U_PATH_DISC, "DOA1/data");
    d_link = "\\Device\\UnknownDevice";
    classify("D:\\asset", DOA1U_PATH_HOST, "");
    d_link = "\\Device\\CdRom0\\bad\nname";
    classify("D:\\asset", DOA1U_PATH_INVALID, "");
    d_link = "D:\\";
    classify("D:\\asset", DOA1U_PATH_INVALID, "");
    d_link = "Z:\\"; z_link = "D:\\";
    classify("D:\\asset", DOA1U_PATH_INVALID, "");
    d_link = NULL; u_link = NULL; z_link = NULL;
    require(path_hooks == 0, "classification triggered host translation/hook");
    g_xbox_path_hook = NULL;
    xiso_info info;
    require(xiso_get_info(NULL, &info) == XISO_INVALID_ARGUMENT, "reader C linkage");
}
static HANDLE open_guest(const char *path, HANDLE root_handle, ULONG disposition, ULONG options) {
    XBOX_ANSI_STRING name = {0};
    name.Buffer = (PCHAR)path; name.Length = (USHORT)strlen(path); name.MaximumLength = name.Length + 1;
    XBOX_OBJECT_ATTRIBUTES oa = {0}; oa.ObjectName = &name; oa.RootDirectory = root_handle;
    XBOX_IO_STATUS_BLOCK ios = {0}; HANDLE handle = NULL;
    NTSTATUS status = xbox_NtCreateFile(&handle, XBOX_GENERIC_READ | XBOX_GENERIC_WRITE,
        &oa, &ios, NULL, 0, 3, disposition, options);
    require(NT_SUCCESS(status) && handle && ios.Status == status, path);
    return handle;
}
static void host_and_device_tests(const char *root_dir) {
    char directory[MAX_PATH];
    snprintf(directory, sizeof(directory), "%s\\UDATA\\54430006", root_dir);
    require(SHCreateDirectoryExA(NULL, directory, NULL) == ERROR_SUCCESS, "fresh save fixture");
    u_link = "\\Device\\Harddisk0\\Partition1\\UDATA\\54430006";
    z_link = "\\Device\\Harddisk0\\Partition5";
    xbox_virtual_disk_enable();
    xbox_path_init(root_dir, root_dir);
    classify("U:\\doasave.sav", DOA1U_PATH_HOST, "");
    classify("Z:\\", DOA1U_PATH_HOST, "");
    unsigned char expected[128], actual[512];
    for (unsigned i = 0; i < sizeof(expected); ++i) expected[i] = (unsigned char)(i * 37);
    XBOX_IO_STATUS_BLOCK ios = {0}; LARGE_INTEGER offset; offset.QuadPart = 0;
    HANDLE file = open_guest("U:\\doasave.sav", NULL, XBOX_FILE_CREATE, 0);
    require(NT_SUCCESS(xbox_NtWriteFile(file, NULL, NULL, NULL, &ios, expected, sizeof(expected), &offset)) &&
            ios.Information == sizeof(expected), "host save write");
    require(NT_SUCCESS(xbox_NtClose(file)), "host close");
    HANDLE dir = open_guest("U:\\", NULL, XBOX_FILE_OPEN, XBOX_FILE_DIRECTORY_FILE);
    file = open_guest("doasave.sav", dir, XBOX_FILE_OPEN, 0);
    require(NT_SUCCESS(xbox_NtReadFile(file, NULL, NULL, NULL, &ios, actual, sizeof(expected), &offset)) &&
            ios.Information == sizeof(expected) && !memcmp(actual, expected, sizeof(expected)), "root-relative host save reload");
    require(NT_SUCCESS(xbox_NtClose(file)) && NT_SUCCESS(xbox_NtClose(dir)), "relative handles close");
    // Preserve the existing deferred FATX overwrite behavior, not NTFS zero-fill.
    file = open_guest("U:\\doasave.sav", NULL, XBOX_FILE_OVERWRITE, 0);
    LARGE_INTEGER size; size.QuadPart = sizeof(expected);
    require(NT_SUCCESS(xbox_NtSetInformationFile(file, &ios, &size, sizeof(size), XboxFileEndOfFileInformation)),
            "deferred FATX regrow");
    require(NT_SUCCESS(xbox_NtReadFile(file, NULL, NULL, NULL, &ios, actual, sizeof(expected), &offset)) &&
            !memcmp(actual, expected, sizeof(expected)), "FATX overwrite retained underlying bytes");
    require(NT_SUCCESS(xbox_NtClose(file)), "overwrite close");
    file = open_guest("U:\\doasave.sav", NULL, XBOX_FILE_OVERWRITE, 0);
    require(xbox_NtReadFile(file, NULL, NULL, NULL, &ios, actual, 1, &offset) == STATUS_END_OF_FILE,
            "ordinary overwrite still truncates");
    require(NT_SUCCESS(xbox_NtClose(file)), "truncated close");

    HANDLE disk = open_guest("\\Device\\Harddisk0\\Partition0", NULL, XBOX_FILE_OPEN, 0);
    unsigned char table[512]; xbox_path_partition_table(table); offset.QuadPart = 0x800;
    require(NT_SUCCESS(xbox_NtReadFile(disk, NULL, NULL, NULL, &ios, actual, 512, &offset)) &&
            !memcmp(actual, table, sizeof(table)), "virtual partition table unchanged");
    require(NT_SUCCESS(xbox_NtClose(disk)), "partition table close");
    disk = open_guest("\\Device\\Harddisk0\\Partition5", NULL, XBOX_FILE_OPEN, 0);
    offset.QuadPart = 4090;
    require(NT_SUCCESS(xbox_NtWriteFile(disk, NULL, NULL, NULL, &ios, expected, sizeof(expected), &offset)),
            "cross-page virtual write");
    HANDLE duplicate = NULL;
    require(xbox_virtual_disk_duplicate(disk, &duplicate, DUPLICATE_SAME_ACCESS), "virtual duplicate");
    require(NT_SUCCESS(xbox_NtClose(disk)), "virtual original close");
    require(NT_SUCCESS(xbox_NtReadFile(duplicate, NULL, NULL, NULL, &ios, actual, sizeof(expected), &offset)) &&
            !memcmp(actual, expected, sizeof(expected)), "virtual duplicate lifetime/content");
    require(NT_SUCCESS(xbox_NtClose(duplicate)), "virtual duplicate close");
    dir = open_guest("Z:\\", NULL, XBOX_FILE_OPEN, XBOX_FILE_DIRECTORY_FILE);
    XBOX_FILE_FS_SIZE_INFORMATION volume;
    require(NT_SUCCESS(xbox_NtQueryVolumeInformationFile(dir, &ios, &volume, sizeof(volume), XboxFileFsSizeInformation)) &&
            volume.BytesPerSector * volume.SectorsPerAllocationUnit == 16384, "host volume geometry");
    require(NT_SUCCESS(xbox_NtClose(dir)), "volume close");
    for (int i = 0; i < 6; ++i) {
        snprintf(directory, sizeof(directory), "%s\\Partition%d.img", root_dir, i);
        require(GetFileAttributesA(directory) == INVALID_FILE_ATTRIBUTES, "virtual device unexpectedly created an image");
    }
}
int main(int argc, char **argv) {
    require(argc == 2, "provide an absolute fresh fixture directory");
    classification_tests();
    host_and_device_tests(argv[1]);
    printf("PASS: selected Xbox file backend (%u checks): disc classification, host saves/relative paths/FATX overwrite, virtual disks.\n", checks);
    return 0;
}
