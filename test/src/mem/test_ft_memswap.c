/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memswap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:38:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 04:18:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memswap);

TEST_SETUP(ft_memswap)
{}

TEST_TEAR_DOWN(ft_memswap)
{}

TEST(ft_memswap, basic)
{
	char buf1[32] = "bonjour";
	char buf2[32] = "aurevoir";
	ft_memswap(buf1, buf2, 32);
	TEST_ASSERT_EQUAL_STRING("bonjour", buf2);
	TEST_ASSERT_EQUAL_STRING("aurevoir", buf1);
	ft_memswap(buf1, buf2, 3);
	TEST_ASSERT_EQUAL_STRING("aurjour", buf2);
	TEST_ASSERT_EQUAL_STRING("bonevoir", buf1);
	ft_memswap(buf1, buf2, 0);
	TEST_ASSERT_EQUAL_STRING("aurjour", buf2);
	TEST_ASSERT_EQUAL_STRING("bonevoir", buf1);
	int a = 1234567;
	int b = 7654321;
	ft_memswap(&a, &b, sizeof(int));
	TEST_ASSERT_EQUAL(7654321, a);
	TEST_ASSERT_EQUAL(1234567, b);
}
