/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:12:40 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/17 15:22:16 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

static int	nbrlen_radix(long long int nbr, int radix)
{
	int						counter;
	long long unsigned int	u_nbr;

	if (nbr == 0)
		return (1);
	counter = 0;
	u_nbr = nbr;
	if (nbr < 0)
	{
		counter++;
		u_nbr = -nbr;
	}
	while (u_nbr > 0)
	{
		u_nbr /= radix;
		counter++;
	}
	return (counter);
}

char		*ft_itoa_base(long long int n, char *base)
{
	char					*str;
	int						len;
	int						radix;
	long long unsigned int	u_nbr;

	radix = ft_strlen(base);
	len = nbrlen_radix(n, radix);
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	str[len] = '\0';
	u_nbr = n < 0 ? -n : n;
	if (n < 0)
		str[0] = '-';
	while (--len >= (n < 0 ? 1 : 0))
	{
		str[len] = base[u_nbr % radix];
		u_nbr /= radix;
	}
	return (str);
}

static int	nbrlen_unsigned_radix(long long unsigned int nbr, int radix)
{
	int					counter;

	if (nbr == 0)
		return (1);
	counter = 0;
	while (nbr > 0)
	{
		nbr /= radix;
		counter++;
	}
	return (counter);
}

char		*ft_itoa_unsigned_base(long long unsigned int n, char *base)
{
	char				*str;
	int					len;
	int					radix;

	radix = ft_strlen(base);
	len = nbrlen_unsigned_radix(n, radix);
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	str[len] = '\0';
	while (--len >= 0)
	{
		str[len] = base[n % radix];
		n /= radix;
	}
	return (str);
}
