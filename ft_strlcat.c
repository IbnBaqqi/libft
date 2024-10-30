/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:18:28 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:18:32 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
STRLCAT(3) (simplified)

NAME
    strlcat -- size-bounded string concatenation
SYNOPSIS
    size_t strlcat(char *dst, const char *src, size_t dstsize);
DESCRIPTION
    The strlcat() function concatenate strings with the same input parameters and outuput result as snprintf(3).
	It is designed to be safer, more consistent, and less error prone replacements for the easily misused function strncat(3).
    strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room. Note that room for the NUL should be included in dstsize.
	Also note that strlcat() only operate on true ''C'' strings. This means that both src and dst must be NUL-terminated.
    strlcat() appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.
	It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
    If the src and dst strings overlap, the behavior is undefinded.
RETURN VALUES
    Like snprintf(3), strlcat() function return the total length of the string it tried to create. That means the initial length of dst plus the length of src.
    If the return value is >= dstsize, the output string has been truncated.
    It is the caller's responsibility to handle this.
*/

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dstlen;
	size_t srclen;
	char *c_src;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	c_src = (char *)src;

	if (dstsize == 0)
    	return srclen;
	if(dstlen == dstsize)
		return (dstlen + srclen);

	if (dstsize > srclen + dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else {
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = 0;
	}
	return (dstlen + srclen);
}
