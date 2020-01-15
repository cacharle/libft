/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:15:28 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/13 08:56:49 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

int			ft_printf(const char *format, ...)
{
	t_printf_status	status;

	if (format == NULL)
		return (STATUS_ERROR);
	if (!parse(format, &status.flist))
		return (STATUS_ERROR);
	va_start(status.ap, format);
	status.format = format;
	status.out = NULL;
	status.out_size = 0;
	while (*status.format)
	{
		if (*status.format == '%'
			&& (status.format =
				add_conversion(&status, status.flist->content)) == NULL)
			return (destroy_status_error(&status));
		else if ((status.format = add_between(&status)) == NULL)
			return (destroy_status_error(&status));
	}
	va_end(status.ap);
	list_destroy(&status.flist);
	write(STDOUT_FILENO, status.out, status.out_size);
	free(status.out);
	return (status.out_size);
}

const char	*add_conversion(t_printf_status *status, t_pformat *pformat)
{
	char	*conversion_str;

	conversion_str = convert(pformat, status->ap);
	if (pformat->specifier == 'n')
	{
		if (pformat->written != NULL)
			*pformat->written = status->out_size;
		status->format += pformat->fmt_len;
		list_pop_front(&status->flist);
		return (status->format + 1);
	}
	if (conversion_str == NULL)
		return (NULL);
	if (pformat->specifier != 'c')
		pformat->size = ft_strlen(conversion_str);
	if ((status->out = ft_memjoin_free(status->out, status->out_size,
									conversion_str, pformat->size)) == NULL)
		return (NULL);
	status->out_size += pformat->size;
	free(conversion_str);
	status->format += pformat->fmt_len;
	list_pop_front(&status->flist);
	return (status->format + 1);
}

const char	*add_between(t_printf_status *status)
{
	int i;

	i = 0;
	while (status->format[i] && status->format[i] != '%')
		i++;
	if ((status->out = ft_memjoin_free(status->out, status->out_size,
									(void*)status->format, i)) == NULL)
		return (NULL);
	status->out_size += i;
	return (status->format + i);
}

int			destroy_status_error(t_printf_status *status)
{
	if (status == NULL)
		return (STATUS_ERROR);
	va_end(status->ap);
	list_destroy(&status->flist);
	free(status->out);
	return (STATUS_ERROR);
}
