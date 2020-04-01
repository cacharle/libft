/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecgrow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:13:07 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 21:15:20 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief      Vector Growth factor
*/

#define FT_VEC_GROWTH_FACTOR 1.5

/*
** \brief      Grow the vector capacity by a constant factor
** \param vec  Vector to grow
** \return     Passed vector of NULL on error
*/

t_ftvec		*ft_vecgrow(t_ftvec *vec)
{
	size_t	new_capacity;
	void	**new_data;

	if (vec->capacity <= 1)
		new_capacity = 2;
	else
		new_capacity = vec->capacity * FT_VEC_GROWTH_FACTOR;
	if ((new_data = (void**)malloc(sizeof(void*) * new_capacity)) == NULL)
		return (NULL);
	ft_memcpy(new_data, vec->data, vec->size);
	free(vec->data);
	vec->data = new_data;
	vec->capacity = new_capacity;
	return (vec);
}
