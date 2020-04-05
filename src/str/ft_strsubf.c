/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 13:48:13 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 13:51:47 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief        Wrapper around ft_substr which free the original string
** \param s      String to extract from (will be free)
** \param start  Starting index of the substring
** \param len    Substring length
** \return       The created substring or NULL on error
*/

char	*ft_strsubf(char const *s, size_t start, size_t len)
{
	char	*ret;

	ret = ft_strsub(s, start, len);
	free((void*)s);
	return (ret);
}
