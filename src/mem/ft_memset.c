/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/01 21:49:42 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_mem.h"

void	*ft_memset(void *s, int c, size_t n)
{
	uint64_t	buf;
	void		*cpy;

	cpy = s;
	c = (uint8_t)c;
	buf = (uint64_t)c | (uint64_t)c << 8 | (uint64_t)c << 16
		| (uint64_t)c << 24 | (uint64_t)c << 32 | (uint64_t)c << 40
		| (uint64_t)c << 48 | (uint64_t)c << 56;
	while (n > 8)
	{
		*(uint64_t*)s = buf;
		n -= 8;
		s += 8;
	}
	while (n > 0)
	{
		*(uint8_t*)s = c;
		s++;
		n--;
	}
	return (cpy);
}
