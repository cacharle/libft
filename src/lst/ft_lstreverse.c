/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:49:14 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/15 22:53:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_lst.h"

/*
** \brief  Reverse a list
*/

void	ft_lstreverse(t_ftlst **lst)
{
	*lst = ft_lstreverse_ret(*lst);
}
