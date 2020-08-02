/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsub.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 14:02:11 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_strsub);

TEST_SETUP(ft_strsub)
{}

TEST_TEAR_DOWN(ft_strsub)
{}

TEST(ft_strsub, basic)
{
	char *s = "[test]";
	char *ret;

	ret = ft_strsub(s, 0, strlen(s));
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("[test]", ret);
	free(ret);

	ret = ft_strsub(s, 1, strlen(s) - 2);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("test", ret);
	free(ret);

	ret = ft_strsub(s, strlen(s) - 4, 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("est]", ret);
	free(ret);

	ret = ft_strsub(s, 3, 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("st]", ret);
	free(ret);

	ret = ft_strsub(s, strlen(s), 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("", ret);
	free(ret);

	TEST_ASSERT_NULL(ft_strsub(s, strlen(s) + 1, 1));
}
