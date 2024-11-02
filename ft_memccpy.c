/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:00 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 10:59:18 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*dst;
	const char		*nsrc;

	a = (unsigned char) c;
	dst = (unsigned char *) dest;
	nsrc = (const char *) src;
	while (*nsrc && n-- > 0)
	{
		if (*nsrc == a)
		{
			*dst++ = *nsrc++;
			return (dst);
		}
		*dst++ = *nsrc++;
	}
	return (NULL);
}
