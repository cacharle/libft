/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 01:44:41 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	*ft_htget(t_ftht *ht, char *key)
{
	
	t_ftht_digest	digest;
	t_ftlst			*found;

	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	found = ft_lstlfind(ht->entries[digest], ft_inter_htkey_cmp, key);
	if (found == NULL)
		return (NULL);
	return (((t_ftht_content*)found->content)->value);
}
