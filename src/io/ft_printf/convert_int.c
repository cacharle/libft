/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:29:53 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/06 00:00:09 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_int(va_list ap, t_pformat *pformat)
{
	int				is_neg;
	long long int	n;
	char			*str;

	n = length_modifier_int(ap, pformat);
	is_neg = n < 0;
	str = ITOA_DEC(n);
	if (is_neg)
		ft_strcpy(str, str + 1);
	str = handle_precision(pformat, str);
	if (pformat->flags & FLAG_ZERO)
	{
		if (is_neg || pformat->flags & (FLAG_SIGNED | FLAG_SPACE))
			pformat->width--;
		str = handle_width(pformat, str);
	}
	if (is_neg)
		str = ft_strjoin_free_snd("-", str);
	else if (pformat->flags & (FLAG_SIGNED | FLAG_SPACE))
		str = ft_strjoin_free_snd(pformat->flags & FLAG_SPACE ? " " : "+", str);
	if (!(pformat->flags & FLAG_ZERO))
		str = handle_width(pformat, str);
	return (str);
}
