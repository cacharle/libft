/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrunwrap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 13:59:35 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 14:00:36 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

char		*ft_dstrunwrap(t_ftdstr *dstr)
{
	char	*tmp;

	tmp = dstr->str;
	free(dstr);
	return (tmp);
}
