/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 18:00:49 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 18:01:43 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** \brief     Join 3 strings in a new malloc'd one
** \param s1  String 1
** \param s2  String 2
** \param s3  String 3
** \return    The joined string
*/

char	*ft_strjoin3(char const *s1, char const *s2, char const *s3)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	if ((joined = (char*)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1))) == NULL)
		return (NULL);
	ft_strcpy(joined, s1);
	ft_strcat(joined, s2);
	ft_strcat(joined, s3);
	return (joined);
}
