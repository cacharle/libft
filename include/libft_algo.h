/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:22:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 05:58:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_ALGO_H
# define LIBFT_ALGO_H

# include <stdlib.h>
# include <stddef.h>
# include "libft_mem.h"
# include "libft_types.h"

typedef int			(*t_ftcompar_func)(const void*, const void*);

typedef struct
{
	int				lo;
	int				hi;
}					t_ftrange;

struct				s_merge_sorted_arrays
{
	void			*base;
	void			*left;
	void			*right;
};

typedef struct		s_ft_search_const
{
	const void		*key;
	t_ftcompar_func	compar;
}					t_ftsearch_const;

t_ftbool			ft_is_set(void *base, size_t nel, size_t width,
						t_ftcompar_func compar);
int					ft_compar_int(const void *a, const void *b);
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
