/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:56:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 02:55:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void *a, void *b, size_t size)
{
	t_ftbyte	tmp;
	t_ftbyte	*cast_a;
	t_ftbyte	*cast_b;

	cast_a = (t_ftbyte*)a;
	cast_b = (t_ftbyte*)b;
	while (size-- > 0)
	{
		tmp = cast_a[size];
		cast_a[size] = cast_b[size];
		cast_b[size] = tmp;
	}
}
