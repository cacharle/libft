/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:03:21 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 11:17:29 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 4096

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	tmp[BUF_SIZE];

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < BUF_SIZE && i < n)
		{
			tmp[j] = ((unsigned char*)src)[i];
			j++;
			i++;
		}
		k = -1;
		while (++k < j)
			((unsigned char*)dest)[k] = tmp[k];
		i++;
	}
	return (dest);
}
