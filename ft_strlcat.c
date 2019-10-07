/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:31:37 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:32:03 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = dst_len;
	while (i < size - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst[size - 1] != '\0')
		return (src_len + size);
	dst[size - 1] = '\0';
	return (dst_len + src_len);
}
