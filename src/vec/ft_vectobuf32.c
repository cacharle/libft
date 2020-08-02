/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectobuf32.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 21:09:35 by charles           #+#    #+#             */
/*   Updated: 2020/05/10 21:14:31 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

void	*ft_vectobuf32(t_ftvec *vec)
{
	uint32_t	*buf;
	size_t		i;

	if ((buf = malloc(sizeof(uint32_t) * vec->size)) == NULL)
		return (NULL);
	i = 0;
	while (i < vec->size)
	{
		buf[i] = *(uint32_t*)&vec->data[i];
		i++;
	}
	return (buf);
}
