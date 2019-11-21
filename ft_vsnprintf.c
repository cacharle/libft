/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vsnprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 02:36:32 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/21 03:45:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vsnprintf(char *str, size_t size, const char *format, va_list ap)
{
	int		ret;
	int		full_out_len;
	char	*full_out;

	full_out_len = ft_vasprintf(&full_out, format, ap);
	ft_strncpy(str, full_out, size);
	ret = MIN((size_t)full_out_len, size);
	free(full_out);
	return (ret);
}
