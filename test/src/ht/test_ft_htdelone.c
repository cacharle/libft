/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htdelone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 02:08:00 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/19 02:46:10 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htdelone);

TEST_SETUP(ft_htdelone)
{}

TEST_TEAR_DOWN(ft_htdelone)
{}

static void st_del(t_ftht_entry *v)
{
	free(v->key);
	free(v);
}

TEST(ft_htdelone, basic)
{
	t_ftht *ht = ft_htnew(3);

	ft_htset(ht, "bonjour", "je", st_del);
	ft_htset(ht, "a", "yay", st_del);
	ft_htset(ht, "b", "aasdf", st_del);
	ft_htset(ht, "c", "a", st_del);
	ft_htset(ht, "d", "dd", st_del);

	ft_htdelone(ht, "bonjour", st_del);
	void *ptr = ft_htget(ht, "bonjour");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "a"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "b"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "a", st_del);
	ptr = ft_htget(ht, "a");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "b"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "b", st_del);
	ptr = ft_htget(ht, "b");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "c", st_del);
	ptr = ft_htget(ht, "c");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "d", st_del);
	ptr = ft_htget(ht, "d");
	TEST_ASSERT_NULL(ptr);
}
