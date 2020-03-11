/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:00:07 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:39:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_mem.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	uint64_t		*long_dest;
	const uint64_t	*long_src;

	if (dest == src)
		return (dest);
	while (n % 8 > 0)
	{
		n--;
		((uint8_t*)dest)[n] = ((uint8_t*)src)[n];
	}
	long_dest = dest;
	long_src = src;
	n /= 8;
	while (n-- > 0)
		long_dest[n] = long_src[n];
	return (dest);
}
