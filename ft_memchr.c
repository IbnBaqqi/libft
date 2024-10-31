/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:16 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 16:59:19 by sabdulba         ###   ########.fr       */
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
