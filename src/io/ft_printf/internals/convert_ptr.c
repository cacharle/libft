/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:24:08 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:43:45 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_ptr(va_list ap, t_pformat *pformat)
{
	char *str;

	str = ITOA_HEX_LOW((long long unsigned int)va_arg(ap, void*));
	str = handle_precision(pformat, str);
	if (!(pformat->flags & FLAG_ZERO))
		str = ft_strjoin_free_snd("0x", str);
	if (pformat->flags & FLAG_ZERO)
		pformat->width -= 2;
	str = handle_width(pformat, str);
	if (pformat->flags & FLAG_ZERO)
		str = ft_strjoin_free_snd("0x", str);
	return (str);
}
