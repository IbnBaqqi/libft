/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:52:27 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 18:30:19 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countDelimiter(char const *s, char c);

char **ft_split(char const *s, char c)
{
	int i;
	int j;
	
	char **splitted;
	//int c_num;
	int splitLen;

	splitLen = countDelimiter(s, c);
	splitted = (char **)malloc(sizeof(char *) * (splitLen + 1));
	if (!splitted)
		return (NULL);
	i = 0;
	while(splitted[i])
	{
		j = 0;
		while(*s != 0)
		{
			if(*s != c)
			{
				splitted[i][j] = *s;
				j++;
				s++;
			}
			else
			{
				break;
			}
		}
		i++;
	}
	splitted[i][j] = '\0';
	return (splitted);
}
static int	countDelimiter(char const *s, char c)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (c == s[i])
			count++;
		i++;
	}
	return (count);
}