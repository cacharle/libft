/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:36:49 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:55:47 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstremove_if(t_list **lst,
						t_ftbool (*equal)(void *ref, void *content), void *ref,
						void (*del)(void *content))
{
	t_list *saved_next;

	if (lst == NULL || *lst == NULL)
		return ;
	if (!equal(ref, &(*lst)->val))
	{
		ft_lstremove_if(&(*lst)->next, equal, ref, del);
		return ;
	}
	saved_next = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = saved_next;
	ref_ft_list_remove_if(lst, equal, ref, del);
}
