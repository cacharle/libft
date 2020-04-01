/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htentry_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:45:36 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 04:09:50 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

/*
** \brief      Create a new hash table key/value pair.
** \param key  Hash entry string key (always duplicated)
** \return     Content or NULL if an allocation failed.
*/

t_ftht_entry	*ft_htentry_new(char *key, void *value)
{
	t_ftht_entry	*content;

	if (key == NULL)
		return (NULL);
	if ((content = (t_ftht_entry*)malloc(sizeof(t_ftht_entry))) == NULL)
		return (NULL);
	if ((content->key = ft_strdup(key)) == NULL)
	{
		free(content);
		return (NULL);
	}
	content->value = value;
	return (content);
}
