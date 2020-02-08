/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:33:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/07 21:34:35 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bt.h"

t_ftbtree	*ft_btnew(void *data)
{
	t_ftbtree	*tree;

	if ((tree = (t_ftbtree*)malloc(sizeof(t_ftbtree))) == NULL)
		return (NULL);
	tree->data = data;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}
