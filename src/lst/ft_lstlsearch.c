/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlsearch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 02:57:12 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 03:35:45 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_ftlst	*ft_lstlsearch(t_ftlst *lst, t_ftcompar_func cmp, const void *ref)
{
	if (lst == NULL)
		return (ft_lstnew(ref));
	if (cmp(ref, lst->content) == 0)
		return (lst);
	if (lst->next == NULL)
	{
		lst->next = ft_lstnew(ref);
		return (lst->next);
	}
	return (ft_lstlsearch(lst->next, cmp, ref));
}
