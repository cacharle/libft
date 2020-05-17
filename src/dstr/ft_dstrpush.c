/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 16:20:47 by charles           #+#    #+#             */
/*   Updated: 2020/05/16 16:24:15 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief         Push a string to the end of a dynamic string
** \param dstr    Dynamic string where string will be pushed
** \param pushed  Pushed string
** \return        `dstr` or NULL on error
*/

t_ftdstr	*ft_dstrpush(t_ftdstr *dstr, char *pushed)
{
	return (ft_dstrinsert(dstr, pushed, dstr->length));
}
