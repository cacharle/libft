/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 13:54:52 by charles           #+#    #+#             */
/*   Updated: 2020/05/09 12:57:17 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_dstr.h"

/*
** \brief       Create a new dynamic string
** \param from  Static string to create the dynamic one from
**              (will be duplicated)
** \return      Created dynamic string or NULL on malloc error
*/

t_ftdstr	*ft_dstrnew(char *from)
{
	t_ftdstr	*dstr;

	dstr = NULL;
	if ((dstr = (t_ftdstr*)malloc(sizeof(t_ftdstr))) == NULL ||
		(dstr->str = ft_strdup(from)) == NULL)
	{
		free(dstr);
		return (NULL);
	}
	dstr->length = ft_strlen(from);
	dstr->capacity = dstr->length + 1;
	return (dstr);
}
