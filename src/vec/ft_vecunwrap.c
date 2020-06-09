/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecunwrap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 13:49:50 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 13:50:33 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

void	**ft_vecunwrap(t_ftvec *vec)
{
	void	**tmp;

	tmp = vec->data;
	free(vec);
	return (tmp);
}
