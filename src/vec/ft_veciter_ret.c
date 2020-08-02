/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veciter_ret.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:33:34 by charles           #+#    #+#             */
/*   Updated: 2020/05/12 18:35:48 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief      Iterate a function over elements of a vector,
**             pointer can be changed
** \param vec  Iterated vector
** \param f    Function applied to each elements,
**             returned value is the new pointer value
*/

void		ft_veciter_ret(t_ftvec *vec, void *(*f)(void *elem))
{
	size_t	i;

	i = 0;
	while (i < vec->size)
	{
		vec->data[i] = f(vec->data[i]);
		i++;
	}
}
