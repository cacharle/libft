/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compar_str_case.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 19:55:50 by charles           #+#    #+#             */
/*   Updated: 2020/05/17 19:56:09 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_algo.h"

int	ft_compar_str_case(const void *s1_p, const void *s2_p)
{
	return (ft_strcasecmp(*(const char**)s1_p, *(const char**)s2_p));
}
