/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:17:34 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/11 15:28:15 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** \brief      Create a new null-terminated string
** \param len  String length
** \return     Allocated string or NULL is allocation failed
** \note       This implementation doesn't follow the subject
**             because zeroing every byte is too inefficient
*/

char	*ft_strnew(size_t len)
{
	char	*s;

	if ((s = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	s[len] = '\0';
	return (s);
}
