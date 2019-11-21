/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:23 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 23:22:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define BUF_TYPE long int

void	*ft_memset(void *s, int c, size_t n)
{
	BUF_TYPE	buf;

	c = (unsigned char)c;
	while (n % 8 > 0)
		*((t_byte*)s + --n) = (t_byte)c;
	n /= 8;
	buf = (BUF_TYPE)c | (BUF_TYPE)c << 8 | (BUF_TYPE)c << 16
			| (BUF_TYPE)c << 24 | (BUF_TYPE)c << 32 | (BUF_TYPE)c << 40
			| (BUF_TYPE)c << 48 | (BUF_TYPE)c << 56;
	while (n > 0)
		*((BUF_TYPE*)s + --n) = buf;
	return (s);
}
