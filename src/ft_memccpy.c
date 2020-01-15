/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:53 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 03:30:45 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	t_byte	*cast_dest;
	t_byte	*cast_src;

	cast_dest = (t_byte*)dest;
	cast_src = (t_byte*)src;
	i = -1;
	while (++i < n)
	{
		cast_dest[i] = cast_src[i];
		if (cast_dest[i] == (unsigned char)c)
			return (cast_dest + i + 1);
	}
	return (NULL);
}
