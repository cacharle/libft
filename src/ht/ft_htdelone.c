/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:27:18 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 02:35:06 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	ft_htdelone(t_ftht *ht, char *key, void (*del)(t_ftht_content*))
{
	ft_lstremove_if(ht->entries + ft_hthash(ht, key),
					ft_inter_htkey_cmp, key,
					(void (*)(void*))del);
}
