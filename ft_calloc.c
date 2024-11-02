/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:09 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 10:57:55 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//if (count != 0 && size > SIZE_MAX / count)
//return NULL;
void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*memory;
	size_t			i;
	size_t			c_size;

	i = 0;
	if (count == 0 || size == 0)
		return (malloc(0));
	c_size = count * size;
	if (size != 0 && c_size / size != count)
		return (NULL);
	memory = malloc(c_size);
	if (!memory)
		return (NULL);
	while (i < c_size)
	{
		memory[i++] = 0;
	}
	return (memory);
}
