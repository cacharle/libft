/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 23:23:27 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 23:44:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vasprintf.h"

char	*convert_percent(va_list ap, t_pformat *pformat)
{
	char *str;

	(void)ap;
	str = ft_strdup("%");
	str = handle_width(pformat, str);
	return (str);
}
