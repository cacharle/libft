/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecinsert_safe.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:41:03 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 13:41:04 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

t_ftvec	*ft_vecinsert_safe(t_ftvec *vec, size_t i, void *elem)
{
	if (elem == NULL)
		return (NULL);
	return (ft_vecinsert(vec, i, elem));
}
