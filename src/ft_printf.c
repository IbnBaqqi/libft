/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:47:34 by sabdulba          #+#    #+#             */
/*   Updated: 2024/11/09 18:15:26 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//TODO: why did va_arg didnt accept char but requested i change to int
static void	check_format(char c, va_list *ptr, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(*ptr, int), count);
	else if (c == 's')
		ft_putstr(va_arg(*ptr, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*ptr, int), count);
	else if (c == 'u')
		ft_unsigned(va_arg(*ptr, unsigned int), count);
	else if (c == 'x')
		ft_hex(va_arg(*ptr, unsigned long), count, 'x');
	else if (c == 'X')
		ft_hex(va_arg(*ptr, unsigned long), count, 'X');
	else if (c == 'p')
		ft_pointer(va_arg(*ptr, size_t), count);
	else if (c == '%')
		ft_putchar('%', count);
}

// Base function
int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			check_format(str[i], &ptr, &count);
			i++;
		}
		else
		{
			ft_putchar((char)str[i], &count);
			i++;
		}
	}
	va_end(ptr);
	return (count);
}
/*
int	main(void)
{
	int	res;
	int	res1;
	int	num;
	int	*ptr;

	num = 0;
	ptr = &num;
	res = ft_printf("Hive %s\n", "Helsinki.");
	res1 = printf("Hive %s\n", "Helsinki.");
	printf("%d\n", res);
	printf("%d\n", res1);
	res = ft_printf("Hive %s %d\n", "Helsinki.", 1024);
	res1 = printf("Hive %s %d\n", "Helsinki.", 1024);
	printf("%d\n", res);
	printf("%d\n", res1);
	res = ft_printf("Hive %x\n", 0);
	res1 = printf("Hive %x\n", 0);
	printf("%d\n", res);
	printf("%d\n", res1);
	res = ft_printf("Pointer address: %p\n", ptr);
	res1 = printf("Pointer address: %p\n", ptr);
	printf("%d\n", res);
	printf("%d\n", res1);
	
	ft_printf("%p %p\n", (void *)0, (void*)0);
	printf("%p %p\n", (void *)0, (void*)0);
	
	ft_printf("Print this %% out\n");
	printf("Print this %% out\n");

	return (0);
}
*/
