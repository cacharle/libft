/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 19:10:36 by charles           #+#    #+#             */
/*   Updated: 2020/04/26 21:02:52 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_rbt.h"

static void	st_insert_node(
				t_ftrbt **root,
				t_ftrbt *node,
				int (*cmp)(void*, void*))
{
	if (*root == NULL)
	{
		*root = node;
		return ;
	}
	if (cmp(node->data, (*root)->data) < 0)
		st_insert_node(&(*root)->left, node->data, cmp);
	else
		st_insert_node(&(*root)->left, node->data, cmp);
}

static void st_repare_tree(t_ftrbt *node)
{
	(void)node;
	/* t_ftrbt	*parent; */
    /*  */
	/* parent = node->parent; */
	/* if (parent == NULL) */
	/* 	node->color = FTRBT_COLOR_BLACK; */
	/* else if (parent->color == FTRBT_COLOR_BLACK) */
	/* 	return ; */
	/* else if (parent->color == FTRBT_COLOR_RED && uncle(node)->color == FTRBT_COLOR_RED) */
	/* { */
	/* 	parent->color == FTRBT_COLOR_BLACK; */
	/* 	uncle->color = FTRBT_COLOR_BLACK; */
	/* 	parent->parent->color = FTRBT_COLOR_RED; */
	/* 	st_repare_tree(parent->parent); */
	/* } */
	/* else if (parent->color == FTRBT_COLOR_RED && uncle(node)->color == FTRBT_COLOR_BLACK) */
	/* { */
	/* 	if (node == parent->right && parent == parent->parent->left) */
	/* 	{ */
	/* 		ft_rbtrotate_left(parent); */
	/* 		node = node->left; */
	/* 	} */
	/* 	else if (node == parent->left && parent == parent->parent->right) */
	/* 	{ */
	/* 		ft_rbtrotate_right(parent); */
	/* 		node = node->right; */
	/* 	} */
	/* 	if (node == parent->left) */
	/* 		ft_rbtrotate_right(parent); */
	/* 	else */
	/* 		ft_rbtrotate_left(parent); */
	/* 	parent->color = FTRBT_COLOR_BLACK; */
	/* 	parent->parent->color = FTRBT_COLOR_RED; */
	/* } */
}

t_ftrbt		*ft_rbtinsert(
				t_ftrbt *tree,
				void *data,
				int (*cmp)(void*, void*))
{
	t_ftrbt	*node;

	if ((node = ft_rbtnew(data, FTRBT_COLOR_RED)) == NULL)
		return (NULL);
	st_insert_node(&tree, node, cmp);
	st_repare_tree(node);
	while (node->parent != NULL)
		node = node->parent;
	return node;
}
