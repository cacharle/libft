/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bt.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:26:34 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/26 19:45:56 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BT_H
# define LIBFT_BT_H

/*
** \file   libft_bt.h
** \brief  Binary tree
*/

# include <stdlib.h>

/*
** \brief        Binary tree struct
** \param left   Left node
** \param right  Right node
** \param data   Node data
*/

typedef struct		s_ftbt
{
	struct s_ftbt	*left;
	struct s_ftbt	*right;
	void			*data;
}					t_ftbt;

t_ftbt				*ft_btnew(void *data);
void				ft_btdestroy(t_ftbt *tree, void (*del)(void *data));

t_ftbt				*ft_btsorted_insert(
						t_ftbt *tree,
						void *data,
						int (*cmp)(void*, void*));

void				*ft_btsorted_search(
						t_ftbt *tree,
						void *ref,
						int (*cmp)(void*, void*));
#endif
