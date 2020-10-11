/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:26:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/10/11 14:32:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRTOL_STD_BASE "0123456789abcdefghijklmnopqrstuvwxyz"

static int	st_strtol_handle_base(int base, const char **str)
{
	if (base > 36)
		return (-1);
	if (base != 16 && base != 0)
		return (base);
	if (base == 16 && **str == '0' && (*str)[1] == 'x')
	{
		*str += 2;
		return (base);
	}
	if (**str == '0')
	{
		(*str)++;
		if (**str == 'x')
		{
			(*str)++;
			return (16);
		}
		else
			return (8);
	}
	return (10);
}

static void	st_setup_base(char base_str[37], int base)
{
	ft_strncpy(base_str, STRTOL_STD_BASE, base);
	base_str[base] = '\0';
}

static long	st_return(int err, char **end, long ret)
{
	if (end != NULL)
		*end = NULL;
	errno = err;
	return (ret);
}

/*
** If there is no digits doesn't put str in end like the original,
** instead it puts the address of the char after spaces and sign.
** Too much lines and annoyance, I can't be bothered.
*/

long		ft_strtol(const char *str, char **end, int base)
{
	t_ftbool			is_negative;
	unsigned long long	nb;
	char				base_str[37];

	while (ft_isspace(*str))
		str++;
	is_negative = *str == '-' ? TRUE : FALSE;
	if (*str == '-' || *str == '+')
		str++;
	if ((base = st_strtol_handle_base(base, &str)) == -1)
		return (st_return(EINVAL, end, 0));
	st_setup_base(base_str, base);
	nb = 0;
	while (*str != '\0' && ft_strchr(base_str, *str) != NULL)
	{
		nb *= base;
		if (is_negative ? (nb > -(unsigned long)LONG_MIN) : (nb > LONG_MAX))
			return (st_return(ERANGE, end, is_negative ? LONG_MIN : LONG_MAX));
		nb += ft_strchr(base_str, ft_tolower(*str++)) - base_str;
		if (is_negative ? (nb > -(unsigned long)LONG_MIN) : (nb > LONG_MAX))
			return (st_return(ERANGE, end, is_negative ? LONG_MIN : LONG_MAX));
	}
	if (end != NULL)
		*end = (char*)str;
	return (is_negative ? -nb : nb);
}
