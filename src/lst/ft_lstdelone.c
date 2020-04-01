/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:03:02 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 04:02:31 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Delete list node
** \param del  Delete function for node's data
*/

void	ft_lstdelone(t_ftlst *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (del != NULL)
		(*del)(lst->data);
	free(lst);
}
