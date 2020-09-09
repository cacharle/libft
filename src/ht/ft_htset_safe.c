/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htset_safe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:46:10 by charles           #+#    #+#             */
/*   Updated: 2020/09/09 15:46:24 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

t_ftht_entry	*ft_htset_safe(
	t_ftht *ht,
	char *key,
	void *value,
	void (*del)(void*)
)
{
	if (value == NULL)
		return (NULL);
	return (ft_htset(ht, key, value, del));
}
