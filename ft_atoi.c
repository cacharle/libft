/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:46:16 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 11:34:37 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN_INT (1 << 31)
#define MAX_INT (~(1 << 31))

static int	precheck(const char **nptr)
{
	int is_negative;

	while (**nptr == ' ' || **nptr == '\t' || **nptr == '\n'
			|| **nptr == '\v' || **nptr == '\f' || **nptr == '\r')
		(*nptr)++;
	is_negative = 0;
	if (**nptr == '-' || **nptr == '+')
	{
		if (**nptr == '-')
			is_negative = 1;
		(*nptr)++;
	}
	return (is_negative);
}

int			ft_atoi(const char *nptr)
{
	unsigned int	nb;
	int				i;
	int				is_negative;

	is_negative = precheck(&nptr);
	i = 0;
	nb = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (!is_negative && nb > (unsigned int)MAX_INT)
			return (-1);
		else if (nb > (unsigned int)MIN_INT)
			return (0);
		nb *= 10;
		nb += nptr[i] - '0';
		i++;
	}
	return ((int)(is_negative ? -nb : nb));
}
