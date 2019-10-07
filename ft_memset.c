/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:23 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:01:38 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	while (n-- > 0)
		((unsigned char*)s)[n] = uchar_c;
	return (s);
}
