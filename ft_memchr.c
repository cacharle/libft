/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:55:31 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 09:56:35 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc_s;

	uc_s = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (uc_s[i] == (unsigned char)c)
			return (uc_s + i);
		i++;
	}
	return (NULL);
}
