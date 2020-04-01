/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:14:50 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:45:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

t_flist	*list_new(t_pformat *content)
{
	t_flist	*lst;

	if ((lst = (t_flist*)malloc(sizeof(t_flist))) == NULL)
		return (NULL);
	lst->data = content;
	lst->next = NULL;
	return (lst);
}

void	*list_destroy(t_flist **lst)
{
	if (lst == NULL)
		return (NULL);
	while (*lst != NULL)
		list_pop_front(lst);
	return (NULL);
}

void	list_push_front(t_flist **lst, t_flist *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

void	list_pop_front(t_flist **lst)
{
	t_flist	*tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	tmp = (*lst)->next;
	free((*lst)->data);
	free(*lst);
	*lst = tmp;
}

t_flist	*list_reverse(t_flist *lst)
{
	t_flist	*tmp;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	tmp = list_reverse(lst->next);
	lst->next->next = lst;
	lst->next = NULL;
	return (tmp);
}
