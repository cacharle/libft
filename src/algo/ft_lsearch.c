/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsearch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 05:53:57 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 05:59:33 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

void	*ft_lsearch(const void *base, size_t *nelp, size_t width,
				t_ftsearch_const *consts)
{
	void	*found;

	if ((found = ft_lfind(base, nelp, width, consts)) != NULL)
		return (found);
	return (ft_memcpy((void*)base + (*nelp)++ * width, consts->key, width));
}
