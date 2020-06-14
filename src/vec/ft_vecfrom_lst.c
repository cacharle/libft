/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecfrom_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 15:59:24 by charles           #+#    #+#             */
/*   Updated: 2020/06/15 09:48:48 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

t_ftvec	*ft_vecfrom_lst(t_ftlst *lst)
{
	t_ftvec	*vec;
	t_ftlst	*curr;

	if ((vec = ft_vecnew(ft_lstsize(lst))) == NULL)
		return (NULL);
	curr = lst;
	while (curr != NULL)
	{
		ft_vecpush(vec, curr->data);
		curr = curr->next;
	}
	return (vec);
}
