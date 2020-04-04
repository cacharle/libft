/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrinsert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 21:21:51 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrinsert);

TEST_SETUP(ft_dstrinsert)
{}

TEST_TEAR_DOWN(ft_dstrinsert)
{}

TEST(ft_dstrinsert, basic)
{
	t_ftdstr *dstr;

	dstr = ft_dstrnew("");

	TEST_ASSERT_NULL(ft_dstrinsert(dstr, "", 1));
	TEST_ASSERT_NULL(ft_dstrinsert(dstr, "test", 1));
	TEST_ASSERT_NULL(ft_dstrinsert(dstr, "", 5));
	TEST_ASSERT_NULL(ft_dstrinsert(dstr, "test", 5));

	TEST_ASSERT_NOT_NULL(ft_dstrinsert(dstr, "bonjour", 0));
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen(dstr->str), dstr->length);
	TEST_ASSERT_GREATER_THAN(strlen(dstr->str), dstr->capacity);

	TEST_ASSERT_NULL(ft_dstrinsert(dstr, "abc", 8));

	TEST_ASSERT_NOT_NULL(ft_dstrinsert(dstr, "{{{", 0));
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("{{{bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen(dstr->str), dstr->length);
	TEST_ASSERT_GREATER_THAN(strlen(dstr->str), dstr->capacity);

	TEST_ASSERT_NOT_NULL(ft_dstrinsert(dstr, "]]]", dstr->length));
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("{{{bonjour]]]", dstr->str);
	TEST_ASSERT_EQUAL(strlen(dstr->str), dstr->length);
	TEST_ASSERT_GREATER_THAN(strlen(dstr->str), dstr->capacity);

	TEST_ASSERT_NOT_NULL(ft_dstrinsert(dstr, "<>", 6));
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL_STRING("{{{bon<>jour]]]", dstr->str);
	TEST_ASSERT_EQUAL(strlen(dstr->str), dstr->length);
	TEST_ASSERT_GREATER_THAN(strlen(dstr->str), dstr->capacity);
}
