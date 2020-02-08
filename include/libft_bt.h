/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bt.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 21:26:34 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/07 21:34:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BT_H
# define LIBFT_BT_H

# include <stdlib.h>

typedef struct			s_ftbtree
{
	void				*data;
	struct s_ftbtree	*left;
	struct s_ftbtree	*right;
}						t_ftbtree;

t_ftbtree				*ft_btnew(void *data);
void					ft_btdestroy(t_ftbtree *tree, void (*del)(void *data));

#endif
