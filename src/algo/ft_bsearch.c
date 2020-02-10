/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:29:05 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 05:43:18 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

void	*ft_bsearch(const void *base, size_t nel, size_t width,
							t_ftsearch_const *consts)
{
	void	*found;

	if ((consts->compar)(consts->key, base + (nel / 2) * width) == 0)
		return ((void*)base + (nel / 2) * width);
	if ((found = ft_bsearch(base, nel / 2, width, consts)) != NULL)
		return (found);
	if ((found = ft_bsearch(base + (nel / 2) * width, nel - nel / 2,
					width, consts)) != NULL)
		return (found);
	return (NULL);
}
