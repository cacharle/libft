/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:30:53 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/07 21:35:19 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

void	ft_btdestroy(t_ftbtree *tree, void (*del)(void *data))
{
	if (tree == NULL)
		return ;
	ft_btdestroy(tree->left, del);
	ft_btdestroy(tree->right, del);
	(*del)(tree->data);
	free(tree);
}
