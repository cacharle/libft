/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hthash.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:56:01 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 10:34:27 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

/*
** \brief      Hash a string
** \param ht   So that the index is in the hash table bound
** \param key  String to hash
** \return     Hash
*/

// maybe use a less efficient but understandable function
t_ftht_digest	ft_hthash(t_ftht *ht, char *key)
{
	t_ftht_digest	digest;

	if (*key == '\0')
		return (0);
	digest = *key++ << 7;
	while (*key != '\0')
	{
		digest = ((1000003 * digest) ^ *key) & (1 << 16);
		key++;
	}
	return (digest % ht->size);
}
