/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:24:08 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/16 13:28:32 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_ptr(va_list ap, t_pformat *pformat)
{
	char *str;

	str = ITOA_HEX_LOW((long long unsigned int)va_arg(ap, void*));
	str = handle_precision(pformat, str);
	if (!(pformat->flags & FLAG_ZERO))
		str = ft_strjoinf("0x", str, FT_STRJOINF_SND);
	if (pformat->flags & FLAG_ZERO)
		pformat->width -= 2;
	str = handle_width(pformat, str);
	if (pformat->flags & FLAG_ZERO)
		str = ft_strjoinf("0x", str, FT_STRJOINF_SND);
	return (str);
}
