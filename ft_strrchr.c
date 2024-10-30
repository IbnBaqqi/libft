/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:51 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:19:53 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
STRRCHR(3) (simplified)

NAME
    strrchr -- locate character in string
SYNOPSIS
    char *strrchr(const char *s, int c);
DESCRIPTION
    The strrchr() function is identical to strchr(), except it locates the last occurence of c.
RETURN VALUES
    The function strrchr() returns a pointer to the located character,
	or NULL if the character does not appear in the string.
*/

char *ft_strrchr(const char *s, int c)
{
    char a;
    const char *x;
    size_t len;

    a = (char )c;
    x = s;
    len = ft_strlen(s);

    while(len > 0)
    {
        if (x[len] == a)
            return ((char *) &x[len]);
        len--;
    }
    return (NULL);
}
