/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset_pattern4.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:32:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:57:48 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memset_pattern4);

TEST_SETUP(ft_memset_pattern4)
{}

TEST_TEAR_DOWN(ft_memset_pattern4)
{}

TEST(ft_memset_pattern4, basic)
{
	char buf[17] = {0};
	char *pattern4 = "1234";

	ft_memset_pattern4(buf, pattern4, 16);
	TEST_ASSERT_EQUAL_STRING("1234123412341234", buf);

	char buf1[10] = {0};
	ft_memset_pattern4(buf1, "1234", 9);
	TEST_ASSERT_EQUAL_STRING("123412341", buf1);

	char buf2[11] = {0};
	ft_memset_pattern4(buf2, "1234", 10);
	TEST_ASSERT_EQUAL_STRING("1234123412", buf2);

	char buf3[12] = {0};
	ft_memset_pattern4(buf3, "1234", 11);
	TEST_ASSERT_EQUAL_STRING("12341234123", buf3);
}
