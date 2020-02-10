/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 04:44:11 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/10 04:51:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*tmp;

	if (stringp == NULL || *stringp == NULL || delim == NULL)
		return (NULL);
	tmp = ft_strpbrk(*stringp, delim);
	if (tmp == NULL)
		return (NULL);
	*tmp = '\0';
	*stringp = tmp;
	return (tmp);
}
