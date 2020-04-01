/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:41:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/01 18:02:12 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief        Create/Update a entry in hash table.
** \note         If `key` already exist in `ht`
**               only updates the list node content.
**               Else create a new list node in addition the list content.
** \param ht     Hash table where the entry is modified
** \param key    Key of the new entry
** \param value  Value of the new entry
** \param del    Destroy function in case the entry is modified.
** \return       Pointer to the created entry, NULL if an allocation failed.
*/

t_ftht_entry	*ft_htset(t_ftht *ht, char *key, void *value,
							void (*del)(t_ftht_entry*))
{
	t_ftht_digest	digest;
	t_ftht_entry	*content;
	t_ftht_bucket	bucket;
	t_ftlst			*tmp;

	if (ht == NULL || key == NULL)
		return (NULL);
	if ((content = ft_htentry_new(key, value)) == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	tmp = ft_lstlfind(ht->buckets[digest], ft_inter_htkey_cmp, key);
	if (tmp != NULL)
	{
		if (del != NULL)
			del(tmp->data);
		tmp->data = content;
		return ((t_ftht_entry*)tmp->data);
	}
	if ((bucket = ft_lstnew(content)) == NULL)
	{
		del(content);
		return (NULL);
	}
	ft_lstpush_front(ht->buckets + digest, bucket);
	return (content);
}
