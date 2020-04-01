/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:27:18 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:10:16 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief      Delete one hash table entry
** \param key  Key of entry to delete
** \param del  Function to destroy the entry
** \warning    The del function HAS to free the key
** \note       Do nothing if their is to entry which correspond to key
*/

void	ft_htdelone(t_ftht *ht, char *key, void (*del)(t_ftht_entry*))
{
	ft_lstremove_if(ht->buckets + ft_hthash(ht, key),
					ft_inter_htkey_cmp, key,
					(void (*)(void*))del);
}
