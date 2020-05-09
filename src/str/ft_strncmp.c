/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:27:34 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/09 12:29:41 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = ft_strlen(s1);
	return (ft_memcmp(s1, s2, n < len ? n : len + 1));
}
