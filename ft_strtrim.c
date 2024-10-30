/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:01 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 17:51:32 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countChar(char const *str, char c);
static char	*fillMemTrim(char const *s1, char *trimMem, char const *setToTrim);

char	*ft_strtrim(char const *s1, char const *set)
{
	char *str_mem;
	char *getTrimMem;
	int i;
	int setIns1;
	size_t s_len;
	size_t trimLen;
	
	i = 0;
	setIns1 = 0;
	while (s1[i] != 0)
		setIns1 += countChar(set, s1[i++]); //count of total set element to figure out len to allocate
	s_len = ft_strlen(s1);
	trimLen = s_len - setIns1;
	
	str_mem = (char *)malloc(trimLen + 1);
	if (!str_mem)
		return (NULL);
	getTrimMem = fillMemTrim(s1, str_mem, set);
	return (getTrimMem);
	
}
//Helper to count the numbers of set in s1 we need to trim and also if char of s1 is part of set
static int countChar(char const *str, char c)
{
	int found;

	found = 0;
	while (*str != '\0')
	{
		if (c == *str)
		{
			found++;
			return (found); // i.e 1
		}
		str++;	
	}
	return (0);
}
//Function to fill the allocated memory with trimed string
static char *fillMemTrim(char const *s1, char *trimMem, char const *setToTrim)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if(countChar(setToTrim, s1[i]))
		{
			i++;
			continue;
		}
		trimMem[j++] = s1[i++];
	}
	trimMem[j] = '\0';
	return (trimMem);
}