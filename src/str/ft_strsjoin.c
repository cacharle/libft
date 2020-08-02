/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:30:08 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 23:34:30 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief        Join null-terminated array of strings
** \param strs   Array of strings
** \param delim  String iterspersed between strings
** \return       Joined string or NULL on error
** \note         Empty strings are ignored
*/

char	*ft_strsjoin(char **strs, char *delim)
{
	int		i;
	size_t	join_len;
	size_t	delim_len;
	char	*join;

	delim_len = ft_strlen(delim);
	join_len = 0;
	i = -1;
	while (strs[++i] != NULL)
	{
		join_len += ft_strlen(strs[i]);
		if (strs[i + 1] != NULL)
			join_len += delim_len;
	}
	if ((join = (char*)malloc(sizeof(char) * (join_len + 1))) == NULL)
		return (NULL);
	join[0] = '\0';
	i = -1;
	while (strs[++i] != NULL)
	{
		ft_strcat(join, strs[i]);
		if (*strs[i] != '\0' && strs[i + 1] != NULL)
			ft_strcat(join, delim);
	}
	return (join);
}
