/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoinf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:27:33 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 23:24:24 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief        Join null-terminated array of strings and free the array
** \param strs   Array of strings
** \param delim  String which will be put between each string
** \return       Joined string or NULL on error
*/

char	*ft_strsjoinf(char **strs, char *delim)
{
	char	*ret;

	ret = ft_strsjoin(strs, delim);
	ft_split_destroy(strs);
	return (ret);
}
