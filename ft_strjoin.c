/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:35:42 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 15:36:35 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str_mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_mem)
		return (NULL);
	while (s1[i] != 0)
	{
		str_mem[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		str_mem[i + j] = s2[j];
		j++;
	}
	str_mem[i + j] = '\0';
	return (str_mem);
}
