/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:09:47 by charles           #+#    #+#             */
/*   Updated: 2020/05/11 15:14:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

void	*ft_memjoin(void *m1, size_t m1_size, void *m2, size_t m2_size)
{
	void	*joined;

	if ((joined = malloc(m1_size + m2_size)) == NULL)
		return (NULL);
	ft_memcpy(joined, m1, m1_size);
	ft_memcpy(joined + m1_size, m2, m2_size);
	return (joined);
}
