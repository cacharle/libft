/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:28:49 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 03:57:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (s == NULL)
		return (NULL);
	if ((sub = ft_strnew(len)) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (sub);
	return (ft_strncpy(sub, s + start, len));
}
