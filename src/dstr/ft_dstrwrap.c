/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrwrap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 17:32:30 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 17:33:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

t_ftdstr	*ft_dstrwrap(char *str)
{
	t_ftdstr	*dstr;

	if ((dstr = (t_ftdstr*)malloc(sizeof(t_ftdstr))) == NULL)
		return (NULL);
	dstr->str = str;
	dstr->length = ft_strlen(str);
	dstr->capacity = dstr->length + 1;
	return (dstr);
}
