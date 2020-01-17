/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:55:31 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:53:57 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	t_ftbyte	*cast_s;

	cast_s = (t_ftbyte*)s;
	i = -1;
	while (++i < n)
		if (cast_s[i] == (unsigned char)c)
			return (cast_s + i);
	return (NULL);
}
