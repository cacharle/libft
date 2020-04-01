/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:02:39 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 04:02:37 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Destroy a list and set his pointer to NULL
** \param del  Delete Function for data of each node
*/

void	ft_lstdestroy(t_ftlst **lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	ft_lstdestroy(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
