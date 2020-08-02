/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 02:26:41 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 22:40:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

/*
** \brief        Helper function to return in case of error
** \param left   Left subarray
** \param right  Right subarray
** \return       -1 to indicate error
*/

static int	st_mergesort_error(void *left, void *right)
{
	free(left);
	free(right);
	return (-1);
}

/*
** \brief         Merge 2 sorted arrays
** \param arrays  Struct containing the arrays (base, left, right)
** \param nel     Number of element in base
** \param compar  Comparison function
*/

static void	st_merge_sorted(struct s_merge_sorted_arrays *arrays, size_t nel,
				size_t width, int (*compar)(const void *, const void *))
{
	size_t	bi;
	size_t	li;
	size_t	ri;
	size_t	mid;

	mid = nel / 2;
	bi = 0;
	li = 0;
	ri = 0;
	while (li < mid && ri < nel - mid)
	{
		if (compar(arrays->left + li * width, arrays->right + ri * width) < 0)
			ft_memcpy(arrays->base + bi * width,
						arrays->left + li++ * width, width);
		else
			ft_memcpy(arrays->base + bi * width,
						arrays->right + ri++ * width, width);
		bi++;
	}
	while (li < mid)
		ft_memcpy(arrays->base + bi++ * width,
					arrays->left + li++ * width, width);
	while (ri < nel - mid)
		ft_memcpy(arrays->base + bi++ * width,
					arrays->right + ri++ * width, width);
}

/*
** \brief    Sort an array using the merge sort algorithm
** \param base    Array to sort
** \param nel     Number of element in the array
** \param width   Size of each element
** \return        0 on success, -1 on error
*/

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
	ft_memcpy(arrays.right, base + mid * width, (nel - mid) * width);
	if (ft_mergesort(arrays.left, mid, width, compar) == -1)
		return (st_mergesort_error(arrays.left, arrays.right));
	if (ft_mergesort(arrays.right, nel - mid, width, compar) == -1)
		return (st_mergesort_error(arrays.left, arrays.right));
	arrays.base = base;
	st_merge_sorted(&arrays, nel, width, compar);
	free(arrays.left);
	free(arrays.right);
	return (0);
}
