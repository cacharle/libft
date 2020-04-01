/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ht.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:09 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/01 17:59:35 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_HT_H
# define LIBFT_HT_H

/*
** \file   libft_ht.h
** \brief  Hash table manipulation
*/

# include "libft.h"
# include "libft_lst.h"

/*
** \brief        Hash table entry, key/value pair
** \param key    String key
** \param value  Pointer to data
*/

typedef struct		s_ftht_entry
{
	char			*key;
	void			*value;
}					t_ftht_entry;

typedef t_ftlst*	t_ftht_bucket;

/*
** \brief          Hash table struct
** \param size     Number of buckets
** \param buckets  Bucket array
*/

typedef struct		s_ftht
{
	t_ftsize		size;
	t_ftht_bucket	*buckets;
}					t_ftht;

typedef t_ftuint	t_ftht_digest;

t_ftht_digest		ft_hthash(t_ftht *ht, char *key);

t_ftht				*ft_htnew(t_ftsize size);
void				ft_htdestroy(t_ftht *ht, void (*del)(t_ftht_entry*));
void				*ft_htget(t_ftht *ht, char *key);
t_ftht_entry		*ft_htset(t_ftht *ht, char *key, void *value,
								void (*del)(t_ftht_entry*));
void				ft_htdelone(t_ftht *ht, char *key,
								void (*del)(t_ftht_entry*));
t_ftht_entry		*ft_htentry_new(char *key, void *value);
void				ft_htiter(t_ftht *ht, void (*f)(t_ftht_entry*));

/*
** internals
*/

int					ft_inter_htkey_cmp(const void *ref_key,
											const void *content);

#endif
