/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:56:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/19 08:22:17 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void *a, void *b, size_t size)
{
	t_byte	tmp;
	t_byte	*cast_a;
	t_byte	*cast_b;

	cast_a = (t_byte*)a;
	cast_b = (t_byte*)b;
	while (size-- > 0)
	{
		tmp = cast_a[size];
		cast_a[size] = cast_b[size];
		cast_b[size] = tmp;
	}
}
