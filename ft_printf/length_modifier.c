/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_modifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:56:07 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/09 00:50:06 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

t_big_uint	length_modifier_unsigned_int(va_list ap, t_pformat *pformat)
{
	if (pformat->flags & FLAG_SHORT)
		return ((unsigned short)va_arg(ap, int));
	else if (pformat->flags & FLAG_SHORT_SHORT)
		return ((unsigned char)va_arg(ap, int));
	else if (pformat->flags & FLAG_LONG)
		return (va_arg(ap, long unsigned int));
	else if (pformat->flags & FLAG_LONG_LONG)
		return (va_arg(ap, long long unsigned int));
	return (va_arg(ap, unsigned int));
}

t_big_int	length_modifier_int(va_list ap, t_pformat *pformat)
{
	if (pformat->flags & FLAG_SHORT)
		return ((short)va_arg(ap, int));
	else if (pformat->flags & FLAG_SHORT_SHORT)
		return ((signed char)va_arg(ap, int));
	else if (pformat->flags & FLAG_LONG)
		return (va_arg(ap, long int));
	else if (pformat->flags & FLAG_LONG_LONG)
		return (va_arg(ap, long long int));
	return (va_arg(ap, int));
}
