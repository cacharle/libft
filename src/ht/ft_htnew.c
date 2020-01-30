/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:19:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 08:19:18 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

t_ftht	*ft_htnew(t_ftsize size)
{
	t_ftht	*ht;

	if ((ht = (t_ftht*)malloc(sizeof(t_ftht))) == NULL)
		return (NULL);
	if ((ht->entries = (t_ftht_entry*)ft_calloc(size, sizeof(t_ftht_entry))) == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	return (ht);
}
