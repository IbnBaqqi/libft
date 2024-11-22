/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:16 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 11:03:16 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	a = (unsigned char) c;
	b = (unsigned char *) s;
	while (i < n)
	{
		if (b[i] == a)
			return ((void *)b + i);
		i++;
	}
	return (NULL);
}
