/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 23:19:24 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/14 10:22:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_vasprintf.h"

char	*convert(t_pformat *pformat, va_list ap)
{
	char			*str;

	if (pformat == NULL)
		return (NULL);
	if (pformat->flags & FLAG_WIDTH_WILDCARD)
	{
		if (pformat->flags & FLAG_WIDTH_OVERWRITE)
			(void)va_arg(ap, int);
		else
			pformat->width = va_arg(ap, int);
		if (pformat->width < 0)
		{
			pformat->flags |= FLAG_MINUS;
			pformat->width *= -1;
		}
	}
	if (pformat->flags & FLAG_PRECISION_WILDCARD)
		pformat->precision = va_arg(ap, int);
	if ((str = convert_specifier(ap, pformat)) == NULL)
		return (NULL);
	return (str);
}

char	*convert_specifier(va_list ap, t_pformat *pformat)
{
	if (pformat->specifier == 'c')
		return (convert_char(ap, pformat));
	if (pformat->specifier == 's')
		return (convert_str(ap, pformat));
	if (pformat->specifier == 'p')
		return (convert_ptr(ap, pformat));
	if (pformat->specifier == 'd' || pformat->specifier == 'i')
		return (convert_int(ap, pformat));
	if (pformat->specifier == 'u')
		return (convert_uint(ap, pformat));
	if (pformat->specifier == 'x')
		return (convert_hex(ap, pformat));
	if (pformat->specifier == 'X')
		return (convert_hex(ap, pformat));
	if (pformat->specifier == '%')
		return (convert_percent(ap, pformat));
	if (pformat->specifier == 'n')
		return (convert_written(ap, pformat));
	else
		return (convert_none(ap, pformat));
	return (NULL);
}

char	*handle_width(t_pformat *pformat, char *str)
{
	char	*tmp;
	int		len;
	int		i;

	if ((len = ft_strlen(str)) >= pformat->width)
		return (str);
	if ((tmp = (char*)malloc(sizeof(char) * (pformat->width + 1))) == NULL)
		return (NULL);
	if (pformat->flags & FLAG_MINUS)
	{
		i = len;
		ft_strcpy(tmp, str);
		while (i < pformat->width)
			tmp[i++] = ' ';
		tmp[i] = 0;
	}
	else
	{
		i = 0;
		while (i <= pformat->width - len)
			tmp[i++] = pformat->flags & FLAG_ZERO ? '0' : ' ';
		ft_strcpy(tmp + i - 1, str);
	}
	free(str);
	return (tmp);
}

char	*handle_precision(t_pformat *pformat, char *str)
{
	int		len;
	char	*tmp;

	if (pformat == NULL || str == NULL)
		return (NULL);
	if (ft_strchr("diuxX", pformat->specifier) && pformat->precision >= 0)
		pformat->flags &= ~FLAG_ZERO;
	len = ft_strlen(str);
	if (pformat->precision == 0 && str[0] == '0')
	{
		free(str);
		return (ft_strdup(""));
	}
	if (!ft_strchr("diuxXp", pformat->specifier) || len >= pformat->precision)
		return (str);
	if ((tmp = (char*)malloc(sizeof(char) * (pformat->precision + 1))) == NULL)
		return (NULL);
	ft_strcpy(tmp + pformat->precision - len, str);
	while (pformat->precision-- > len)
		tmp[pformat->precision - len] = '0';
	free(str);
	return (tmp);
}
