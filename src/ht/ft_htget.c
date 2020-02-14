/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/14 02:18:00 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	*ft_htget(t_ftht *ht, char *key)
{
	
	t_ftht_digest	digest;

	return (NULL); // lstbsearch breaking
	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	return (((t_ftht_content*)ft_lstbsearch(ht->entries[digest],
				(t_ftbool (*)(void*, void*))ft_inter_htkey_equal,
				key)->content)->value);
}
