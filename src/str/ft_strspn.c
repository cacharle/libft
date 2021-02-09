/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:29:13 by cacharle          #+#    #+#             */
/*   Updated: 2020/08/27 09:56:04 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (ft_strchr(charset, s[i]) != NULL)
		i++;
	return (i);
}
