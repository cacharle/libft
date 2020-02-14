/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strict_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:06:29 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/14 02:46:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_strict(const char *s)
{
	char	*end;
	long	ret;

	if (*s != '-' && !ft_isdigit(*s))
	{
		errno = EINVAL;
		return (0);
	}
	errno = 0;
	ret = ft_strtol(s, &end, 10);
	if (errno == ERANGE || ret > INT_MAX || ret < INT_MIN)
	{
		errno = ERANGE;
		return (0);
	}
	if (*end != '\0')
	{
		errno = EINVAL;
		return (0);
	}
	return (ret);
}
