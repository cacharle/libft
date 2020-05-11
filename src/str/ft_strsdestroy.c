/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsdestroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:30:55 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/11 15:53:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/*
** \brief       Destroy a NULL-terminated array of malloc'd string
** \param strs  Strings to destroy
** \return      NULL (so that it can be used in return statement)
*/

void	*ft_strsdestroy(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i] != NULL)
		free(strs[i]);
	free(strs);
	return (NULL);
}
