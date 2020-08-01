/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:23:14 by charles           #+#    #+#             */
/*   Updated: 2020/08/01 15:27:35 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

/*
** \brief           Modified version of realloc function
** \param ptr       Pointer to re allocate
** \param ptr_size  Current allocated size
** \param size      New allocated size
** \return          New allocation or NULL on error
*/

void	*ft_realloc(void *ptr, size_t ptr_size, size_t size)
{
	void	*ret;

	if ((ret = malloc(size)) == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
		ft_memcpy(ret, ptr, ptr_size);
	return (ret);
}
