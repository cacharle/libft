/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 08:19:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/30 10:34:40 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HT
# define FT_HT

# include "libft.h"

typedef struct
{
	char	*key;
	void	*value;
}			t_ftht_content;

typedef t_list*	t_ftht_entry;

typedef struct
{
	t_ftsize			size;
	t_ftht_entry		*entries;
}						t_ftht;

typedef t_ftuint	t_ftht_digest;


t_ftht			*ft_htnew(t_ftsize size);
void			ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_content*));
void			ft_htdestroy_all(t_ftht *ht);
void			ft_htdestroy_key(t_ftht *ht);
void			ft_htdestroy_value(t_ftht *ht);
t_ftht_content	*ft_htget(t_ftht *ht, char *key);
t_ftht_content	*ft_htset(t_ftht *ht, char *key, void *value);
void			ft_htdelone(t_ftht *ht, char *key, void (*del)(t_ftht_content*));
void			ft_htdelone_key(t_ftht *ht, char *key);
t_ftht_content	*ft_htcontent_new(char *key, void *value);

/*
** internals
*/

void			ft_inter_htdelcontent_key(t_ftht_content *content);
t_ftbool		ft_inter_htkey_equal(char *ref_key, t_ftht_content *content);

#endif
