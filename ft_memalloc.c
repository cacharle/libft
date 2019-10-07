/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:07:14 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:07:47 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if ((ptr = malloc(size)) == NULL)
		return (NULL);
	while (size-- > 0)
		((unsigned char*)ptr)[size] = 0;
	return (ptr);
}
