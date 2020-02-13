/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:34:13 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:35:17 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memccpy);

TEST_SETUP(ft_memccpy)
{}

TEST_TEAR_DOWN(ft_memccpy)
{}

TEST(ft_memccpy, basic)
{
	char buf[32] = "bonjour";
	char buf2[32] = {0};

	char *ptr = ft_memccpy(buf2, buf, 0x0, 32);
	TEST_ASSERT_EQUAL_PTR(&buf2[8], ptr);
	for (int i = 0; i < 32; i++)
		TEST_ASSERT_EQUAL_CHAR(buf[i], buf2[i]);

	ptr = ft_memccpy(buf2, buf, 0x1, 32);
	TEST_ASSERT_NULL(ptr);
	for (int i = 0; i < 32; i++)
		TEST_ASSERT_EQUAL_CHAR(buf[i], buf2[i]);

	char buf3[10] = "aurevoir";
	ptr = ft_memccpy(buf, buf3, 'e', 10);
	TEST_ASSERT_EQUAL_PTR(buf + 4, ptr);
	for (int i = 0; i < 4; i++)
		TEST_ASSERT_EQUAL_CHAR(buf[i], buf3[i]);
	for (int i = 4; i < 32; i++)
		TEST_ASSERT_EQUAL_CHAR(buf[i], buf2[i]);
}
