/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:17:15 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:05:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

bool	ft_is_set(void *base, size_t nel, size_t width,
						t_ftcompar_func compar)
{
	size_t	i;

	if (nel < 2)
		return (TRUE);
	ft_qsort(base, nel, width, compar);
	i = 0;
	while (i < nel - 1)
	{
		if (compar(base + (i * width), base + ((i + 1) * width)) == 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
