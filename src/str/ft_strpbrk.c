/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:39:29 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 04:54:13 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

char	*ft_strpbrk(const char *s, const char *charset)
{
	if (s == NULL || charset == NULL)
		return (NULL);
	while (*s && ft_strchr(charset, *s) == NULL)
		s++;
	if (*s == '\0')
		return (NULL);
	return ((char*)s);
}
