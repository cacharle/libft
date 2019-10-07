/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:35:26 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:38:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;

	if ((joined = (char*)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1))) == NULL)
		return (NULL);
	joined = ft_strcpy(joined, s1);
	return (ft_strcat(joined, s2));
}
