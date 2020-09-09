/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ht.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:09 by cacharle          #+#    #+#             */
/*   Updated: 2020/09/09 15:47:22 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HT_H
# define LIBFT_HT_H

/*
** \file   libft_ht.h
** \brief  Hash table manipulation
*/

# include "libft.h"
# include "libft_def.h"
# include "libft_lst.h"
# include "libft_mem.h"

/*
** \brief        Hash table entry, key/value pair
** \param key    String key
** \param value  Pointer to data
*/

typedef struct	s_ftht_entry
{
	char		*key;
	void		*value;
}				t_ftht_entry;

/*
** \brief          Hash table struct
** \param size     Number of buckets
** \param buckets  Bucket array, each bucket is a linked list
*/

typedef struct	s_ftht
{
	size_t		size;
	t_ftlst		**buckets;
}				t_ftht;

size_t			ft_hthash(t_ftht *ht, char *key);

t_ftht			*ft_htnew(size_t size);
void			ft_htdestroy(t_ftht *ht, t_ftdel_func del);
void			*ft_htget(t_ftht *ht, char *key);
t_ftht_entry	*ft_htset(t_ftht *ht, char *key, void *value,
								t_ftdel_func del);
t_ftht_entry	*ft_htset_safe(t_ftht *ht, char *key, void *value,
								t_ftdel_func del);
void			ft_htdelone(t_ftht *ht, char *key, t_ftdel_func del);
t_ftht_entry	*ft_htentry_new(char *key, void *value);
void			ft_htiter(t_ftht *ht, void (*f)(t_ftht_entry*));

/*
** internals
*/

int				ft_inter_htkey_cmp(const void *ref_key, const void *content);
void			ft_inter_htdel_first_order(t_ftht_entry *entry);
void			ft_inter_htdel_first_order_setup(t_ftdel_func del);
void			ft_inter_htdel_first_order_teardown(void);

#endif
