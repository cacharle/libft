/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:32:28 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 04:21:58 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memset);

TEST_SETUP(ft_memset)
{}

TEST_TEAR_DOWN(ft_memset)
{}

TEST(ft_memset, basic)
{
	int i;
	unsigned char buf[32] = {0};

	ft_memset(buf, 0xfa, 32);
	for (i = 0; i < 32; i++)
		TEST_ASSERT_EQUAL(0xfa, buf[i]);

	ft_memset(buf, 0x00, 15);
	for (i = 0; i < 15; i++)
		TEST_ASSERT_EQUAL(0x00, buf[i]);
	while (i++ < 31)
		TEST_ASSERT_EQUAL(0xfa, buf[i]);

	ft_memset(buf, 0x10, 31);
	for (int i = 0; i < 31; i++)
		TEST_ASSERT_EQUAL(0x10, buf[i]);
	TEST_ASSERT_EQUAL(0xfa, buf[31]);
}
