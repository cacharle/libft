/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:03:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:39:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_mem.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	uint64_t		*dst64;
	const uint64_t	*src64;
	void			*dst_copy;

	if (dst >= src)
		return (ft_memcpy(dst, src, len));
	dst_copy = dst;
	while (len % 8 > 0)
	{
		len--;
		*(uint8_t*)dst++ = *(uint8_t*)src++;
	}
	dst64 = dst;
	src64 = src;
	len /= 8;
	while (len-- > 0)
		*dst64++ = *src64++;
	return (dst_copy);
}
