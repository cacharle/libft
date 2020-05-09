/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 15:28:47 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:40:32 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlst.h"

void	ft_dlstdelone(t_ftdlst *dlst, t_ftdel_func del)
{
	if (dlst == NULL)
		return ;
	if (dlst->prev != NULL)
		dlst->prev->next = dlst->next;
	if (dlst->next != NULL)
		dlst->next->prev = dlst->prev;
	if (del != NULL)
		del(dlst->data);
	free(dlst);
}
