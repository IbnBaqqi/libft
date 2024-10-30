/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:18:06 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:18:08 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
STRCHR(3) (simplified)

NAME
    strchr -- locate character in string
SYNOPSIS
    char *strchr(const char *s, int c);
DESCRIPTION
    The strchr() function locates the first occurence of c (converted to a char) in the string pointed to by s.
    The terminating null character is considered to be part of the string; therefor if c is '\0', the function locate the terminating '\0'.
RETURN VALUES
    The function strchr() return a pointer to the located character, 
    or NULL if the character does not appear in the string.
*/

char *ft_strchr(const char *s, int c)
{
    char a;
    const char *x;

    a = (char )c;
    x = s;

    while(x) 
    {
        if (*x == a)
            return ((char *)x);
        x++;
    }
    return (NULL);
}
