/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:58:33 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/01 10:58:06 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long n);

char	*ft_itoa(int nbr)
{
	char	*string;
	int		i;
	int		len;
	long	n;

	n = nbr;
	if (n == 0)
		return (ft_strdup("0"));
	len = int_len(n);
	string = (char *)malloc(len + 1);
	if (!string)
		return (NULL);
	i = len - 1;
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		string[i--] = ((n % 10) + 48);
		n = n / 10;
	}
	string[len] = '\0';
	return (string);
}

static int	int_len(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
