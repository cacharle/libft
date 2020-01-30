/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse_ret.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:51:15 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:12:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_lst.h"

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
