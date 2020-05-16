/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:40:03 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/16 13:15:56 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int		out_len;
	char	*out;

	if ((out_len = ft_vasprintf(&out, format, ap)) == -1)
		return (-1);
	if (write(fd, out, out_len) == -1)
		return (-1);
	return (out_len);
}
