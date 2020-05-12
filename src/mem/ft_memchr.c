/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:55:31 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/12 21:39:04 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Determining if a long word contain byte n
**
** xor all bytes with n, then check for zero byte like in ft_strlen.
*/

#define HIMAGIC 0x8080808080808080L
#define LOMAGIC 0x0101010101010101L

void	*ft_memchr(const void *s, int c, size_t n)
{
	uint64_t	buf;
	uint64_t	lw;

	c = (uint8_t)c;
	while (((uint64_t)s & 0b111) != 0 && n > 0)
	{
		if (*(uint8_t*)s == (uint8_t)c)
			return ((void*)s);
		n--;
		s++;
	}
	buf = c | c << 8 | c << 16 | c << 24;
	buf |= buf << 32;
	while (n >= 8)
	{
		lw = *(uint64_t*)s ^ buf;
		if ((lw - LOMAGIC) & ~lw & HIMAGIC)
			break ;
		n -= 8;
		s += 8;
	}
	while (n-- > 0)
		if (*(uint8_t*)s++ == (uint8_t)c)
			return ((void*)(s - 1));
	return (NULL);
}
