/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrgrow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 14:17:09 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 19:56:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

#define FT_DSTR_GROWTH_FACTOR 1.5

/*
** \brief           Grow the capacity of a dynamic string
** \param dstr      Dynamic string to grow
** \param at_least  Minimum capacity - 1 required
** \return          Passed dynamic string or NULL on error
*/

t_ftdstr	*ft_dstrgrow(t_ftdstr *dstr, size_t at_least)
{
	size_t	new_capacity;
	char	*new_str;

	if (at_least < dstr->capacity - 1)
		return (dstr);
	new_capacity = dstr->capacity <= 1 ? 2 : dstr->capacity;
	while (at_least > new_capacity - 1)
		new_capacity *= FT_DSTR_GROWTH_FACTOR;
	if ((new_str = (char*)malloc(sizeof(char) * new_capacity)) == NULL)
		return (NULL);
	ft_memcpy(new_str, dstr->str, dstr->capacity);
	dstr->capacity = new_capacity;
	free(dstr->str);
	dstr->str = new_str;
	return (dstr);
}
