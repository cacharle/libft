/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:19:56 by cacharle          #+#    #+#             */
/*   Updated: 2020/09/14 15:59:28 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** \brief      itoa but cpy number in a buffer instead of allocating memory
** \param dst  Buffer where to put the string representation of the number
** \param n    Number to convert
** \return     Always dst
*/

char		*ft_itoa_cpy(char *dst, int n)
{
	int				len;
	unsigned int	u_nbr;

	len = n < 0 || n == 0 ? 1 : 0;
	u_nbr = n < 0 ? -n : n;
	while (u_nbr > 0)
	{
		u_nbr /= 10;
		len++;
	}
	dst[len] = '\0';
	u_nbr = n < 0 ? -n : n;
	if (n < 0)
		dst[0] = '-';
	while (--len >= (n < 0 ? 1 : 0))
	{
		dst[len] = (u_nbr % 10) | 0x30;
		u_nbr /= 10;
	}
	return (dst);
}
