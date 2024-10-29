#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *dst;
    unsigned char *nsrc;
    size_t i;

    i = 0;
    dst = (unsigned char *)dest;
    nsrc = (unsigned char *)src;

    if (!src || !dest)
        return (NULL);

    //Check if dest is greater than source, if true copy from end to start.
    if (dst > nsrc) {
        while (len > 0) {
            dst[len] = nsrc[len];
            len--;
        }
    }
    else {
        while (i < len) {
            dst[i] = nsrc[i];
            i++;
        }
    
    }
    return (dest);
}