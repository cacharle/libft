/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecswallow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:17:00 by charles           #+#    #+#             */
/*   Updated: 2020/07/15 18:30:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief            Insert all element of a vector in an other vector
**                   and free the swallowed vector
** \param vec        Vector where the element will be inserted
** \param index      Index of the insertion
** \param swallowed  Vector to swallow
** \return           Destination vector or NULL on error
*/

t_ftvec	*ft_vecswallow_at(t_ftvec *vec, size_t index, t_ftvec *swallowed)
{
	size_t	i;

	if (ft_vecreserve(vec, vec->size + swallowed->size) == NULL)
		return (NULL);
	i = -1;
	while (++i < swallowed->size)
		ft_vecinsert(vec, index, swallowed->data[i]);
	ft_vecdestroy(swallowed, NULL);
	return (vec);
}
