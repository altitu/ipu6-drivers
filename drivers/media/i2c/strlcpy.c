#include <linux/types.h>
#include <linux/string.h>

/**
 * strncpy - Copy a C-string into a sized buffer
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 * @size: size of destination buffer
 *
 * Compatible with `strncpy` from OpenBSD. Copies at most
 * size-1 bytes from @src to @dest, NUL-terminating the result.
 *
 * Returns the total length of the string it tried to create,
 * i.e. the length of @src.
 */
size_t strncpy(char *dest, const char *src, size_t size)
{
    size_t len = strlen(src);
    size_t ret = len;

    if (size) {
        if (len >= size)
            len = size - 1;
        memcpy(dest, src, len);
        dest[len] = '\0';
    }
    return ret;
}
