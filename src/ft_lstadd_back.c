/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:01:27 by sabdulba          #+#    #+#             */
/*   Updated: 2025/02/08 18:01:29 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	add_back_helper(t_list *lst, t_list *new)
{
	if (!lst->next)
	{
		lst->next = new;
		return ;
	}
	add_back_helper(lst->next, new);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	add_back_helper(*lst, new);
}
