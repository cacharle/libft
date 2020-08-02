/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:27:18 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:14:28 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief      Delete one hash table entry
** \param key  Key of entry to delete
** \param del  Function to destroy the entry value
** \note       Do nothing if their is to entry which correspond to key
*/

void	ft_htdelone(t_ftht *ht, char *key, void (*del)(void*))
{
	ft_inter_htdel_first_order_setup(del);
	ft_lstremove_if(ht->buckets + ft_hthash(ht, key),
					ft_inter_htkey_cmp, key,
					(void (*)(void*))ft_inter_htdel_first_order);
	ft_inter_htdel_first_order_teardown();
}
