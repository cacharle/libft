/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 07:22:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/19 08:27:44 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGO_H
# define FT_ALGO_H

typedef int	t_bool;

typedef struct
{
	int		lo;
	int		hi;
}			t_ftrange;

typedef int	(*t_ftcompar_func)(const void*, const void*);

t_bool		ft_is_set(void *base, size_t nel, size_t width,
						t_ftcompar_func compar);
void		ft_qsort(void *base, size_t nel, size_t width,
						t_ftcompar_func compar);
int			ft_compar_int(const void *a, const void *b);

#endif
