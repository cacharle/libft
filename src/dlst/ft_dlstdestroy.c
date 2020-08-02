/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdestroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 15:22:51 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:44:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlst.h"

void	ft_dlstdestroy(t_ftdlst *dlst, t_ftdel_func del)
{
	if (dlst == NULL)
		return ;
	if (dlst->prev != NULL)
	{
		dlst->prev->next = NULL;
		ft_dlstdestroy(dlst->prev, del);
	}
	if (dlst->next != NULL)
	{
		dlst->next->prev = NULL;
		ft_dlstdestroy(dlst->next, del);
	}
	if (del != NULL)
		del(dlst->data);
	free(dlst);
}
