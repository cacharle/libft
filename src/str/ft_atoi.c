/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:46:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 22:34:33 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** \brief      Extract first int in a string
**             (takes as much digits has possible)
** \param str  String to convert
** \return     Extracted int
*/

int			ft_atoi(const char *str)
{
	return ((int)ft_strtol(str, (char**)NULL, 10));
}
