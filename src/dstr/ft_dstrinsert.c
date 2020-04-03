/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 14:00:44 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:09:52 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

t_ftdstr	*ft_dstrinsert(t_ftdstr *dstr, char *inserted, size_t i)
{
	size_t	inserted_len;

	if (i > dstr->capacity)
		return (NULL);
	inserted_len = ft_strlen(inserted);
	if (dstr->capacity - dstr->length - 1 < inserted_len)
		if (ft_dstrgrow(dstr, dstr->capacity + inserted_len + 1) == NULL)
			return (NULL);
	ft_memmove(dstr->str + i + inserted_len,
				dstr->str + i,
				dstr->length - i + 1);
	ft_memcpy(dstr->str + i, inserted, inserted_len);
	dstr->length += inserted_len;
	return (dstr);
}
