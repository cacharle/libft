/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbsearch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:17:51 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:17:53 by cacharle         ###   ########.fr       */
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
		if (fast == NULL)
			break;
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

static t_ftlst	*st_lstbsearch_rec(t_ftlst *lst, t_ftlst *last,
							t_ftbool (*equal)(void *ref, void *content), void *ref)
{
	t_ftlst	*mid;
	t_ftlst	*left;

	if (lst == NULL)
		return (NULL);
	mid = st_lstmiddle(lst, last);
	if ((*equal)(ref, mid->content))
		return (mid);
	left = st_lstbsearch_rec(lst, mid, equal, ref);
	if (left != NULL)
		return (left);
	return (st_lstbsearch_rec(mid, NULL, equal, ref));
}

t_ftlst	*ft_lstbsearch(t_ftlst *lst,
						t_ftbool (*equal)(void *ref, void *content), void *ref)
{
	return (st_lstbsearch_rec(lst, NULL, equal, ref));
}
