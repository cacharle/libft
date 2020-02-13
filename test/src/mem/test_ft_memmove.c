/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:34:21 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:49:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memmove);

TEST_SETUP(ft_memmove)
{}

TEST_TEAR_DOWN(ft_memmove)
{}

TEST(ft_memmove, basic)
{
	char buf1[32] = "bonjour";

	char *ptr = ft_memmove(buf1, buf1 + 2, 29);
	TEST_ASSERT_EQUAL_PTR(buf1, ptr);
	TEST_ASSERT_EQUAL_STRING("njour", buf1);

	ptr = ft_memmove(buf1 + 2, buf1, 29);
	TEST_ASSERT_EQUAL_PTR(buf1 + 2, ptr);
	TEST_ASSERT_EQUAL_STRING("njour", ptr);
	TEST_ASSERT_EQUAL_STRING("njnjour", buf1);

	ptr = ft_memmove(buf1, buf1, 32);
	TEST_ASSERT_EQUAL_PTR(buf1, ptr);
	TEST_ASSERT_EQUAL_STRING("njnjour", ptr);
}
