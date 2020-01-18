/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:53 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/20 12:41:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	uc_dest = (unsigned char*)dest;
	uc_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		uc_dest[i] = uc_src[i];
		if (uc_dest[i] == (unsigned char)c)
			return (uc_dest + i + 1);
		i++;
	}
	return (NULL);
}