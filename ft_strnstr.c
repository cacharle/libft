/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:13 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/12 13:51:56 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0 && len == 0)
		return ((char*)haystack);
	if (len == 0)
		return (NULL);
	if (needle_len == 0)
		return ((char*)haystack);
	i = -1;
	while (++i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j])
		{
			if (needle[j] != haystack[i + j])
				break ;
			j++;
		}
		if (j == needle_len)
			return ((char*)haystack + i);
	}
	return (NULL);
}
