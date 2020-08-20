/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 13:07:51 by charles           #+#    #+#             */
/*   Updated: 2020/08/20 13:10:38 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Delete last node
** \param del  Delete function for node data
*/

void	ft_lstpop_back(t_ftlst **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL)
		return ;
	if ((*lst)->next == NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = NULL;
		return ;
	}
	ft_lstpop_back(&(*lst)->next, del);
}
