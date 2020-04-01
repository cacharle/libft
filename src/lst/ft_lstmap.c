/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:03:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/15 23:11:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Clone a list and map a function to each node data
** \param lst  Origin list
** \param f    Function applied to each node's data
** \param del  Delete function for cleanning up in case of failed allocation
** \return     Mapped clone list
*/

t_ftlst	*ft_lstmap(t_ftlst *lst, void *(*f)(void *), void (*del)(void *))
{
	t_ftlst	*mapped;
	t_ftlst	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	mapped = NULL;
	while (lst != NULL)
	{
		if ((tmp = ft_lstnew((*f)(lst->data))) == NULL)
		{
			ft_lstdestroy(&mapped, del);
			return (NULL);
		}
		ft_lstpush_back(&mapped, tmp);
		lst = lst->next;
	}
	return (mapped);
}

/*
** Rest in peace, my beautiful recursion.
**
** t_ftlst  *tmp;
**
** if (lst == NULL)
**     return (NULL);
** if ((tmp = ft_lstnew(lst->data)) == NULL)
** 	return (NULL);
** tmp->data = (*f)(tmp->data);
** tmp->next = ft_lstmap(lst->next, f);
** return (tmp);
*/
