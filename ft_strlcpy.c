#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *c_dst;
    const char *c_src;
    size_t src_len;

    c_dst = dst;
    c_src = src;
    
    src_len = ft_strlen(c_src);
   
   if (src_len + 1 < size)
        ft_memcpy(c_dst, c_src, src_len + 1);
    else
        ft_memcpy(c_dst, c_src, size - 1);

    c_dst[size - 1] = '\0';
    return (src_len);
}

/*
    size_t i;
    for (i = 0; i < size - 1 && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0';

    src_len = ft_strlen(c_src);
    if (size > src_len + 1) 
    {
        while(*c_src)
            *c_dst++ = *c_src++;
        *c_dst = '\0';
    }
    else{
        while (size - 1 > 0)
        {
            *c_dst++ = *c_src++;
            size--;
        }
        *c_dst = '\0';
    }
*/