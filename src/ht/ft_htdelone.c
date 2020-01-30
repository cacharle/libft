/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdelone.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:27:18 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:55:06 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	ft_htdelone(t_ftht *ht, char *key, void (*del)(t_ftht_content*))
{
	ft_lstremove_if(ht->entries + ft_hthash(ht, key),
			(t_ftbool (*)(void*, void*))ft_inter_htkey_equal, key,
			(void (*)(void*))del);
}
