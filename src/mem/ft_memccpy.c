/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:53 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:54:03 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	t_ftbyte	*cast_dest;
	t_ftbyte	*cast_src;

	cast_dest = (t_ftbyte*)dest;
	cast_src = (t_ftbyte*)src;
	i = -1;
	while (++i < n)
	{
		cast_dest[i] = cast_src[i];
		if (cast_dest[i] == (unsigned char)c)
			return (cast_dest + i + 1);
	}
	return (NULL);
}
