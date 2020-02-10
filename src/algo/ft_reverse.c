/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:07:13 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 05:19:22 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

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
