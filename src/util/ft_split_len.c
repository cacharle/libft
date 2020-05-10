/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:58:46 by charles           #+#    #+#             */
/*   Updated: 2020/05/10 21:02:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_util.h"

size_t	ft_split_len(char **split)
{
	size_t	count;

	count = 0;
	while (split[count] != NULL)
		count++;
	return (count);
}
