/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:03:57 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/09 12:41:39 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*mapped;

	if (lst == NULL)
		return (NULL);
	if ((mapped = ft_lstnew(lst->content)) == NULL)
		return (NULL);
	mapped->next = ft_lstmap(lst->next, f);
	return (mapped);
}
