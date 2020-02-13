/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:32:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:41:08 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memcmp);

TEST_SETUP(ft_memcmp)
{}

TEST_TEAR_DOWN(ft_memcmp)
{}

TEST(ft_memcmp, basic)
{
	char buf1[32] = "bonjour";
	char buf2[32] = "bonjoure";

	int res = ft_memcmp(buf1, buf2, 32);
	TEST_ASSERT_LESS_THAN(0, res);

	res = ft_memcmp(buf2, buf1, 32);
	TEST_ASSERT_GREATER_THAN(0, res);

	res = ft_memcmp(buf2, buf1, 7);
	TEST_ASSERT_EQUAL(0, res);
	res = ft_memcmp(buf2, buf1, 6);
	TEST_ASSERT_EQUAL(0, res);
	res = ft_memcmp(buf2, buf1, 3);
	TEST_ASSERT_EQUAL(0, res);
	res = ft_memcmp(buf2, buf1, 0);
	TEST_ASSERT_EQUAL(0, res);
}
