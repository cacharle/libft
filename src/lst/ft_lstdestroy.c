/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:02:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/08/20 14:36:17 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Destroy a list and set his pointer to NULL
** \param del  Delete Function for data of each node
** \return     returns NULL
*/

void	*ft_lstdestroy(t_ftlst **lst, void (*del)(void *))
{
	if (lst == NULL)
		return (NULL);
	if (*lst == NULL)
		return (NULL);
	ft_lstdestroy(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
	return (NULL);
}
