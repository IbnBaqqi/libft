#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	a;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	a = (unsigned char)c;
	while(len > 0)
	{
		*ptr++ = a;
		len--;
	}
	return (str);
}
