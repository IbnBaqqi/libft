/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 18:01:09 by sabdulba          #+#    #+#             */
/*   Updated: 2025/02/08 18:01:12 by sabdulba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear_helper(t_list *lst, void (*del)(void *))
{
	t_list	*next;

	next = lst->next;
	ft_lstdelone(lst, del);
	if (!next)
		return ;
	return (clear_helper(next, del));
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	clear_helper(*lst, del);
	*lst = NULL;
}
