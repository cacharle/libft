/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsnprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:36:32 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/16 13:23:17 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int	ft_vsnprintf(char *str, size_t size, const char *format, va_list ap)
{
	int		ret;
	int		full_out_len;
	char	*full_out;

	full_out_len = ft_vasprintf(&full_out, format, ap);
	if (full_out_len == -1)
		return (-1);
	ft_strncpy(str, full_out, size);
	ret = (size_t)full_out_len < size ? full_out_len : (int)size;
	free(full_out);
	return (ret);
}
