/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 22:45:07 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 22:58:21 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief      Remove element from vector
** \param vec  Vector to remove from
** \param i    Index of the element to remove
** \param del  Delete function applied to ith element
*/

void	ft_vecremove(t_ftvec *vec, size_t i, void (*del)(void *elem))
{
	if (vec->size == 0 || i > vec->size - 1)
		return ;
	if (del != NULL)
		del(vec->data[i]);
	ft_memmove(vec->data + i, vec->data + i + 1,
			(vec->size - i - 1) * sizeof(void*));
	vec->size--;
}
