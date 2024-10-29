#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *c_dst;
    const char *c_src;
    size_t src_len;

    c_dst = dst;
    c_src = src;
    
    src_len = ft_strlen(c_src);
    if (size > src_len + 1) 
    {
        while(c_src)
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
    return (src_len);
}