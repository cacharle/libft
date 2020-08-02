/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 01:53:55 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/16 02:18:05 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief      Sort list
** \param cmp  Comparison function, <0 if less, 0 if equal, >0 if greater
** \note       Use merge sort algorithm
*/

void	ft_lstsort(t_ftlst **begin_list, t_ftcompar_func cmp)
{
	t_ftlst	*fast;
	t_ftlst	*slow;
	t_ftlst	*middle;

	if (begin_list == NULL || *begin_list == NULL
			|| (*begin_list)->next == NULL)
		return ;
	fast = (*begin_list)->next;
	slow = *begin_list;
	while (fast != NULL)
	{
		fast = fast->next;
		if (fast != NULL)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	middle = slow->next;
	slow->next = NULL;
	ft_lstsort(begin_list, cmp);
	ft_lstsort(&middle, cmp);
	*begin_list = ft_lstsorted_merge(*begin_list, middle, cmp);
}
