/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:00:37 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:24:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_ftlst	*ft_lstlfind(t_ftlst *lst, t_ftcompar_func cmp, const void *ref)
{
	if (lst == NULL)
		return (NULL);
	if (cmp(ref, lst->data) == 0)
		return (lst);
	return (ft_lstlfind(lst->next, cmp, ref));
}
