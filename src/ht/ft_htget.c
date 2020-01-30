/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:25:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

t_ftht_content	*ft_htget(t_ftht *ht, char *key)
{
	t_ftht_digest	digest;

	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	return (ft_lstbsearch(ht->entries[digest],
				(t_ftbool (*)(void*, void*))ft_inter_htkey_equal,
				key)->content);
}
