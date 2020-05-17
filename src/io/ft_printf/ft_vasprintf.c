/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:15:28 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/17 15:51:50 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./internals/ft_vasprintf.h"

static const char	*add_conversion(
		t_printf_status *status, t_pformat *pformat)
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
	if ((status->out = ft_memjoinf1(status->out, status->out_size,
									conversion_str, pformat->size)) == NULL)
		return (NULL);
	status->out_size += pformat->size;
	free(conversion_str);
	status->format += pformat->fmt_len;
	list_pop_front(&status->flist);
	return (status->format + 1);
}

static const char	*add_between(t_printf_status *status)
{
	int i;

	i = 0;
	while (status->format[i] && status->format[i] != '%')
		i++;
	if ((status->out = ft_memjoinf1(status->out, status->out_size,
									(void*)status->format, i)) == NULL)
		return (NULL);
	status->out_size += i;
	return (status->format + i);
}

static int			destroy_status_error(t_printf_status *status)
{
	if (status == NULL)
		return (STATUS_ERROR);
	va_end(status->ap);
	list_destroy(&status->flist);
	return (STATUS_ERROR);
}

int					ft_vasprintf(char **ret, const char *format, va_list ap)
{
	t_printf_status	status;

	if (format == NULL || ret == NULL
		|| (status.out = malloc(1)) == NULL
		|| !ftpf_parse(format, &status.flist))
		return (STATUS_ERROR);
	ft_memcpy(status.ap, ap, sizeof(va_list));
	status.format = format;
	status.out_size = 0;
	while (*status.format)
	{
		if (*status.format == '%'
			&& (status.format =
				add_conversion(&status, status.flist->data)) == NULL)
			return (destroy_status_error(&status));
		else if ((status.format = add_between(&status)) == NULL)
			return (destroy_status_error(&status));
	}
	list_destroy(&status.flist);
	if ((status.out = ft_memjoinf1(status.out, status.out_size, "\0", 1)) == NULL)
		return (STATUS_ERROR);
	*ret = status.out;
	return (status.out_size);
}
