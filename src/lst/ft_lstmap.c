/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:03:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/15 23:11:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_lst.h"

t_ftlst	*ft_lstmap(t_ftlst *lst, void *(*f)(void *), void (*del)(void *))
{
	t_ftlst	*mapped;
	t_ftlst	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	mapped = NULL;
	while (lst != NULL)
	{
		if ((tmp = ft_lstnew((*f)(lst->content))) == NULL)
		{
			ft_lstclear(&mapped, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped, tmp);
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
** if ((tmp = ft_lstnew(lst->content)) == NULL)
** 	return (NULL);
** tmp->content = (*f)(tmp->content);
** tmp->next = ft_lstmap(lst->next, f);
** return (tmp);
*/
