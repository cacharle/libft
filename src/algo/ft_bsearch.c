/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:29:05 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 23:14:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

void	*ft_bsearch(const void *base, size_t nel, size_t width,
							t_ftsearch_const *consts)
{
	int		res;
	size_t	mid;

	if (nel < 1)
		return (NULL);
	mid = nel / 2;
	res = (consts->compar)(consts->key, base + mid * width);
	if (res == 0)
		return ((void*)base + mid * width);
	if (res < 0)
		return (ft_bsearch(base, mid, width, consts));
	else
		return (ft_bsearch(base + (mid + 1) * width, nel - mid - 1,
							width, consts));
}
