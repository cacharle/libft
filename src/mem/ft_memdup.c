/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 13:54:17 by charles           #+#    #+#             */
/*   Updated: 2020/08/02 13:55:05 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

void	*ft_memdup(const void *src, size_t n)
{
	void	*ret;

	if ((ret = malloc(n)) == NULL)
		return (NULL);
	return (ft_memcpy(ret, src, n));
}
