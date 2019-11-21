/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:30:33 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/21 03:43:08 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_asprintf(char **ret, const char *format, ...)
{
	int		vret;
	va_list	ap;

	va_start(ap, format);
	vret = ft_vasprintf(ret, format, ap);
	va_end(ap);
	return (vret);
}
