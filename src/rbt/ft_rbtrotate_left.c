/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtrotate_left.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:03:35 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 20:27:44 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rbt.h"

/*
** \brief       Rotate a red-black tree to the left
** \param tree  Pointer to Pointer to a red-black tree
**
**   5                 10
**  / \               /  \
** 4   10     -->    5    11
**    /  \          / \
**   6    11       4   6
*/

void	ft_rbtrotate_left(t_ftrbt **tree)
{
	t_ftrbt	*new_root;
	t_ftrbt	*tmp;

	if (tree == NULL || *tree == NULL || (*tree)->right == NULL)
		return ;
	new_root = (*tree)->right;
	tmp = new_root->left;
	new_root->left = *tree;
	(*tree)->right = tmp;
	*tree = new_root;
}
