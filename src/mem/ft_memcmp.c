/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:56:44 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:54:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((n & 0b111) != 0)
	{
		n--;
		if (*(uint8_t*)s1 != *(uint8_t*)s2)
			return (*(uint8_t*)s1 - *(uint8_t*)s2);
		s1++;
		s2++;
	}
	while (n > 0)
	{
		if (*(uint64_t*)s1 != *(uint64_t*)s2)
		{
			if (((uint8_t*)s1)[0] != ((uint8_t*)s2)[0])
				return (((uint8_t*)s1)[0] - ((uint8_t*)s2)[0]);
			if (((uint8_t*)s1)[1] != ((uint8_t*)s2)[1])
				return (((uint8_t*)s1)[1] - ((uint8_t*)s2)[1]);
			if (((uint8_t*)s1)[2] != ((uint8_t*)s2)[2])
				return (((uint8_t*)s1)[2] - ((uint8_t*)s2)[2]);
			if (((uint8_t*)s1)[3] != ((uint8_t*)s2)[3])
				return (((uint8_t*)s1)[3] - ((uint8_t*)s2)[3]);
			if (((uint8_t*)s1)[4] != ((uint8_t*)s2)[4])
				return (((uint8_t*)s1)[4] - ((uint8_t*)s2)[4]);
			if (((uint8_t*)s1)[5] != ((uint8_t*)s2)[5])
				return (((uint8_t*)s1)[5] - ((uint8_t*)s2)[5]);
			if (((uint8_t*)s1)[6] != ((uint8_t*)s2)[6])
				return (((uint8_t*)s1)[6] - ((uint8_t*)s2)[6]);
			if (((uint8_t*)s1)[7] != ((uint8_t*)s2)[7])
				return (((uint8_t*)s1)[7] - ((uint8_t*)s2)[7]);
		}
		n -= 8;
		s1 += 8;
		s2 += 8;
	}
	return (0);
}
