/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter_htdel_first_order.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 06:56:54 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 06:58:36 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ht.h"

static t_ftdel_func	g_htdelone_value_del_func = NULL;

void	ft_inter_htdel_first_order(t_ftht_entry *entry)
{
	if (g_htdelone_value_del_func != NULL)
		g_htdelone_value_del_func(entry->value);
	free(entry->key);
	free(entry);
}

void	ft_inter_htdel_first_order_setup(t_ftdel_func del)
{
	g_htdelone_value_del_func = del;
}

void	ft_inter_htdel_first_order_teardown(void)
{
	g_htdelone_value_del_func = NULL;
}
