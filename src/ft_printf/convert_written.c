/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_written.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:38:28 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:59:24 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_written(va_list ap, t_pformat *pformat)
{
	if (pformat->flags & FLAG_SHORT)
		pformat->written = (long long int*)va_arg(ap, signed char*);
	if (pformat->flags & FLAG_SHORT_SHORT)
		pformat->written = (long long int*)va_arg(ap, short*);
	if (pformat->flags & FLAG_LONG)
		pformat->written = (long long int*)va_arg(ap, long int*);
	if (pformat->flags & FLAG_LONG_LONG)
		pformat->written = va_arg(ap, long long int*);
	else
		pformat->written = (long long int*)va_arg(ap, int*);
	return (NULL);
}
