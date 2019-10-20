/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:25:13 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/20 14:21:42 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	/* size_t	j; */
	size_t	needle_len;
	char	*mut_haystack;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char*)haystack);
	mut_haystack = (char*)haystack;
	i = -1;
	while (++i < len && haystack[i])
	{
		if (ft_strncmp(mut_haystack + i, needle, needle_len) == 0)
			return (mut_haystack + i);
	}
	return (NULL);
}
