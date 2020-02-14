/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 03:41:07 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/14 03:41:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libft_str.h"

char	*ft_strjoinf(char const *s1, char const *s2, t_ftstrjoinf_tag tag)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((joined = ft_strjoin(s1, s2)) == NULL)
		return (NULL);
	if (tag == FT_STRJOINF_FST)
		free((void*)s1);
	else if (tag == FT_STRJOINF_SND)
		free((void*)s2);
	else if (tag == FT_STRJOINF_ALL)
	{
		free((void*)s1);
		free((void*)s2);
	}
	return (joined);
}
