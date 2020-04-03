/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrgrow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 14:17:09 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:09:21 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

#define FT_DSTR_GROWTH_FACTOR 1.5

t_ftdstr	*ft_dstrgrow(t_ftdstr *dstr, size_t at_least)
{
	size_t	new_capacity;
	char	*new_str;

	new_capacity = dstr->capacity <= 1 ? 2 : dstr->capacity;
	while (new_capacity < at_least)
		new_capacity *= FT_DSTR_GROWTH_FACTOR;
	if ((new_str = (char*)malloc(sizeof(char) * new_capacity)) == NULL)
		return (NULL);
	ft_memcpy(new_str, dstr->str, dstr->capacity);
	dstr->capacity = new_capacity;
	dstr->str = new_str;
	return (dstr);
}
