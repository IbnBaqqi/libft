/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:23 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 12:43:05 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ATOI(3) (simplified)

NAME
    atoi -- convert ASCII string to integer
SYNOPSIS
    int atoi(const char *str);
DESCRIPTION
    The atoi() function converts the initial portion of the string pointed to by str to int representation.
*/

#include "libft.h"

static int ft_isspace(int c);

int ft_atoi(const char *ptr)
{
	int result;
	int sign;
	
	sign = 1;
	result = 0;
	while( ft_isspace(*ptr))
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
		ptr++;
	}
	return (result * sign);
}

static int ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
