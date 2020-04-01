/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecdestroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:06:22 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 19:09:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief    Destroy a vector
** \param vec  Vector to destroy
** \param del  Delete function applied to each element of the vector
*/

void		ft_vecdestroy(t_ftvec *vec, void (*del)(void *elem))
{
	if (vec == NULL)
		return ;
	if (del != NULL)
		ft_veciter(vec, del);
	free(vec->data);
	free(vec);
}
