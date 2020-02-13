/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:33:22 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 04:27:55 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memcpy);

TEST_SETUP(ft_memcpy)
{}

TEST_TEAR_DOWN(ft_memcpy)
{}

TEST(ft_memcpy, basic)
{
	void *ptr;
	unsigned char buf1[32] = {0};
	unsigned char buf2[32] = "bonjour";

	ptr = ft_memcpy(buf1, buf2, 32);
	TEST_ASSERT_NOT_NULL(ptr);
	TEST_ASSERT_EQUAL_PTR(buf1, ptr);
	TEST_ASSERT_EQUAL(0, memcmp(buf1, buf2, 32));

	ptr = ft_memcpy(buf1, "yo", 3);
	TEST_ASSERT_NOT_NULL(ptr);
	TEST_ASSERT_EQUAL_PTR(buf1, ptr);
	TEST_ASSERT_EQUAL(0, memcmp(buf1, "yo", 3));
	TEST_ASSERT_EQUAL(0, memcmp(buf1 + 3, buf2 + 3, 32 - 3));

	char saved[32];

	memcpy(saved, buf2, 32);
	ptr = ft_memcpy(buf2, "", 0);
	TEST_ASSERT_NOT_NULL(ptr);
	TEST_ASSERT_EQUAL_PTR(buf2, ptr);
	TEST_ASSERT_EQUAL(0, memcmp(buf2, saved, 32));
}
