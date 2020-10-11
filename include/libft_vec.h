/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vec.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 18:57:16 by charles           #+#    #+#             */
/*   Updated: 2020/10/11 14:04:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H

/*
** \file   libft_vec.h
** \brief  Vector manipulation
*/

# include <stdlib.h>
# include "libft_def.h"
# include "libft_mem.h"
# include "libft_algo.h"
# include "libft_lst.h"

/*
** \brief           Vector struct
** \param data      Underlying array
** \param capacity  Size of the underlying array
** \param size      Number of element in the vector
*/

typedef struct	s_ftvec
{
	void		**data;
	size_t		capacity;
	size_t		size;
}				t_ftvec;

t_ftvec			*ft_vecnew(size_t capacity);
void			*ft_vecdestroy(t_ftvec *vec, void (*del)(void *elem));
t_ftvec			*ft_vecgrow(t_ftvec *vec);
t_ftvec			*ft_vecreserve(t_ftvec *vec, size_t	capacity);
t_ftvec			*ft_vecpush(t_ftvec *vec, void *pushed);
t_ftvec			*ft_vecpush_safe(t_ftvec *vec, void *pushed);
void			ft_vecpop(t_ftvec *vec, void (*del)(void *elem));
void			ft_veciter(t_ftvec *vec, void (*f)(void *elem));
void			ft_veciter_addr(t_ftvec *vec, void (*f)(void **addr));
void			*ft_vectake(t_ftvec *vec, size_t i);
void			ft_vecremove(t_ftvec *vec, size_t i, void (*del)(void *elem));
t_ftvec			*ft_vecinsert(t_ftvec *vec, size_t i, void *elem);
t_ftvec			*ft_vecinsert_safe(t_ftvec *vec, size_t i, void *elem);
void			ft_vecsort(t_ftvec *vec, t_ftcompar_func cmp);
void			**ft_vecunwrap(t_ftvec *vec);
t_ftvec			*ft_vecfrom_lst(t_ftlst *lst);
t_ftvec			*ft_vecswallow_at(
					t_ftvec *vec, size_t index, t_ftvec *swallowed);

#endif
