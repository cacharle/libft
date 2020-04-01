/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:30:55 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/27 17:52:31 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_util.h"

void	*ft_split_destroy(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i] != NULL)
		free(strs[i]);
	free(strs);
	return (NULL);
}
