/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 02:26:41 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 02:59:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

static int	st_mergesort_error(void *left, void *right)
{
	free(left);
	free(right);
	return (-1);
}

static void	st_merge_sorted(struct s_merge_sorted_arrays *arrays, size_t nel,
				size_t width, int (*compar)(const void *, const void *))
{
	size_t	li;
	size_t	ri;

	li = 0;
	ri = 0;
	while (li < nel / 2 && ri < nel - nel / 2)
	{
		if (compar(arrays->left + li * width, arrays->right + ri * width) < 0)
			ft_memcpy(arrays->base, arrays->left + li++ * width, width);
		else
			ft_memcpy(arrays->base, arrays->right + ri++ * width, width);
	}
	while (li < nel / 2)
		ft_memcpy(arrays->base, arrays->left + li++ * width, width);
	while (ri < nel - nel / 2)
		ft_memcpy(arrays->base, arrays->right + ri++ * width, width);
}

int			ft_mergesort(void *base, size_t nel, size_t width,
				int (*compar)(const void *, const void *))
{
	size_t							mid;
	struct s_merge_sorted_arrays	arrays;

	if (nel < 2)
		return (0);
	mid = nel / 2;
	if ((arrays.left = malloc(mid * width)) == NULL)
		return (-1);
	if ((arrays.right = malloc((nel - mid) * width)) == NULL)
		return (st_mergesort_error(arrays.left, NULL));
	ft_memcpy(arrays.left, base, mid * width);
	ft_memcpy(arrays.right, base, (nel - mid) * width);
	if (ft_mergesort(arrays.left, mid, width, compar) == -1)
		return (st_mergesort_error(arrays.left, arrays.right));
	if (ft_mergesort(arrays.right, nel - mid, width, compar) == -1)
		return (st_mergesort_error(arrays.left, arrays.right));
	arrays.base = base;
	st_merge_sorted(&arrays, nel, width, compar);
	return (0);
}
