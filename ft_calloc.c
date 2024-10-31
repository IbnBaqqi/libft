/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:33:09 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 12:01:25 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
CALLOC(3) (simplified)

NAME
    calloc -- memory allocation
SYNOPSIS
    void *calloc(size_t count, size_t size);
DESCRIPTION
    The calloc() function allocates memory.
    The allocated memory is aligned such that it can be used for any data type.
    The calloc() function contigously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.
    The allocated memory is filled with bytes of value zero.
RETURN VALUES
    If successful, calloc() returns a pointer to allocated memory. If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/

void *ft_calloc(size_t count, size_t size)
{
	unsigned char *memory;
	size_t i;
	size_t c_size;

	i = 0;
	//if (count != 0 && size > SIZE_MAX / count)
    //   return NULL;
	c_size = count + size;
	if (size != 0 && c_size / size != count)
        return NULL;
	if (count == 0 || size == 0)
		return (NULL); 
	 memory = malloc(c_size);
	 if(!memory)
	 	return (NULL);
	 while (i < c_size)
	 {
		memory[i++] = 0;
	 }
	 return (memory);
}
