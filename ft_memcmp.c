#include "libft.h"

/*
MEMCMP(3) (simplified)

NAME
    memcmp -- compare byte string
SYNOPSIS
    int memcmp(const void *s1, const void *s2, size_t n)
DESCRIPTION
    The memcmp() function compares byte string s1 against byte string s2.
    Both strings are assumed to be n bytes long.
RETURN VALUES
    The memcmp() function returns zero if the two strings are identical, 
    otherwise returns the difference betwee the first two differing bytes (treated as unsigned char values, so that '\200' is greater than '\0', for example).
    Zero-length strings are always identical. This behaviour is not required by C and portable code should only depend on the sign of the returned value.
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;

    i = 0;
    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;

    while (i < n && str1 && str2)
    {
        if (*str1 != *str2)
            return *str1 - *str2;
        i++;
    }
    return (0);
}