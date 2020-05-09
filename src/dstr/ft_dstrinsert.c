/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 14:00:44 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 21:21:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief           Insert string in dynamic string
** \param dstr      Dynamic string where the string will be inserted
** \param inserted  Static string to insert
** \param i         Index where it should be inserted
** \return          Passed dynamic string or NULL on error
*/

t_ftdstr	*ft_dstrinsert(t_ftdstr *dstr, char *inserted, size_t i)
{
	size_t	inserted_len;

	if (i > dstr->length)
		return (NULL);
	inserted_len = ft_strlen(inserted);
	if (ft_dstrgrow(dstr, dstr->capacity + inserted_len) == NULL)
		return (NULL);
	ft_memmove(dstr->str + i + inserted_len,
				dstr->str + i,
				dstr->length - i + 1);
	ft_memcpy(dstr->str + i, inserted, inserted_len);
	dstr->length += inserted_len;
	return (dstr);
}
