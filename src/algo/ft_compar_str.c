/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compar_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 15:44:24 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 15:46:28 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

int	ft_compar_str(const void *s1_p, const void *s2_p)
{
	return (ft_strcmp(*(const char**)s1_p, *(const char**)s2_p));
}
