/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:26:27 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:26:34 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief      Pop last element of a vector
** \param vec  Vector poped
** \param del  Delete function applied to last element
*/

void		ft_vecpop(t_ftvec *vec, void (*del)(void *elem))
{
	if (vec->size == 0)
		return ;
	if (del != NULL)
		del(vec->data[vec->size - 1]);
	vec->size--;
}
