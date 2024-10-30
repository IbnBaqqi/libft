/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:16 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:16:18 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
MEMCHR(3) (simplified)

NAME
    memchr -- locate byte in byte string
SYNOPSIS
    void *memchr(const void *s, int c, size_t n);
DESCRIPTION
    the memchr() function locates the first occurence of c (convered to an unsigned char) in string s.
RETURN VALUES
    The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char a;
    unsigned char *b;
    size_t i;

    i = 0;
    a = (unsigned char) c;
    b = (unsigned char *) s;

    while(i < n && b )
    {
        if (*b == a)
            return ((void *)b);
        i++;
    }
    return (NULL);
}
