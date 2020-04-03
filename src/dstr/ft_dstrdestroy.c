/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrdestroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 13:58:46 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 13:59:25 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

void		ft_dstrdestroy(t_ftdstr *dstr)
{
	if (dstr == NULL)
		return ;
	free(dstr->str);
	free(dstr);
}
