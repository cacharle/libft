/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:36:49 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:20:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief    Remove node on some condition
** \param cmp  Comparison function, return 0 if equal
** \param ref  Reference data passed has the first arg of `cmp`
** \param del  Delete function to free removed node data
*/

void	ft_lstremove_if(t_ftlst **lst, t_ftcompar_func cmp,
						const void *ref, t_ftdel_func del)
{
	t_ftlst *saved_next;

	if (lst == NULL || *lst == NULL)
		return ;
	if (cmp(ref, (*lst)->data) == 0)
	{
		saved_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = saved_next;
		ft_lstremove_if(lst, cmp, ref, del);
		return ;
	}
	ft_lstremove_if(&(*lst)->next, cmp, ref, del);
}
