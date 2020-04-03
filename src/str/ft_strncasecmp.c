/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:18:36 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 04:31:38 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_def.h"

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i + 1 < n && s1[i] && ft_tolower(s1[i]) == ft_tolower(s2[i]))
		i++;
	return ((t_ftuchar)ft_tolower(s1[i]) - (t_ftuchar)ft_tolower(s2[i]));
}
