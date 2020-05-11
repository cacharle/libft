/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoinf1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:18:57 by charles           #+#    #+#             */
/*   Updated: 2020/05/11 15:20:06 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

void	*ft_memjoinf1(void *m1, size_t m1_size, void *m2, size_t m2_size)
{
	void	*joined;

	joined = ft_memjoin(m1, m1_size, m2, m2_size);
	free(m1);
	return (joined);
}
