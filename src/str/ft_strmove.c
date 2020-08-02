/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:46:30 by charles           #+#    #+#             */
/*   Updated: 2020/05/12 20:49:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief       Same as ft_strcpy but the strings can overlap
** \param dest  Where src will be copied
** \param src   Source string
** \return      Returns dest
*/

char	*ft_strmove(char *dest, const char *src)
{
	return (ft_memmove(dest, src, ft_strlen(src) + 1));
}
