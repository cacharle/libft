/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:55:31 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 03:30:55 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_byte	*cast_s;

	cast_s = (t_byte*)s;
	i = -1;
	while (++i < n)
		if (cast_s[i] == (unsigned char)c)
			return (cast_s + i);
	return (NULL);
}
