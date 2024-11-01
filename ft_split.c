/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:52:27 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 13:42:43 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_words(char const *start, char const *end);
static int	count_word(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int			i;
	char const	*start;
	char		**splitted;
	int			count;

	if (!s)
		return (NULL);
	count = count_word(s, c);
	splitted = (char **)malloc((count + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			splitted[i++] = copy_words(start, s);
		}
		s++;
	}
	splitted[i] = NULL;
	return (splitted);
}

static char	*copy_words(char const *start, char const *end)
{
	int		length;
	char	*dest;
	char	*string;

	length = end - start;
	string = (char *)malloc(length + 1);
	if (!string)
		return (NULL);
	dest = string;
	while (start < end)
	{
		*dest++ = *start++;
	}
	*dest = '\0';
	return (string);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != 0)
	{
		if (c == s[i])
			in_word = 0;
		if (!in_word && c != s[i])
		{
			count++;
			in_word = 1;
		}
		i++;
	}
	return (count);
}
