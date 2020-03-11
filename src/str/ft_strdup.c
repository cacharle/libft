/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:18:07 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/14 03:39:56 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_str.h"

char	*ft_strdup(const char *s)
{
	char	*clone;
	size_t	size;

	size = ft_strlen(s) + 1;
	if ((clone = (char*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	return (ft_memcpy(clone, s, size));
}
