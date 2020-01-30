/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:29 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 08:31:49 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	st_htdelcontent_value(t_ftht_content *content)
{
	if (content == NULL)
		return ;
	free(content->value);
}

void	ft_htdestroy_value(t_ftht *ht)
{
	ft_htdestroy(ht, *st_dtdelcontent_value);
}
