/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:19:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/31 10:41:57 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

#define FT_HT_MAX_SIZE (1 << 14)

t_ftht	*ft_htnew(t_ftsize size)
{
	t_ftht	*ht;

	if (size == 0 || size > FT_HT_MAX_SIZE)
		return (NULL);
	if ((ht = (t_ftht*)malloc(sizeof(t_ftht))) == NULL)
		return (NULL);
	ht->entries = (t_ftht_entry*)ft_calloc(size, sizeof(t_ftht_entry));
	if (ht->entries == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
