/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compar_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:44:24 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 22:31:15 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

/*
** \brief       String comparison function
** \param s1_p  Pointer to first string
** \param s2_p  Pointer to second string
** \return      `strcmp` of both strings
*/

int	ft_compar_str(const void *s1_p, const void *s2_p)
{
	return (ft_strcmp(*(const char**)s1_p, *(const char**)s2_p));
}
