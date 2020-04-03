/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:01:30 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

/*
** \brief      Destroy an hash table.
** \param del  Function to delete each entry
** \warning    The del function HAS to free the key
*/

void	ft_htdestroy(t_ftht *ht, t_ftdel_func del)
{
	if (ht == NULL)
		return ;
	ft_inter_htdel_first_order_setup(del);
	while (ht->size-- > 0)
		ft_lstdestroy(ht->buckets + ht->size,
					(void (*)(void*))ft_inter_htdel_first_order);
	ft_inter_htdel_first_order_teardown();
	free(ht->buckets);
	free(ht);
}
