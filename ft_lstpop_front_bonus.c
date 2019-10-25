/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 03:32:51 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/25 03:35:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				ft_lstpop_front(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = (*lst)->next;
	del((*lst)->content);
	free(*lst);
	*lst = tmp;
}
