/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectake.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:27:19 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 13:29:02 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

void	*ft_vectake(t_ftvec *vec, size_t i)
{
	void	*taken;

	if (vec->size == 0 || i > vec->size - 1)
		return (NULL);
	taken = vec->data[i];
	ft_memmove(vec->data + i, vec->data + i + 1,
			(vec->size - i - 1) * sizeof(void*));
	vec->size--;
	return (taken);
}
