/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbsearch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:17:51 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:12:12 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_lst.h"

static t_ftlst	*st_lstmiddle(t_ftlst *lst, t_ftlst *last)
{
	t_ftlst	*slow;
	t_ftlst	*fast;

	if (lst == NULL)
		return (NULL);
	slow = lst;
	fast = lst;
	while (fast != last)
	{
		fast = fast->next;
		if (fast == last)
			break ;
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

static t_ftlst	*st_lstbsearch_rec(t_ftlst *lst, t_ftlst *last,
					t_ftcompar_func cmp, const void *ref)
{
	int		res;
	t_ftlst	*mid;

	if (lst == NULL)
		return (NULL);
	mid = st_lstmiddle(lst, last);
	if (mid == NULL)
		return (NULL);
	if (mid->next == NULL)
	{
		if (cmp(ref, mid->data) == 0)
			return (mid);
		return (NULL);
	}
	res = cmp(ref, mid->next->data);
	if (res < 0)
		return (st_lstbsearch_rec(lst, mid, cmp, ref));
	else if (res > 0)
		return (st_lstbsearch_rec(mid->next->next, NULL, cmp, ref));
	return (mid->next);
}

t_ftlst			*ft_lstbsearch(t_ftlst *lst, t_ftcompar_func cmp,
									const void *ref)
{
	return (st_lstbsearch_rec(lst, NULL, cmp, ref));
}
