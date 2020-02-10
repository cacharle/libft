/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lfind.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:49:19 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 05:58:19 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

void	*ft_lfind(const void *base, size_t *nelp, size_t width,
				t_ftsearch_const *consts)
{
	size_t	i;

	i = 0;
	while (i < *nelp)
	{
		if ((consts->compar)(consts->key, base + i * width) == 0)
			return ((void*)base + i * width);
		i++;
	}
	return (NULL);
}
