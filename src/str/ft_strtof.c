/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtof.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 12:09:13 by charles           #+#    #+#             */
/*   Updated: 2020/05/09 12:23:03 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief         Extract a float from a string
** \param nptr    String to extract from
** \param endptr  If not NULL pointer to last character
**                of the extraction is placed in *endptr
** \return        Extracted float value
** \note          This function doesn't try mimic the original perfectly
**                (no hexadecimal, exponent, NaN, inf handling)
*/

float	ft_strtof(const char *nptr, char **endptr)
{
	float		n;
	bool		is_neg;
	const char	*tmp;

	while (ft_isspace(*nptr))
		nptr++;
	is_neg = *nptr == '-';
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	n = (float)ft_strtol(nptr, (char**)&nptr, 10);
	if (*nptr == '.')
		nptr++;
	tmp = nptr;
	n += (float)ft_strtol(nptr, (char**)&nptr, 10) / (10 * (nptr - tmp));
	if (endptr != NULL)
		*endptr = (char*)nptr;
	return (is_neg ? -n : n);
}
