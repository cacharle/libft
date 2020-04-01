/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veciter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:09:51 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:15:13 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief      Iterate a function over elements of a vector
** \param vec  Iterated vector
** \param f    Function applied to each elements
*/

void		ft_veciter(t_ftvec *vec, void (*f)(void *elem))
{
	size_t	i;

	i = 0;
	while (i < vec->size)
	{
		f(vec->data[i]);
		i++;
	}
}
