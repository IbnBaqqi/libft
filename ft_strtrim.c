/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:43:01 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 10:57:33 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(char const *str, char c);
static char	*fill_mem_trim(char const *s, char *trim_mem, char const *set_trim);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_mem;
	char	*get_trim_mem;
	int		i;
	int		set_in_s;
	size_t	trim_len;

	i = 0;
	set_in_s = 0;
	while (s1[i] != 0)
		set_in_s += count_char(set, s1[i++]);
	trim_len = ft_strlen(s1) - set_in_s;
	str_mem = (char *)malloc(trim_len + 1);
	if (!str_mem)
		return (NULL);
	get_trim_mem = fill_mem_trim(s1, str_mem, set);
	return (get_trim_mem);
}

static int	count_char(char const *str, char c)
{
	int	found;

	found = 0;
	while (*str != '\0')
	{
		if (c == *str)
		{
			found++;
			return (found);
		}
		str++;
	}
	return (0);
}

static char	*fill_mem_trim(char const *s, char *trim_mem, char const *set_trim)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (count_char(set_trim, s[i]))
		{
			i++;
			continue ;
		}
		trim_mem[j++] = s[i++];
	}
	trim_mem[j] = '\0';
	return (trim_mem);
}
