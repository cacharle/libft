/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veciter_addr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:52:38 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 13:53:30 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

void	ft_veciter_addr(t_ftvec *vec, void (*f)(void **addr))
{
	size_t	i;

	i = 0;
	while (i < vec->size)
	{
		f(vec->data + i);
		i++;
	}
}
