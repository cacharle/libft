/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_snd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:12:56 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/05 22:17:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_free_snd(char const *s1, char const *s2)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((joined = (char*)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	joined = ft_strcpy(joined, s1);
	joined = ft_strcat(joined, s2);
	free((void*)s2);
	return (joined);
}
