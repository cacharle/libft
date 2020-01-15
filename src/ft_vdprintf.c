/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:40:03 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/21 03:46:00 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vdprintf(int fd, const char *format, va_list ap)
{
	int		out_len;
	char	*out;

	if ((out_len = ft_vasprintf(&out, format, ap)) == -1)
		return (-1);
	write(fd, out, out_len);
	return (out_len);
}
