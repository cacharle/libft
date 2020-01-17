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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long int		*long_dst;
	const long int	*long_src;
	void			*dst_copy;

	if (dst >= src)
		return (ft_memcpy(dst, src, len));
	dst_copy = dst;
	while (len % 8 > 0)
	{
		len--;
		*(t_ftbyte*)dst++ = *(t_ftbyte*)src++;
	}
	long_dst = dst;
	long_src = src;
	len /= 8;
	while (len-- > 0)
		*long_dst++ = *long_src++;
	return (dst_copy);
}
