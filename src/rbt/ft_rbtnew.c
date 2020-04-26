/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 20:22:07 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 20:24:44 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rbt.h"

/*
** \brief        Create a new red-black tree
** \param data   Node's data
** \param color  Node's color
** \return       The created node with left, right and parent pointer to NULL
**               or NULL on error
*/

t_ftrbt	*ft_rbtnew(void *data, enum e_ftrbt_color color)
{
	t_ftrbt	*tree;

	if ((tree = (t_ftrbt*)malloc(sizeof(t_ftrbt))) == NULL)
		return (NULL);
	tree->left = NULL;
	tree->right = NULL;
	tree->data = data;
	tree->parent = NULL;
	tree->color = color;
	return (tree);
}
