/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 21:32:48 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/14 10:07:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2, int free_nb)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL || free_nb < 0 || free_nb > 2)
		return (NULL);
	if ((joined = ft_strjoin(s1, s2)) == NULL)
		return (NULL);
	if (free_nb == 1)
		free((void*)s1);
	if (free_nb == 2)
	{
		free((void*)s1);
		free((void*)s2);
	}
	return (joined);
}
