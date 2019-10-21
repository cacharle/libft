/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:01:23 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/21 11:35:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte	cast_c;
	t_byte	*cast_s;

	if (s == NULL)
		return (NULL);
	cast_c = (t_byte)c;
	cast_s = (t_byte*)s;
	while (n-- > 0)
		*cast_s++ = cast_c;
	return (s);
}
