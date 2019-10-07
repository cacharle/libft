/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:14:47 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:40:04 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*cursor;

	cursor = (char*)s;
	while (*cursor)
	{
		if (*cursor == (char)c)
			return (cursor);
		cursor++;
	}
	if (c == 0)
		return (cursor);
	return (NULL);
}
