/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:53:23 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 15:55:21 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

void	ft_vecsort(t_ftvec *vec, t_ftcompar_func cmp)
{
	ft_qsort(vec->data, vec->size, sizeof(void*), cmp);
}
