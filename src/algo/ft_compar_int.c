/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compar_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 08:24:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 22:30:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** \brief    Comparison function for 2 ints
** \param a  Pointer to first int
** \param b  Pointer to first int
** \return   The difference between a and b
*/

int	ft_compar_int(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
