/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_algo.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:22:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 23:33:51 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** \file     libft_algo.h
** \brief    Algorithms
*/

#ifndef LIBFT_ALGO_H
# define LIBFT_ALGO_H

# include <stdlib.h>
# include "libft_mem.h"
# include "libft_def.h"
# include "libft_str.h"

/*
** \brief     Range struct
** \param lo  Lower bound
** \param hi  Upper bound
*/

typedef struct
{
	int				lo;
	int				hi;
}					t_ftrange;

/*
** \brief        Merge sort consts struct
** \param base   Array to sort
** \param left   Left subarray
** \param right  Right subarray
** \note         Only used internaly by ft_mergesort
*/

struct				s_merge_sorted_arrays
{
	void			*base;
	void			*left;
	void			*right;
};

/*
** remove this horror
*/

typedef struct		s_ft_search_const
{
	const void		*key;
	t_ftcompar_func	compar;
}					t_ftsearch_const;

bool				ft_is_set(void *base, size_t nel, size_t width,
						t_ftcompar_func compar);
int					ft_compar_int(const void *a, const void *b);
int					ft_compar_str(const void *s1_p, const void *s2_p);
void				ft_qsort(void *base, size_t nel, size_t width,
						t_ftcompar_func compar);
int					ft_mergesort(void *base, size_t nel, size_t width,
					int (*compar)(const void *, const void *));
int					ft_heapsort(void *base, size_t nel, size_t width,
					int (*compar)(const void *, const void *));
void				ft_reverse(void *base, size_t nel, size_t width);
void				*ft_bsearch(const void *base, size_t nel, size_t width,
							t_ftsearch_const *consts);
void				*ft_lfind(const void *base, size_t *nelp, size_t width,
						t_ftsearch_const *consts);
void				*ft_lsearch(const void *base, size_t *nelp, size_t width,
						t_ftsearch_const *consts);

#endif
