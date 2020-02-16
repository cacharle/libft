/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted_merge.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 01:58:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/16 02:18:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_ftlst	*ft_lstsorted_merge(t_ftlst *l1, t_ftlst *l2, t_ftcompar_func cmp)
{
	t_ftlst	*merged;

	merged = NULL;
	if (l1 == NULL)
		return (l2);
	if (l2 == NULL)
		return (l1);
	if (cmp(l1->content, l2->content) < 0)
	{
		merged = l1;
		merged->next = ft_lstsorted_merge(l1->next, l2, cmp);
	}
	else
	{
		merged = l2;
		merged->next = ft_lstsorted_merge(l1, l2->next, cmp);
	}
	return (merged);
}
