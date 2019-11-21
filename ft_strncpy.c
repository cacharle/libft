/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:26:59 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/21 02:01:34 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(src);
	ft_memcpy(dest, src, MIN(n, len));
	if (len < n)
		ft_bzero(dest + len , n - len);
	return (dest);
}
