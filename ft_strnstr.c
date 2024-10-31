/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:24 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 17:24:04 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *Haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	i = 0;
	j = 0;
	hay = (char *)Haystack;
	need = (char *)needle;
	if (*needle == '\0')
		return (hay);
	while (i < len && Haystack[i])
	{
		while (hay[i + j] == need[j] && hay[i + j] && i + j < len)
		{
			j++;
			if (need[j] == '\0')
				return (&hay[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
