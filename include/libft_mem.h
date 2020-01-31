/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:35:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:17:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_H
# define LIBFT_MEM_H

# include <stddef.h>
# include "libft_types.h"

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				ft_memswap(void *a, void *b, size_t size);
void				*ft_memmem(const void *big, size_t big_len,
							const void *little, size_t little_len);
void				ft_memset_pattern4(void *b, const void *pattern4,
										size_t len);

/*
** bloat ?
*/

void				ft_memdel(void **ap);

#endif
