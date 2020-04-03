/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htdelone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 02:08:00 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:08:38 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htdelone);

TEST_SETUP(ft_htdelone)
{}

TEST_TEAR_DOWN(ft_htdelone)
{}

TEST(ft_htdelone, basic)
{
	t_ftht *ht = ft_htnew(3);

	ft_htset(ht, "bonjour", strdup("je"), free);
	ft_htset(ht, "a", strdup("yay"), free);
	ft_htset(ht, "b", strdup("aasdf"), free);
	ft_htset(ht, "c", "a", NULL);
	ft_htset(ht, "d", "dd", NULL);

	ft_htdelone(ht, "bonjour", free);
	void *ptr = ft_htget(ht, "bonjour");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "a"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "b"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "a", free);
	ptr = ft_htget(ht, "a");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "b"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "b", free);
	ptr = ft_htget(ht, "b");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "c"));
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "c", NULL);
	ptr = ft_htget(ht, "c");
	TEST_ASSERT_NULL(ptr);
	TEST_ASSERT_NOT_NULL(ft_htget(ht, "d"));

	ft_htdelone(ht, "d", NULL);
	ptr = ft_htget(ht, "d");
	TEST_ASSERT_NULL(ptr);
}
