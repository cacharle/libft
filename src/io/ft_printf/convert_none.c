/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_none.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:30:25 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:44:13 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_none(va_list ap, t_pformat *pformat)
{
	char	*str;

	(void)ap;
	if ((str = ft_strdup("")) == NULL)
		return (NULL);
	str = handle_precision(pformat, str);
	str = handle_width(pformat, str);
	return (str);
}
