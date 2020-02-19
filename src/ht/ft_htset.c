/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:41:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 02:44:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

t_ftht_content	*ft_htset(t_ftht *ht, char *key, void *value,
							void (*del)(t_ftht_content*))
{
	t_ftht_digest	digest;
	t_ftht_content	*content;
	t_ftht_entry	entry;
	t_ftlst			*tmp;

	if (ht == NULL || key == NULL)
		return (NULL);
	if ((content = ft_htcontent_new(key, value)) == NULL)
		return (NULL);
	digest = ft_hthash(ht, key);
	tmp = ft_lstlfind(ht->entries[digest], ft_inter_htkey_cmp, key);
	if (tmp != NULL)
	{
		if (del != NULL)
			(*del)(tmp->content);
		tmp->content = content;
		return ((t_ftht_content*)tmp->content);
	}

	if ((entry = ft_lstnew(content)) == NULL)
	{
		free(content);
		return (NULL);
	}
	ft_lstadd_front(ht->entries + digest, entry);
	return (content);
}
