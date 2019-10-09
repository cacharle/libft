/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:03:57 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/09 09:09:13 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*mapped;
	t_list	*tmp;

	while (lst != NULL)
	{
		tmp = ft_lstnew(lst->content);
		tmp->next = lst->next;
		tmp = (*f)(tmp);
		ft_lstadd_back(&mapped, tmp);
	}
	return (mapped);
}
