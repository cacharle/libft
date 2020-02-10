/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:26:45 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 02:21:16 by cacharle         ###   ########.fr       */
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

static long	st_errno_return(int err)
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
	t_ftbool	is_negative;
	long long	nb;
	char		base_str[37];

	while (ft_isspace(*str))
		str++;
	is_negative = *str == '-' ? TRUE : FALSE;
	if (*str == '-' || *str == '+')
		str++;
	if ((base = st_strtol_handle_base(base, &str)) == -1)
		return (st_errno_return(EINVAL));
	ft_strncpy(base_str, STRTOL_STD_BASE, base);
	base_str[base] = '\0';
	nb = 0;
	while (*str != '\0' && ft_strchr(base_str, *str) != NULL)
	{
		nb *= base;
		nb += ft_strchr(base_str, ft_tolower(*str++)) - base_str;
		if (((long)nb ^ (long)(nb / base)) < 0)
			errno = ERANGE;
	}
	if (endptr != NULL)
		*endptr = (char*)str;
	return (is_negative ? -nb : nb);
}
