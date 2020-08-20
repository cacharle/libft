/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecreserve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:22:08 by charles           #+#    #+#             */
/*   Updated: 2020/08/20 23:21:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief           Set vector capacity to at least a certain size
** \param vec       Reserved vector
** \param capacity  Minimum required capacity
** \return          The Vector or NULL on error
*/

t_ftvec	*ft_vecreserve(t_ftvec *vec, size_t capacity)
{
	while (vec->capacity < capacity)
	{
		if (ft_vecgrow(vec) == NULL)
			return (NULL);
	}
	return (vec);
}
