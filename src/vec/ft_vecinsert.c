/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 10:46:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/02 11:04:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief       Insert element in vector
** \param vec   Vector where element is inserted
** \param i     Index where element should be inserted,
**              bound checking is performed
** \param elem  Element to insert
** \return      Passed vector or NULL on error
*/

t_ftvec	*ft_vecinsert(t_ftvec *vec, size_t i, void *elem)
{
	if (i > vec->size)
		return (NULL);
	if (vec->capacity <= vec->size)
		if (ft_vecgrow(vec) == NULL)
			return (NULL);
	ft_memmove(vec->data + i + 1, vec->data + i,
				(vec->size - i) * sizeof(void*));
	vec->data[i] = elem;
	vec->size++;
	return (vec);
}
