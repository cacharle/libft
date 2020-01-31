/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:10:31 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_content*))
{
	if (ht == NULL)
		return ;
	while (ht->size-- > 0)
		ft_lstclear(ht->entries + ht->size, (void (*)(void*))del);
	free(ht->entries);
	free(ht);
}
