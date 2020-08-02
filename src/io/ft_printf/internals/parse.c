/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:11:33 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/13 08:13:02 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

int			parse(const char *format, t_flist **flist)
{
	t_flist		*tmp;
	t_pformat	*parsed;

	*flist = NULL;
	while (*format)
	{
		format++;
		if (format[-1] != '%')
			continue;
		if ((parsed = parse_reduced(format)) == NULL)
			return ((int)list_destroy(flist));
		if ((tmp = list_new(parsed)) == NULL)
			return ((int)list_destroy(flist));
		list_push_front(flist, tmp);
		format += (*flist)->data->fmt_len;
	}
	*flist = list_reverse(*flist);
	return (1);
}

t_pformat	*parse_reduced(const char *fmt)
{
	t_pformat	*pformat;
	const char	*start;

	if ((pformat = (t_pformat*)malloc(sizeof(t_pformat))) == NULL)
		return (NULL);
	pformat->precision = -1;
	pformat->width = -1;
	pformat->flags = 0;
	start = fmt;
	fmt = extract_flags(pformat, fmt);
	fmt = extract_width(pformat, fmt);
	fmt = extract_precision(pformat, fmt);
	fmt = extract_length_modifier(pformat, fmt);
	pformat->fmt_len = fmt - start + 1;
	if (*fmt == '\0' || ft_strchr(SPECIFIERS_STR, *fmt) == NULL)
	{
		pformat->fmt_len--;
		pformat->specifier = '_';
	}
	else
		pformat->specifier = *ft_strchr(SPECIFIERS_STR, *fmt);
	return (pformat);
}
