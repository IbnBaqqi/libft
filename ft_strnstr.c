/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:24 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:19:27 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
STRNSTR(3) (simplified)

NAME
    strnstr -- locate a substring in a string
SYNOPSIS
    char *strnstr(const char *haystack, const char *needle, size_t len);
DESCRIPTION
    The strnstr() function locates the first occurence of the null-terminated string needle in the string haystack,
	where not more than len characters are searched.
    Characters that appear after a '\0' character are not searched.
RETURN VALUES
    If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned;
	otherwise a pointer to the first character of the first occurence of needle is returned.
*/

char	*ft_strnstr(const char *Haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *Hay;
	char *need;

    i = 0;
	j = 0;
	Hay = (char *)Haystack;
	need = (char *)needle;
	if (!need)
		return (Hay);
	while (i < len && Haystack[i])
	{
		while (Hay[i + j] == need[j] && Hay[i + j] && i + j < len)
		{
			j++;
			if(need[j] == '\0')
				return (&Hay[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
