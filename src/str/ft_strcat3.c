/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 12:53:05 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 12:55:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief       Wrapper around ft_strcat to concatenate 3 strings
** \param dest  Destination of the concatenation
** \param src1  First concatenation
** \param src2  Second concatenation
** \return      Pointer to destination
*/

char	*ft_strcat3(char *dest, const char *src1, const char *src2)
{
	return (ft_strcat(ft_strcat(dest, src1), src2));
}
