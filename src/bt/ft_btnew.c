/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:33:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/26 19:46:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

/*
** \brief       Create a new binary tree
** \param data  Node's data
** \return      Allocated node with left and right set to NULL, NULL on error
*/

t_ftbt	*ft_btnew(void *data)
{
	t_ftbt	*tree;

	if ((tree = (t_ftbt*)malloc(sizeof(t_ftbt))) == NULL)
		return (NULL);
	tree->left = NULL;
	tree->right = NULL;
	tree->data = data;
	return (tree);
}
