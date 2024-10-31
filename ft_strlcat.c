/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:18:28 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 16:11:48 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	char	*c_src;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	c_src = (char *)src;
	if (dstsize == 0)
		return (srclen);
	if (dstlen >= dstsize)
		dstlen = dstsize;
	if (dstlen == dstsize)
		return (dstlen + srclen);
	if (dstsize > srclen + dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = 0;
	}
	return (dstlen + srclen);
}
