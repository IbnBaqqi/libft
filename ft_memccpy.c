/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:16:00 by sabdulba          #+#    #+#             */
/*   Updated: 2024/10/30 10:16:04 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char   a = (unsigned char) c;
    unsigned char   *dst = (unsigned char *) dest;
    const char  *nsrc = (const char *) src;

    while (*nsrc && n-- > 0)
    {
        if (*nsrc == a)
        {
            *dst++ = *nsrc++;
            return (dst);
        }
        *dst++ = *nsrc++;
    }
    return (NULL);
}
