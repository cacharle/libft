/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:44:11 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 12:48:24 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*tmp;
	char	*origin;

	if (*stringp == NULL)
		return (NULL);
	origin = *stringp;
	tmp = ft_strpbrk(*stringp, delim);
	if (tmp == NULL)
	{
		*stringp = NULL;
		return (origin);
	}
	*tmp = '\0';
	*stringp = tmp + 1;
	return (origin);
}
