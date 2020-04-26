/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btdestroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:30:53 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/26 19:47:45 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

/*
** \brief       Destroy a binary tree
** \param tree  Binary tree to destroy
** \param del   Delete function applied to each node data
*/

void	ft_btdestroy(t_ftbt *tree, void (*del)(void *data))
{
	if (tree == NULL)
		return ;
	ft_btdestroy(tree->left, del);
	ft_btdestroy(tree->right, del);
	if (del != NULL)
		del(tree->data);
	free(tree);
}
