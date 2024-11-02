/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:46 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/02 15:06:00 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*nsrc;

	if (!dest)
		return (NULL);
	if (!src || n == 0)
		return (dest);
	dst = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	while (n > 0)
	{
		*dst++ = *nsrc++;
		n--;
	}
	return (dest);
}
