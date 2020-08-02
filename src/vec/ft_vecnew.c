/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:03:49 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 21:24:36 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief           Create a new vector
** \param capacity  Initial capacity of the underlying array
**                  Can't be lower than 1
** \return          Created vector or NULL on malloc error
*/

t_ftvec		*ft_vecnew(size_t capacity)
{
	t_ftvec	*vec;

	if ((vec = (t_ftvec*)malloc(sizeof(t_ftvec))) == NULL)
		return (NULL);
	if (capacity == 0)
		capacity = 1;
	if ((vec->data = (void**)malloc(sizeof(void*) * capacity)) == NULL)
	{
		free(vec);
		return (NULL);
	}
	vec->capacity = capacity;
	vec->size = 0;
	return (vec);
}
