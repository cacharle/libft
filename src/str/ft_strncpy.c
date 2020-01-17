/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:26:59 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:40:21 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(src);
	ft_memcpy(dest, src, n < len ? n : len);
	if (len < n)
		ft_bzero(dest + len, n - len);
	return (dest);
}
