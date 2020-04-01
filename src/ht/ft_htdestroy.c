/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:10:31 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief      Destroy an hash table.
** \param del  Function to delete each entry
** \warning    The del function HAS to free the key
*/

void	ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_entry*))
{
	if (ht == NULL)
		return ;
	while (ht->size-- > 0)
		ft_lstdestroy(ht->buckets + ht->size, (void (*)(void*))del);
	free(ht->buckets);
	free(ht);
}
