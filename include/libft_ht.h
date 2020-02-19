/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ht.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:09 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 02:38:28 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HT_H
# define LIBFT_HT_H

# include "libft.h"
# include "libft_lst.h"

typedef struct		s_ftht_content
{
	char			*key;
	void			*value;
}					t_ftht_content;

typedef t_ftlst*	t_ftht_entry;

typedef struct		s_ftht
{
	t_ftsize		size;
	t_ftht_entry	*entries;
}					t_ftht;

typedef t_ftuint	t_ftht_digest;

t_ftht_digest		ft_hthash(t_ftht *ht, char *key);

t_ftht				*ft_htnew(t_ftsize size);
void				ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_content*));
void				ft_htdestroy_all(t_ftht *ht);
void				ft_htdestroy_key(t_ftht *ht);
void				*ft_htget(t_ftht *ht, char *key);
t_ftht_content		*ft_htset(t_ftht *ht, char *key, void *value,
								void (*del)(t_ftht_content*));
void				ft_htdelone(t_ftht *ht, char *key,
								void (*del)(t_ftht_content*));
void				ft_htdelone_key(t_ftht *ht, char *key);
t_ftht_content		*ft_htcontent_new(char *key, void *value);

/*
** internals
*/

void				ft_inter_htdelcontent_key(t_ftht_content *content);
int					ft_inter_htkey_cmp(const void *ref_key,
											const void *content);

#endif
