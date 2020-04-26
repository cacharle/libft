/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btsorted_search.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:31:42 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 19:35:53 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

/*
** \brief      Search a element in a sorted binary tree
** \param tree  Searched tree
** \param ref   First argument of comparison function
** \param cmp   Comparison function
** \return      Node data if found, NULL otherwise
*/

void	*ft_btsorted_search(t_ftbt *tree, void *ref, int (*cmp)(void*, void*))
{
	int	res;

	if (tree == NULL)
		return (NULL);
	if ((res = cmp(ref, tree->data)) == 0)
		return (tree->data);
	if (res < 0)
		return (ft_btsorted_search(tree->left, ref, cmp));
	else
		return (ft_btsorted_search(tree->right, ref, cmp));
}
