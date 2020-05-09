/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrnew.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 21:03:25 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrnew);

TEST_SETUP(ft_dstrnew)
{}

TEST_TEAR_DOWN(ft_dstrnew)
{}

TEST(ft_dstrnew, basic)
{
	t_ftdstr *dstr;

	dstr = ft_dstrnew("");
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("", dstr->str);
	TEST_ASSERT_EQUAL(1, dstr->capacity);
	TEST_ASSERT_EQUAL(0, dstr->length);
	ft_dstrdestroy(dstr);

	dstr = ft_dstrnew("abc");
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("abc", dstr->str);
	TEST_ASSERT_EQUAL(strlen("abc") + 1, dstr->capacity);
	TEST_ASSERT_EQUAL(strlen("abc"), dstr->length);
	ft_dstrdestroy(dstr);

	dstr = ft_dstrnew("hidden\0text");
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("hidden\0text", dstr->str);
	TEST_ASSERT_EQUAL(strlen("hidden") + 1, dstr->capacity);
	TEST_ASSERT_EQUAL(strlen("hidden"), dstr->length);
	ft_dstrdestroy(dstr);

	char *long_string = "asdkfjasl;asdjiojxocijioajsdfopijasdofijasiodfjaospidj"\
						"fopiasjdfoijasdopifjaspoidjfopiasjdfpoiajsdfoijd";
	dstr = ft_dstrnew(long_string);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING(long_string, dstr->str);
	TEST_ASSERT_EQUAL(strlen(long_string) + 1, dstr->capacity);
	TEST_ASSERT_EQUAL(strlen(long_string), dstr->length);
	ft_dstrdestroy(dstr);
}
