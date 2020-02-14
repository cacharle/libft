/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:19:56 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/14 03:39:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	u_nbr;

	len = n < 0 || n == 0 ? 1 : 0;
	u_nbr = n < 0 ? -n : n;
	while (u_nbr > 0)
	{
		u_nbr /= 10;
		len++;
	}
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	str[len] = '\0';
	u_nbr = n < 0 ? -n : n;
	if (n < 0)
		str[0] = '-';
	while (--len >= (n < 0 ? 1 : 0))
	{
		str[len] = (u_nbr % 10) | 0x30;
		u_nbr /= 10;
	}
	return (str);
}
