/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:36:05 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 14:36:22 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;

	i = 0;
	if(start >= ft_strlen(s))
		return ((char *)malloc(1));
	sub = (char *)malloc(len + 1);
	if(!sub)
		return (NULL);
	//Checking if len exceed the length of s
	if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;

	while(i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
