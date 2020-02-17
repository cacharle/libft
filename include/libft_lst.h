/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_lst.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 03:05:36 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LST_H
# define LIBFT_LST_H

# include <stdlib.h>
# include "libft_types.h"
# include "libft_algo.h"

typedef struct		s_ftlst
{
	void			*content;
	struct s_ftlst	*next;
}					t_ftlst;

typedef void	(*t_ftdel_func)(void *);

t_ftlst				*ft_lstnew(void const *content);
void				ft_lstadd_front(t_ftlst **alst, t_ftlst *new);
int					ft_lstsize(t_ftlst *lst);
t_ftlst				*ft_lstlast(t_ftlst *lst);
void				ft_lstadd_back(t_ftlst **alst, t_ftlst *new);
void				ft_lstdelone(t_ftlst *lst, void (*del)(void *));
void				ft_lstclear(t_ftlst **lst, void (*del)(void *));
void				ft_lstiter(t_ftlst *lst, void (*f)(void *));
t_ftlst				*ft_lstmap(t_ftlst *lst, void *(*f)(void *),
								t_ftdel_func del);
void				ft_lstpop_front(t_ftlst **lst, void (*del)(void *));
t_ftlst				*ft_lstreverse_ret(t_ftlst *lst);
void				ft_lstreverse(t_ftlst **lst);
void				ft_lstremove_if(t_ftlst **lst,
						t_ftcompar_func cmp, const void *ref,
						t_ftdel_func del);
t_ftlst				*ft_lstbsearch(t_ftlst *lst, t_ftcompar_func cmp,
									const void *ref);
t_ftlst				*ft_lstlsearch(t_ftlst *lst, t_ftcompar_func cmp,
									const void *ref);
t_ftlst				*ft_lstlfind(t_ftlst *lst, t_ftcompar_func cmp,
									const void *ref);
void				ft_lstsort(t_ftlst **begin_list, t_ftcompar_func cmp);
t_ftlst				*ft_lstsorted_merge(t_ftlst *l1, t_ftlst *l2,
										t_ftcompar_func cmp);

#endif
