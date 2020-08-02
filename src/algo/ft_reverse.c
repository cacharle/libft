/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:07:13 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 22:36:23 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

/*
** \brief        Reverse an array
** \param base   Array to reverse
** \param nel    Number of element in the array
** \param width  Size of each elements
*/

void	ft_reverse(void *base, size_t nel, size_t width)
{
	size_t	i;

	i = 0;
	nel--;
	while (i < nel)
	{
		ft_memswap(base + i * width, base + nel * width, width);
		i++;
		nel--;
	}
}
