/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:02:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/16 17:24:00 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Destroy a list and set his pointer to NULL
** \param lst  Pointer to pointer to list. The pointer will be set to NULL
** \param del  Delete Function for data of each node
*/

void	ft_lstdestroy(t_ftlst **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL)
		return ;
	ft_lstdestroy(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
