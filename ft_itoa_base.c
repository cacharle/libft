/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 04:00:58 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/25 04:07:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	nbrlen_radix(long int nbr, int radix)
{
	int					counter;
	long unsigned int	u_nbr;

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

char		*ft_itoa_base(long int n, char *base)
{
	char				*str;
	int					len;
	int					radix;
	long unsigned int	u_nbr;

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
