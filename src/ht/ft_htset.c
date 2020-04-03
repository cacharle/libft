/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:41:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:13:17 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

/*
** \brief        Create/Update a entry in hash table.
** \note         If `key` already exist in `ht`
**               only updates the list node entry.
**               Else create a new list node in addition the list entry.
** \param ht     Hash table where the entry is modified
** \param key    Key of the new entry
** \param value  Value of the new entry
** \param del    Destroy function in case the entry is modified.
** \return       Pointer to the created entry, NULL if an allocation failed.
*/

t_ftht_entry	*ft_htset(
	t_ftht *ht,
	char *key,
	void *value,
	void (*del)(void*)
)
{
	size_t			digest;
	t_ftht_entry	*entry;
	t_ftlst			*tmp;

	if (ht == NULL || key == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	tmp = ft_lstlfind(ht->buckets[digest], ft_inter_htkey_cmp, key);
	if (tmp != NULL)
	{
		if (del != NULL)
			del(((t_ftht_entry*)tmp->data)->value);
		((t_ftht_entry*)tmp->data)->value = value;
		return ((t_ftht_entry*)tmp->data);
	}
	if ((entry = ft_htentry_new(key, value)) == NULL)
		return (NULL);
	if ((tmp = ft_lstnew(entry)) == NULL)
	{
		free(entry->key);
		free(entry);
		return (NULL);
	}
	ft_lstpush_front(ht->buckets + digest, tmp);
	return (entry);
}
