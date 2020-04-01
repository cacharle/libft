/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 18:02:24 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 18:02:32 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

/*
** \brief Iterate over entry of hash table
** \param ht  Iterated hash table
** \param f   Function applied to each entry
*/

void	ft_htiter(t_ftht *ht, void (*f)(t_ftht_entry*))
{
	size_t	i;

	i = 0;
	while (i < ht->size)
	{
		ft_lstiter(ht->buckets[i], (void (*)(void*))f);
		i++;
	}
}
