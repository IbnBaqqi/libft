/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:00:02 by sabdulba          #+#    #+#             */
/*   Updated: 2025/02/08 18:00:06 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = ft_calloc(1, sizeof(t_list));
	if (!p)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
