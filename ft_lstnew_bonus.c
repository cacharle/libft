/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:01:16 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/09 09:07:37 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*elem;

	if ((elem = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	elem->content = (void*)content;
	elem->next = NULL;
	return (elem);
}
