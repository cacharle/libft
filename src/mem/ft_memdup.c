/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 10:56:00 by charles           #+#    #+#             */
/*   Updated: 2020/05/13 10:58:29 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/*
** \brief      Duplicate memory
** \param src  Pointer the memory to duplicate
** \param n    Size of the memory
** \return     Duplicated memory or NULL on error
*/

void	*ft_memdup(void *src, size_t n)
{
	void	*clone;

	if ((clone = malloc(n)) == NULL)
		return (NULL);
	return (ft_memcpy(clone, src, n));
}
