/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:17:04 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 11:06:17 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*nsrc;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (!src || !dest)
		return (NULL);
	if (dst > nsrc)
	{
		while (len-- > 0)
		{
			dst[len] = nsrc[len];
		}
	}
	else
	{
		while (i < len)
		{
			dst[i] = nsrc[i];
			i++;
		}
	}
	return (dest);
}
