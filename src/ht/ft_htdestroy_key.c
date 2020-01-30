/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy_key.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 09:46:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_inter_htdelcontent_key(t_ftht_content *content)
{
	if (content == NULL)
		return ;
	free(content->key);
}

void	ft_htdestroy_key(t_ftht *ht)
{
	ft_htdestroy(ht, *st_dtdelcontent_key);
}
