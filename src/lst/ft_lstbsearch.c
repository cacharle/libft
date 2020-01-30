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

static t_list	*st_lstmiddle(t_list *lst, t_list)
{
	t_list	*slow;
	t_list	*fast;

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

static t_list	*st_lstbsearch_rec(t_list *lst, t_list *last,
							t_ftbool (*equal)(void *ref, void *content), void *ref)
{
	t_list	*mid;
	t_list	*left;

	if (lst == NULL)
		return (NULL);
	if ((*equal)(lst->content))
		return (lst);
	mid = st_lstmiddle(lst, last);
	left = ft_lstbsearch_rec(lst->next, mid, equal));
	if (left != NULL)
		return (left);
	return (ft_lstbsearch_rec(mid, NULL, equal));
}

t_list	*ft_lstbsearch(t_list *lst,
						t_ftbool (*equal)(void *ref, void *content), void *ref)
{
	return (ft_lstbsearch_rec(lst, NULL, equal));
}
