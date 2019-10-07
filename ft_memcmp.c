/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:56:44 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 09:59:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	uc_s1 = (unsigned char*)s1;
	uc_s2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && uc_s1[i] == uc_s2[i])
		i++;
	if (i == n)
		i--;
	return (uc_s1[i] - uc_s2[i]);
}
