/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_rbt.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 16:09:51 by charles           #+#    #+#             */
/*   Updated: 2020/05/11 16:11:16 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_RBT_H
# define LIBFT_RBT_H

/*
** \file   libft_rbt.h
** \brief  Red-black tree
**
** Rules: (from wikipedia)
** 1. Each node is either red or black.
** 2. The root is black. This rule is sometimes omitted. Since the root can
**    always be changed from red to black, but not necessarily vice versa,
**    this rule has little effect on analysis.
** 3. All leaves (NULL) are black.
** 4. If a node is red, then both its children are black.
** 5. Every path from a given node to any of its descendant NULL nodes goes
**    through the same number of black nodes.
**
**
** Unbalance case:
**
** 1. Node and parent are both red
**
**   B1
**    \     left rot         color swap
**   > R2     -->       R2      -->       B2
**      \              /  \              /  \
**     > R3           B1  R3            R1  R3
**
** 2. Node and parent are both red and uncle node is red
**
**          B2                    R2
**         / \     color swap    / \
** uncle> R1  R3      -->       B1  B3
**             \                     \
**             R4                    R4
*/

# include <stdlib.h>

/*
** \brief                    Red-black tree color enum
** \param FTRBT_COLOR_RED    color red
** \param FTRBT_COLOR_BLACK  color black
*/

enum					e_ftrbt_color
{
	FTRBT_COLOR_RED = 0,
	FTRBT_COLOR_BLACK,
};

/*
** \brief         Red-black tree struct
** \param left    Left node
** \param right   Right node
** \param data    Pointer to data
** \param parent  Parent node
** \param color   Color of the node
** \note          The first 3 attricutes are the same
**                as t_ftbt (binary tree) struct
**                which means that we can use all functions
**                of binary tree on red-black tree.
*/

typedef struct			s_ftrbt
{
	struct s_ftrbt		*left;
	struct s_ftrbt		*right;
	void				*data;
	struct s_ftrbt		*parent;
	enum e_ftrbt_color	color;
}						t_ftrbt;

t_ftrbt					*ft_rbtnew(void *data, enum e_ftrbt_color color);
void					ft_rbtrotate_right(t_ftrbt **tree);
void					ft_rbtrotate_left(t_ftrbt **tree);

t_ftrbt					*ft_rbtinsert(
							t_ftrbt *tree,
							void *data,
							int (*cmp)(void*, void*));

#endif
