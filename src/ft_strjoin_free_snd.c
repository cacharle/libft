/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_snd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:12:56 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/14 10:07:19 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_free_snd(char const *s1, char const *s2)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((joined = ft_strjoin(s1, s2)) == NULL)
		return (NULL);
	free((void*)s2);
	return (joined);
}
