/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecpush_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 13:29:48 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 14:24:19 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief     Wrapper around ft_vecpush which reject null element
** \param vec  Pushed vector
** \param pushed  Element pushed which can't be NULL
** \return        NULL if pushed is NULL, whatever ft_vecpush returns otherwise
*/

t_ftvec		*ft_vecpush_safe(t_ftvec *vec, void *pushed)
{
	if (pushed == NULL)
		return (NULL);
	return (ft_vecpush(vec, pushed));
}
