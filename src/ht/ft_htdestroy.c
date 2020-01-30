/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:19:06 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 08:33:09 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_content*))
{
	if (ht == NULL)
		return ;
	while (ht->size-- > 0)
		ft_lstclear(ht->entries + ht->size, del);
	free(ht->entries);
	free(ht);
}
