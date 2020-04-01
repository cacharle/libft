/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:29:58 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:12:47 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Delete head node and replace it with next node
** \param del  Delete function for node data
*/

void	ft_lstpop_front(t_ftlst **lst, void (*del)(void *))
{
	t_ftlst	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = (*lst)->next;
	ft_lstdelone(*lst, del);
	*lst = tmp;
}
