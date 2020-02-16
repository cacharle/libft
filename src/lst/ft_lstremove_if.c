/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove_if.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:36:49 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/16 03:57:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_lst.h"

void	ft_lstremove_if(t_ftlst **lst, t_ftcompar_func cmp,
						const void *ref, t_ftdel_func del)
{
	t_ftlst *saved_next;

	if (lst == NULL || *lst == NULL)
		return ;
	if (cmp((*lst)->content, ref) == 0)
	{
		saved_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = saved_next;
		ft_lstremove_if(lst, cmp, ref, del);
		return ;
	}
	ft_lstremove_if(&(*lst)->next, cmp, ref, del);
}
