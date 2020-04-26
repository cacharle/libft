/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btsorted_insert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:10:36 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 19:19:24 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

/*
** \brief       Insert a data in a binary search tree so that it stays sorted
** \param tree  Tree where data is inserted
** \param data  Data to insert
** \param cmp   Comparison function
** \return      The new root or NULL if a new node couldn't be allocated
*/

t_ftbt	*ft_btsorted_insert(t_ftbt *tree, void *data, int (*cmp)(void*, void*))
{
	if (tree == NULL)
		return (ft_btnew(data));
	if (cmp(data, tree->data) < 0)
	{
		if (ft_btsorted_insert(tree->left, data, cmp) == NULL)
			return (NULL);
	}
	else
	{
		if (ft_btsorted_insert(tree->right, data, cmp) == NULL)
			return (NULL);
	}
	return (tree);
}
