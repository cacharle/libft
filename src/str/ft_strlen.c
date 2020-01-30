/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:32:48 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 11:13:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned long int	*ptr;
	const char			*cpy;

	ptr = (unsigned long int*)s;
	while (TRUE)
	{
		cpy = (const char*)ptr++;
		if (cpy[0] == '\0')
			return (cpy - s);
		if (cpy[1] == '\0')
			return (cpy + 1 - s);
		if (cpy[2] == '\0')
			return (cpy + 2 - s);
		if (cpy[3] == '\0')
			return (cpy + 3 - s);
		if (cpy[4] == '\0')
			return (cpy + 4 - s);
		if (cpy[5] == '\0')
			return (cpy + 5 - s);
		if (cpy[6] == '\0')
			return (cpy + 6 - s);
		if (cpy[7] == '\0')
			return (cpy + 7 - s);
	}
}
