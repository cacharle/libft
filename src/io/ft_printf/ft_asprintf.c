/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 13:09:46 by charles           #+#    #+#             */
/*   Updated: 2020/05/16 13:20:27 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_asprintf(char **ret, const char *format, ...)
{
	int		int_ret;
	va_list	ap;

	va_start(ap, format);
	int_ret = ft_vasprintf(ret, format, ap);
	va_end(ap);
	return (int_ret);
}
