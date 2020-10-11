/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrerase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 00:39:12 by charles           #+#    #+#             */
/*   Updated: 2020/10/11 14:00:29 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief        Erase part of a dynamic string
** \param dstr   Dynamic string to erase from
** \param start  Erase starting index
** \param len    Number of character to erase
*/

void			ft_dstrerase(t_ftdstr *dstr, size_t start, size_t len)
{
	if (start > dstr->length)
		return ;
	if (start + len > dstr->length)
		len = dstr->length - start;
	ft_memmove(
		dstr->str + start,
		dstr->str + start + len,
		dstr->length - start - len);
	dstr->length -= len;
	dstr->str[dstr->length] = '\0';
}
