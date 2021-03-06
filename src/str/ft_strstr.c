/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:15:29 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 03:58:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_str.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char*)haystack);
	return (ft_memmem(haystack, ft_strlen(haystack), needle, needle_len));
}
