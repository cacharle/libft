/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:33:50 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 21:04:22 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memmem);

TEST_SETUP(ft_memmem)
{}

TEST_TEAR_DOWN(ft_memmem)
{}

TEST(ft_memmem, basic)
{
	char haystack[32] = "bonjour";
	char *ptr;

	ptr = ft_memmem(haystack, sizeof(haystack), "jour\0", 5);
	TEST_ASSERT_EQUAL_PTR(haystack + 3, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "jour", 4);
	TEST_ASSERT_EQUAL_PTR(haystack + 3, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "jo", 2);
	TEST_ASSERT_EQUAL_PTR(haystack + 3, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "j", 1);
	TEST_ASSERT_EQUAL_PTR(haystack + 3, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "yo", 2);
	TEST_ASSERT_NULL(ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "\0", 1);
	TEST_ASSERT_EQUAL_PTR(haystack + 7, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "bon", 3);
	TEST_ASSERT_EQUAL_PTR(haystack, ptr);

	ptr = ft_memmem(haystack, sizeof(haystack), "on", 2);
	TEST_ASSERT_EQUAL_PTR(haystack + 1, ptr);
}

TEST(ft_memmem, invalid_len)
{
	char buf[32] = {0};

	void *ptr = ft_memmem(buf, 2, "jour", 4);
	TEST_ASSERT_NULL(ptr);

	ptr = ft_memmem(buf, 0, "jour", 4);
	TEST_ASSERT_NULL(ptr);

	ptr = ft_memmem(buf, 2, "jour", 0);
	TEST_ASSERT_NULL(ptr);
}
