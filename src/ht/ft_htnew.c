/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:19:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 22:34:55 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

/*
** \brief       Create a new hash table.
** \param size  Size of the underlying array of linked list (buckets)
** \return      Created hash table or NULL is an allocation failed
*/

t_ftht	*ft_htnew(size_t size)
{
	t_ftht	*ht;

	if (size == 0)
		return (NULL);
	if ((ht = (t_ftht*)malloc(sizeof(t_ftht))) == NULL)
		return (NULL);
	ht->buckets = (t_ftlst**)ft_calloc(size, sizeof(t_ftlst*));
	if (ht->buckets == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
