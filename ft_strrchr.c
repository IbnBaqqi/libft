#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char a;
    const char *x;
    size_t len;

    a = (char )c;
    x = s;
    len = ft_strlen(s);

    while(len > 0)
    {
        if (x[len] == a)
            return ((char *) &x[len]);
        len--;
    }
    return (NULL);
}