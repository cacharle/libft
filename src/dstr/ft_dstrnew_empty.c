/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrnew_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 11:55:40 by charles           #+#    #+#             */
/*   Updated: 2020/05/17 12:00:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief           Create a new empty dynamic string with the given capacity
** \param capacity  Capacity of the string
** \return          New dynamic string or NULL on error
*/

t_ftdstr		*ft_dstrnew_empty(size_t capacity)
{
	t_ftdstr	*dstr;

	if (capacity == 0)
		capacity = 1;
	dstr = NULL;
	if ((dstr = malloc(sizeof(t_ftdstr))) == NULL
		|| (dstr->str = malloc(sizeof(char) * capacity)) == NULL)
	{
		free(dstr);
		return (NULL);
	}
	dstr->length = 0;
	dstr->capacity = capacity;
	dstr->str[0] = '\0';
	return (dstr);
}
