/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:17:41 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 11:06:28 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	a;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	a = (unsigned char)c;
	while (len > 0)
	{
		*ptr++ = a;
		len--;
	}
	return (str);
}
