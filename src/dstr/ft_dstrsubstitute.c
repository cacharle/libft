/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrsubstitute.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 00:22:55 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 00:38:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief              Substitute part of a dynamic string for an other string
** \param dstr         Dynamic string to substitute in
** \param replacement  Replacement text
** \param start        Substitution start index
** \param len          Substitution length
*/

t_ftdstr	*ft_dstrsubstitute(
	t_ftdstr *dstr,
	char *replacement,
	size_t start,
	size_t len
)
{
	ft_dstrerase(dstr, start, len);
	return (ft_dstrinsert(dstr, replacement, start));
}
