/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:30:06 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:15:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htnew);

TEST_SETUP(ft_htnew)
{}

TEST_TEAR_DOWN(ft_htnew)
{}

int helper_segfault_pid;

TEST(ft_htnew, segfault)
{
	TEST_ASSERT_SEGFAULT(ft_htnew(10));
	TEST_ASSERT_SEGFAULT(ft_htnew(0));
	TEST_ASSERT_SEGFAULT(ft_htnew((1 << 14) + 1));
}

TEST(ft_htnew, error_null)
{
	TEST_ASSERT_NOT_NULL(ft_htnew(10));
	TEST_ASSERT_NULL(ft_htnew(0));
}

TEST(ft_htnew, happy_path)
{
	t_ftht *ht;

	ht = ft_htnew(10);
	TEST_ASSERT_NOT_NULL(ht);
	TEST_ASSERT_EQUAL(10, ht->size);
	TEST_ASSERT_NOT_NULL(ht->buckets);
	for (t_ftsize i = 0; i < ht->size; i++)
		TEST_ASSERT_NULL(ht->buckets[i]);
}
