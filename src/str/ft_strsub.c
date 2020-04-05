/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:28:49 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/05 13:47:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief      Extract a substring from a string
** \param s    String to extract from
** \param start  Starting index of the substring
** \param len    Substring length
** \return       The created substring or NULL on error
*/

char	*ft_strsub(char const *s, size_t start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (NULL);
	if (start + len > s_len)
		len = s_len - start;
	if ((sub = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	sub[len] = '\0';
	return (ft_strncpy(sub, s + start, len));
}
