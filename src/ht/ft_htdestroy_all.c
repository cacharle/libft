/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:29:58 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 08:30:53 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

static void	st_htdelcontent_all(t_ftht_content *content)
{
	if (content == NULL)
		return ;
	free(content->key);
	free(content->value);
}

void	ft_htdestroy_all(t_ftht *ht)
{
	ft_htdestroy(ht, *st_htdelcontent_all);
}
