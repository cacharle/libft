/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_pattern4.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:06:41 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:58:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

void	ft_memset_pattern4(void *b, const void *pattern4, size_t len)
{
	int	i;

	i = len / 4;
	while (i-- > 0)
		((int*)b)[i] = *(int*)pattern4;
	i = len % 4;
	len -= len % 4;
	while (i-- > 0)
		((t_ftbyte*)b)[len + i] = ((t_ftbyte*)pattern4)[i];
}
