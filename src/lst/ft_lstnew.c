/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:01:16 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 04:01:35 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief       Create a list node
** \param data  Pointer to data of node
*/

t_ftlst	*ft_lstnew(void const *data)
{
	t_ftlst	*elem;

	if ((elem = (t_ftlst*)malloc(sizeof(t_ftlst))) == NULL)
		return (NULL);
	elem->data = (void*)data;
	elem->next = NULL;
	return (elem);
}
