/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_internal_htkey_equal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 09:24:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:25:36 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ftbool	ft_inter_htkey_equal(char *ref_key, t_ftht_content *content)
{
	if (ref_key == NULL || content == NULL)
		return (FALSE);
	return (ft_strcmp(ref_key, content->key) == 0)
}
