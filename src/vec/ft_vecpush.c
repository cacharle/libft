/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:22:20 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:20:06 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief         Push element at the end of vector
** \param vec     Vector where element will be pushed
** \param pushed  Element to push
** \return        Passed vector or NULL if couldnt grow vector
*/

t_ftvec		*ft_vecpush(t_ftvec *vec, void *pushed)
{
	if (vec->capacity <= vec->size)
		if (ft_vecgrow(vec) == NULL)
			return (NULL);
	vec->data[vec->size] = pushed;
	vec->size++;
	return (vec);
}
