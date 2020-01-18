/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse_ret.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:51:15 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/18 11:52:50 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstreverse_ret(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	tmp = ft_lstreverse_ret(lst->next);
	lst->next->next = lst;
	lst->next = NULL;
	return (tmp);
}
