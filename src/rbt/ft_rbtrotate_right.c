/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtrotate_right.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:10:57 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 20:27:53 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rbt.h"

/*
** \brief       Rotate a red-black tree to the right
** \param tree  Pointer to Pointer to a red-black tree
**
**     10            5
**    /  \          / \
**   5    11  -->  4   10
**  / \               /  \
** 4   6             6    11
*/

void	ft_rbtrotate_right(t_ftrbt **tree)
{
	t_ftrbt	*new_root;
	t_ftrbt	*tmp;

	if (tree == NULL || *tree == NULL || (*tree)->left == NULL)
		return ;
	new_root = (*tree)->left;
	tmp = new_root->right;
	new_root->right = *tree;
	(*tree)->left = tmp;
	*tree = new_root;
}
