/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_front_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <me@cacharle.xyz>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 14:38:18 by charles           #+#    #+#             */
/*   Updated: 2020/08/20 14:41:14 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

t_ftlst	*ft_lstpush_front_node(t_ftlst **lst, void *data)
{
	t_ftlst	*pushed;

	if (data == NULL || (pushed = ft_lstnew(data)) == NULL)
		return (NULL);
	ft_lstpush_front(lst, pushed);
	return (*lst);
}
