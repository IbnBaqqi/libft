/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:23 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 10:58:02 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *ptr)
{
	long	result;
	long	sign;

	sign = 1;
	result = 0;
	while (ft_isspace(*ptr))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign = -1;
		ptr++;
	}
	while (ptr && *ptr >= 48 && *ptr <= 57)
	{
		result = result * 10 + *ptr - 48;
		if (result < 0 && sign == -1)
			return ((int)LONG_MIN);
		if (result < 0 && sign == 1)
			return ((int)LONG_MAX);
		ptr++;
	}
	return ((int)(result * sign));
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
