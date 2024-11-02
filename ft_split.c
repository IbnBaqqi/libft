/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:52:27 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/02 12:04:09 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy_words(char const *start, char const *end);
static int	count_word(char const *s, char c);
static void	freeup(char **word, int len);
static int	process_word(char const **s, char c, char **splitted, int i);

char	**ft_split(char const *s, char c)
{
	int			i;
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
			if (!process_word(&s, c, splitted, i))
				freeup(splitted, i);
			i++;
		}
		else
			s++;
	}
	splitted[i] = 0;
	return (splitted);
}

static int	process_word(char const **s, char c, char **splitted, int i)
{
	const char	*start;

	start = *s;
	while (**s != '\0' && **s != c)
		(*s)++;
	splitted[i] = copy_words(start, *s);
	if (!splitted[i])
		return (0);
	else
		return (1);
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

static void	freeup(char **word, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(word[i++]);
	free(word);
}
