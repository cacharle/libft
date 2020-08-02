/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:53:23 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 19:30:31 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/*
** \brief     Wrapper around ft_qsort
** \param vec  Vector to sort
** \param cmp  Function to compare each vector element
*/

void	ft_vecsort(t_ftvec *vec, t_ftcompar_func cmp)
{
	ft_qsort(vec->data, vec->size, sizeof(void*), cmp);
}
