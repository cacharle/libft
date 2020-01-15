/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:26:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/15 11:39:34 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define STRTOL_STD_BASE "0123456789abcdefghijklmnopqrstuvwxyz"

static int	strtol_handle_base(int base, const char **str)
{
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

static long	errno_return(int err)
{
	errno = err;
	return (0);
}

/*
** If there is no digits doesn't put str in endptr like the original,
** instead it puts the address of the char after spaces and sign.
** Too much lines and annoyance, I can't be bothered.
*/

long		ft_strtol(const char *str, char **endptr, int base)
{
	t_bool		is_negative;
	long long	nb;
	char		base_str[37];

	if (base > 36)
		return (errno_return(EINVAL));
	while (ft_isspace(*str))
		str++;
	is_negative = *str == '-' ? TRUE : FALSE;
	if (*str == '-' || *str == '+')
		str++;
	base = strtol_handle_base(base, &str);
	ft_strncpy(base_str, STRTOL_STD_BASE, base);
	nb = 0;
	while (ft_strchr(base_str, *str) != NULL)
	{
		nb *= base;
		nb += ft_strchr(base_str, ft_tolower(*str)) - base_str;
		if (((long)nb ^ (long)(nb / base)) < 0)
			return (errno_return(ERANGE));
	}
	if (endptr != NULL)
		*endptr = (char*)str;
	return (is_negative ? -nb : nb);
}
