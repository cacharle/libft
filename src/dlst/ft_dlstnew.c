/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 15:21:38 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:22:45 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dlst.h"

t_ftdlst	*ft_dlstnew(void *data)
{
	t_ftdlst	*dlst;

	if ((dlst = (t_ftdlst*)malloc(sizeof(t_ftdlst))) == NULL)
		return (NULL);
	dlst->prev = NULL;
	dlst->next = NULL;
	dlst->data = data;
	return (dlst);
}
