/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:25:51 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 02:55:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

static t_ftrange	ft_range_new(int lo, int hi)
{
	t_ftrange range;

	range.lo = lo;
	range.hi = hi;
	return (range);
}

static int			ft_qsort_partition(void *base, t_ftrange range,
										size_t width, t_ftcompar_func compar)
{
	void	*pivot;
	int		p;
	int		i;

	pivot = base + (range.hi * width);
	p = range.lo;
	i = range.lo - 1;
	while (++i < range.hi)
	{
		if (compar(base + (i * width), pivot) < 0)
		{
			ft_memswap(base + (i * width), base + (p * width), width);
			p++;
		}
	}
	ft_memswap(pivot, base + (p * width), width);
	return (p);
}

static void			ft_qsort_rec(void *base, t_ftrange range,
										size_t width, t_ftcompar_func compar)
{
	int	pivot;

	if (range.lo >= range.hi)
		return ;
	pivot = ft_qsort_partition(base, range, width, compar);
	ft_qsort_rec(base, ft_range_new(range.lo, pivot - 1), width, compar);
	ft_qsort_rec(base, ft_range_new(pivot + 1, range.hi), width, compar);
}

void				ft_qsort(void *base, size_t nel, size_t width,
								t_ftcompar_func compar)
{
	if (width == 0 || nel < 2)
		return ;
	ft_qsort_rec(base, ft_range_new(0, nel - 1), width, compar);
}
