/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:01:16 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 04:01:35 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_lst.h"

t_ftlst	*ft_lstnew(void const *content)
{
	t_ftlst	*elem;

	if ((elem = (t_ftlst*)malloc(sizeof(t_ftlst))) == NULL)
		return (NULL);
	elem->content = (void*)content;
	elem->next = NULL;
	return (elem);
}
