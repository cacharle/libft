/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:23:06 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:58:59 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_hex(va_list ap, t_pformat *pformat)
{
	char					*str;
	long long unsigned int	n;

	n = length_modifier_unsigned_int(ap, pformat);
	str = pformat->specifier == 'x' ? ITOA_HEX_LOW(n) : ITOA_HEX_UP(n);
	str = handle_precision(pformat, str);
	if (pformat->flags & FLAG_ZERO)
	{
		if (pformat->flags & FLAG_ALTERNATE && n != 0)
			pformat->width -= 2;
		str = handle_width(pformat, str);
	}
	if (pformat->flags & FLAG_ALTERNATE && n != 0)
		str = ft_strjoin_free_snd(pformat->specifier == 'X' ? "0X" : "0x", str);
	if (!(pformat->flags & FLAG_ZERO))
		str = handle_width(pformat, str);
	return (str);
}
