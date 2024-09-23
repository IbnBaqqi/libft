#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dst = (unsigned char *)dest;
    unsigned char *nsrc = (unsigned char *)src;

    while(n--)
    {
        *dst++ = *nsrc++;
    }
    return (dest);
}