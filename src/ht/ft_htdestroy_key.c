/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htdestroy_key.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:31:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/31 10:43:45 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_ht.h"

void	ft_inter_htdelcontent_key(t_ftht_content *content)
{
	if (content == NULL)
		return ;
	free(content->key);
}

void	ft_htdestroy_key(t_ftht *ht)
{
	ft_htdestroy(ht, *ft_inter_htdelcontent_key);
}
