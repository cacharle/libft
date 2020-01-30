/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:41:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 08:50:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

t_ftht_content	*ft_htset(t_ftht *ht, char *key, void *value)
{
	t_ftht_digest	digest;
	t_ftht_content	*content;
	t_ftht_entry	entry;

	if (ht == NULL || key == NULL)
		return (NULL);
	if ((content = ft_htcontent_new(key, value)) == NULL)
		return (NULL);
	if ((entry = ft_lstnew(content)) == NULL)
	{
		free(content);
		return (NULL);
	}
	digest = ft_hthash(ht, key);
	ft_lstadd_front(ht->entries + digest, entry);
	return (content);
}
