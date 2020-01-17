/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:39:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long int	buf;
	long int	*long_s;

	c = (unsigned char)c;
	while (n % 8 > 0)
		*((t_ftbyte*)s + --n) = c;
	buf = (long int)c | (long int)c << 8 | (long int)c << 16
			| (long int)c << 24 | (long int)c << 32 | (long int)c << 40
			| (long int)c << 48 | (long int)c << 56;
	n /= 8;
	long_s = s;
	while (n > 0)
		long_s[--n] = buf;
	return (s);
}
