/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htget.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:33:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:12:58 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief      Retrieve a value with a key
** \param ht   Hash table where key is searched
** \param key  Searched key
** \return     Value void pointer at key or NULL if not found
*/

void	*ft_htget(t_ftht *ht, char *key)
{
	size_t	digest;
	t_ftlst	*found;

	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	found = ft_lstlfind(ht->buckets[digest], ft_inter_htkey_cmp, key);
	if (found == NULL)
		return (NULL);
	return (((t_ftht_entry*)found->data)->value);
}
