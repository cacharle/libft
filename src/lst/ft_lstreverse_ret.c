/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse_ret.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:51:15 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 02:20:21 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief   Reverse list
** \return  Pointer to reversed list
*/

t_ftlst	*ft_lstreverse_ret(t_ftlst *lst)
{
	t_ftlst	*tmp;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	tmp = ft_lstreverse_ret(lst->next);
	lst->next->next = lst;
	lst->next = NULL;
	return (tmp);
}
