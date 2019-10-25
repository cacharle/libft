/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 03:28:52 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/25 03:36:24 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char		*ft_strndup(const char *s1, size_t n)
{
	char	*clone;
	size_t	i;

	if ((clone = (char*)malloc(sizeof(char) * (n + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < n && s1[i])
	{
		clone[i] = s1[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}
