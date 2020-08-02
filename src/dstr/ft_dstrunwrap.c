/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrunwrap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 13:59:35 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 19:58:41 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief       Destroy dynamic string but keep the underlying static string
** \param dstr  Dynamic string to unwrap
** \return      Underlying string of the dynamic one
*/

char		*ft_dstrunwrap(t_ftdstr *dstr)
{
	char	*tmp;

	tmp = dstr->str;
	free(dstr);
	return (tmp);
}
