/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:34:17 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/17 22:01:28 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_vsprintf(char *str, const char *format, va_list ap)
{
	return (ft_vsnprintf(str, (size_t)UINT_MAX, format, ap));
}
