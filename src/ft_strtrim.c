/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:01 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/22 08:54:24 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set);
static char	*get_start(char const *s1, char const *set);
static char	*get_end(char const *s1, size_t len, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	//size_t	i;
	char	*start;
	char	*end;
	char	*trim;
	size_t	trimlen;

	if (!s1 || !set)
		return (NULL);
	//i = 0;
	start = get_start(s1, set);
	end = get_end(s1, ft_strlen(s1), set);
	if (start >= end)
		return (ft_strdup(""));
	trimlen = (end - start);
	trim = (char *)malloc(trimlen + 1);
	if (!trim)
		return (NULL);
	//i = 0;
	if (trimlen > 0)
		ft_strlcpy(trim, start, trimlen + 1);
	else
		trim[0] = '\0';
	return (trim);
}

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

//To trim the start
static char	*get_start(char const *s1, char const *set)
{
	while (*s1 && is_set(*s1, set))
		s1++;
	return ((char *)s1);
}

//Trim the end
static char	*get_end(char const *s1, size_t len, char const *set)
{
	if (len == 0)
		return ((char *)s1);
	while (len > 0 && is_set(s1[len - 1], set))
		len--;
	return ((char *)&s1[len]);
}
