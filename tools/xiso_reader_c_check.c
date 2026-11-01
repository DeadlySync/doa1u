/* Compile and link the public interface as C, like the existing Xbox kernel. */
#include "xiso_reader.h"

int xiso_reader_c_check(void) {
    xiso_image *image = NULL;
    char error[2] = {'x', 'x'};
    size_t count = 99;
    if (xiso_mount(NULL, &image, error, sizeof(error)) != XISO_INVALID_ARGUMENT) return 0;
    if (image != NULL || error[1] != 0) return 0;
    if (xiso_read(NULL, 0, 0, NULL, 0, &count) != XISO_INVALID_ARGUMENT || count != 0) return 0;
    xiso_unmount(NULL);
    return 1;
}
