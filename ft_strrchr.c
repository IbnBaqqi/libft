/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:19:51 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/31 17:14:16 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		a;
	const char	*x;
	size_t		len;

	a = (char )c;
	x = s;
	len = ft_strlen(s);
	if (a == '\0')
		return ((char *)&x[len]);
	while (len > 0)
	{
		if (x[len - 1] == a)
			return ((char *) &x[len - 1]);
		len--;
	}
	return (NULL);
}
