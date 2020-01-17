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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	long int		*long_dest;
	const long int	*long_src;

	if (dest == src)
		return (dest);
	while (n % 8 > 0)
	{
		n--;
		((t_ftbyte*)dest)[n] = ((t_ftbyte*)src)[n];
	}
	long_dest = dest;
	long_src = src;
	n /= 8;
	while (n-- > 0)
		long_dest[n] = long_src[n];
	return (dest);
}
