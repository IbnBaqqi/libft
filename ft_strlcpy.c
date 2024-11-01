/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:18:48 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 18:33:08 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*c_dst;
	const char	*c_src;
	size_t		src_len;

	c_dst = dst;
	c_src = src;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(c_src);
	if (size == 0)
		return (src_len);
	if (src_len + 1 < size)
		ft_memcpy(c_dst, c_src, src_len + 1);
	else
	{
		ft_memcpy(c_dst, c_src, size - 1);
		c_dst[size - 1] = '\0';
	}
	return (src_len);
}
