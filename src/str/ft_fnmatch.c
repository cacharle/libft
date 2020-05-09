/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fnmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 23:24:16 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 00:28:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief          Search a glob pattern in a string
** \param pattern  Glob pattern '*' are interpreted as zero or more character
** \param string   String to search in
** \return         True if pattern was found, false otherwise
*/

bool	ft_fnmatch(const char *pattern, const char *string)
{
	if (*pattern == '\0')
		return (*string == '\0');
	if (*string == '\0')
		return (*pattern == '\0' || (*pattern == '*' && pattern[1] == '\0'));
	if (*pattern == '*')
	{
		if (ft_fnmatch(pattern + 1, string))
			return (true);
		return (ft_fnmatch(pattern, string + 1));
	}
	if (*pattern != *string)
		return (false);
	return (ft_fnmatch(pattern + 1, string + 1));
}
