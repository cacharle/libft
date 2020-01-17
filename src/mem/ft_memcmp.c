/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:56:44 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:54:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	t_ftbyte	*cast_s1;
	t_ftbyte	*cast_s2;

	cast_s1 = (t_ftbyte*)s1;
	cast_s2 = (t_ftbyte*)s2;
	if (n == 0)
		return (0);
	i = -1;
	while (++i < n)
		if (cast_s1[i] != cast_s2[i])
			return (cast_s1[i] - cast_s2[i]);
	return (0);
}
