/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htdestroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 02:45:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 02:49:36 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htdestroy);

TEST_SETUP(ft_htdestroy)
{}

TEST_TEAR_DOWN(ft_htdestroy)
{}

static void st_del(t_ftht_entry *v)
{
	free(v->key);
	free(v);
}

TEST(ft_htdestroy, basic)
{
	t_ftht *ht = ft_htnew(2);

	ft_htset(ht, "a", "1", st_del);
	ft_htset(ht, "b", "2", st_del);
	ft_htset(ht, "c", "3", st_del);
	ft_htset(ht, "d", "4", st_del);
	ft_htdestroy(ht, st_del);
}
