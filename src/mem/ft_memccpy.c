/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:53 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/01 21:50:29 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define HIMAGIC 0x8080808080808080L
#define LOMAGIC 0x0101010101010101L

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	uint64_t	buf;
	uint64_t	lw;

	if (dest == src)
		return (dest);
	c = (uint8_t)c;
	while ((n & 0b111) != 0)
	{
		*(uint8_t*)dest = *(uint8_t*)src;
		if (*(uint8_t*)dest == c)
			return ((uint8_t*)dest + 1);
		src++;
		dest++;
		n--;
	}
	buf = (uint64_t)c | (uint64_t)c << 8 | (uint64_t)c << 16
		| (uint64_t)c << 24 | (uint64_t)c << 32 | (uint64_t)c << 40
		| (uint64_t)c << 48 | (uint64_t)c << 56;
	while (n > 0)
	{
		lw = *(uint64_t*)src ^ buf;
		if ((lw - LOMAGIC) & ~lw & HIMAGIC)
		{
			if ((((uint8_t*)dest)[0] = ((uint8_t*)src)[0]) == (uint8_t)c)
				return ((uint8_t*)dest + 1);
			if ((((uint8_t*)dest)[1] = ((uint8_t*)src)[1]) == (uint8_t)c)
				return ((uint8_t*)dest + 2);
			if ((((uint8_t*)dest)[2] = ((uint8_t*)src)[2]) == (uint8_t)c)
				return ((uint8_t*)dest + 3);
			if ((((uint8_t*)dest)[3] = ((uint8_t*)src)[3]) == (uint8_t)c)
				return ((uint8_t*)dest + 4);
			if ((((uint8_t*)dest)[4] = ((uint8_t*)src)[4]) == (uint8_t)c)
				return ((uint8_t*)dest + 5);
			if ((((uint8_t*)dest)[5] = ((uint8_t*)src)[5]) == (uint8_t)c)
				return ((uint8_t*)dest + 6);
			if ((((uint8_t*)dest)[6] = ((uint8_t*)src)[6]) == (uint8_t)c)
				return ((uint8_t*)dest + 7);
			if ((((uint8_t*)dest)[7] = ((uint8_t*)src)[7]) == (uint8_t)c)
				return ((uint8_t*)dest + 8);
		}
		else
			*(uint64_t*)dest = *(uint64_t*)src;
		n -= 8;
		dest += 8;
		src += 8;
	}
	return (NULL);
}
