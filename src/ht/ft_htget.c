/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 03:06:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	*ft_htget(t_ftht *ht, char *key)
{
	
	t_ftht_digest	digest;

	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	return (((t_ftht_content*)ft_lstlfind(ht->entries[digest],
				ft_inter_htkey_cmp, key)->content)->value);
}
