/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heapsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 02:59:22 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 04:22:19 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

/* static void	st_build_max_heap(void *base, size_t nel, size_t width, */
/* 				int (*compar)(const void *, const void *)) */
/* { */
/* 	int	i; */
/*  */
/* 	i = 1; */
/* 	while (i < nel) */
/* 	{ */
/* 		compar(base + i * width, base + 2 * i * width) */
/*  */
/* 		i++; */
/* 	} */
/* } */
/*  */
/* static void	st_heapify(void *base, size_t nel, size_t width, */
/* 				int (*compar)(const void *, const void *)) */
/* { */
/*  */
/* } */

int		ft_heapsort(void *base, size_t nel, size_t width,
				int (*compar)(const void *, const void *))
{
	(void)base;
	(void)nel;
	(void)width;
	(void)compar;
	/* size_t	i; */
    /*  */
	/* if (nel < 2) */
	/* 	return (0); */
	/* st_build_max_heap(base, nel, width, compar); */
	/* i = -1; */
	/* while (++i < nel) */
	/* { */
	/* 	ft_memswap(base, base + (nel - i - 1) * width); */
	/* 	st_heapify(base, nel - i - 1, width, compar); */
	/* } */
	return (0);
}
