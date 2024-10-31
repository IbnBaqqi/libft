/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:52:27 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 12:16:53 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *copyWords (char const *start, char const *end);
static int	countWord(char const *s, char c);

char **ft_split(char const *s, char c)
{
	int i;
	char const *start;
	char **splitted;
	int wordCount;
	char *perString;

	if(!s)
		return (NULL);
	wordCount = countWord(s, c);
	splitted = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	i = 0;
	while(*s != '\0')
	{
		if(*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			perString = copyWords(start, s);
			splitted[i] = perString;
			i++;
		}
		s++;
	}
	free(perString);
	splitted[i] = NULL;
	return (splitted);
}
static char	*copyWords(char const *start, char const *end)
{
	int length;
	char *dest;
	char *string;

	length = end - start;
	string = (char *)malloc(length + 1);
	if (!string)
		return(NULL);
	dest = string;
	while (start < end)
	{
		*dest++ = *start++;
	}
	*dest = '\0';
	return (string);
}

//helper to count number of word strings seperated by the delimiter
static int	countWord(char const *s, char c)
{
	int	i;
	int	count;
	int inWord;
	
	i = 0;
	count = 0;
	inWord = 0; //like a boolean to figure out if we are in a word or not.
	while (s[i] != 0)
	{
		if (c == s[i])
			inWord = 0;
		if(!inWord && c != s[i])
		{
			count++;
			inWord = 1;
		}
		i++;
	}
	return (count);
}