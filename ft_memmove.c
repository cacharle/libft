/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:03:21 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/21 11:07:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	t_byte	*dst_cast;
	t_byte	*src_cast;

	if (dst == src)
		return (dst);
	dst_cast = (t_byte*)dst;
	src_cast = (t_byte*)src;
	i = -1;
	if (dst_cast < src_cast)
		while (++i < len)
			dst_cast[i] = src_cast[i];
	else
		while (len-- > 0)
			dst_cast[len] = src_cast[len];
	return (dst);
}
