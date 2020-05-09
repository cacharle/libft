/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsubf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 14:03:20 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_strsubf);

TEST_SETUP(ft_strsubf)
{}

TEST_TEAR_DOWN(ft_strsubf)
{}

TEST(ft_strsubf, basic)
{
	char *orig = "[test]";
	char *s;
	char *ret;

	s = strdup(orig);
	ret = ft_strsub(s, 0, strlen(s));
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("[test]", ret);
	free(ret);

	s = strdup(orig);
	ret = ft_strsub(s, 1, strlen(s) - 2);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("test", ret);
	free(ret);

	s = strdup(orig);
	ret = ft_strsub(s, strlen(s) - 4, 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("est]", ret);
	free(ret);

	s = strdup(orig);
	ret = ft_strsub(s, 3, 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("st]", ret);
	free(ret);

	s = strdup(orig);
	ret = ft_strsub(s, strlen(s), 100);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("", ret);
	free(ret);

	s = strdup(orig);
	TEST_ASSERT_NULL(ft_strsub(s, strlen(s) + 1, 1));
}
