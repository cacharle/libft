/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsjoinf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 14:27:33 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 14:29:49 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

char	*ft_strsjoinf(char **strs, char *delim)
{
	char	*ret;

	ret = ft_strsjoin(strs, delim);
	ft_split_destroy(strs);
	return (ret);
}
