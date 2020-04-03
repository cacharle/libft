/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:08:38 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 04:31:33 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"
#include "libft_def.h"

int	ft_strcasecmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && ft_tolower(*s1) == ft_tolower(*s2))
	{
		s1++;
		s2++;
	}
	return ((t_ftuchar)ft_tolower(*s1) - (t_ftuchar)ft_tolower(*s2));
}
