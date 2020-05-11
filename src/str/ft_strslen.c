/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:58:46 by charles           #+#    #+#             */
/*   Updated: 2020/05/11 15:49:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

size_t	ft_strslen(char **strs)
{
	size_t	count;

	count = 0;
	while (strs[count] != NULL)
		count++;
	return (count);
}
