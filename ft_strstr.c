/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:15:29 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:21:49 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	char	*cursor;

	cursor = (char*)haystack;
	if (!ft_strlen(needle))
		return (cursor);
	while (*cursor)
	{
		i = 0;
		while (needle[i] && cursor[i])
		{
			if (needle[i] != cursor[i])
				break ;
			i++;
		}
		if (i == ft_strlen(needle))
			return (cursor);
		cursor++;
	}
	return (NULL);
}
