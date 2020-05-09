/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrsubstitute.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 01:09:47 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrsubstitute);

TEST_SETUP(ft_dstrsubstitute)
{}

TEST_TEAR_DOWN(ft_dstrsubstitute)
{}

TEST(ft_dstrsubstitute, basic)
{
	t_ftdstr *dstr;

	dstr = ft_dstrnew("bonjour");
	TEST_ASSERT_NULL(ft_dstrsubstitute(dstr, "bonjour", 8, 1));

	TEST_ASSERT_NOT_NULL(ft_dstrsubstitute(dstr, "{{{", 0, 0));
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL(10, dstr->length);
	TEST_ASSERT_GREATER_OR_EQUAL(11, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("{{{bonjour", dstr->str);

	TEST_ASSERT_NOT_NULL(ft_dstrsubstitute(dstr, "]]]", dstr->length, 0));
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL(13, dstr->length);
	TEST_ASSERT_GREATER_OR_EQUAL(14, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("{{{bonjour]]]", dstr->str);

	TEST_ASSERT_NOT_NULL(ft_dstrsubstitute(dstr, "aurevoir", 3, 7));
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL(14, dstr->length);
	TEST_ASSERT_GREATER_OR_EQUAL(15, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("{{{aurevoir]]]", dstr->str);

	TEST_ASSERT_NOT_NULL(ft_dstrsubstitute(dstr, "<>", 0, dstr->length));
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL(2, dstr->length);
	TEST_ASSERT_GREATER_OR_EQUAL(3, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("<>", dstr->str);

	TEST_ASSERT_NOT_NULL(ft_dstrsubstitute(dstr, "<>", 0, dstr->length));
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_NOT_NULL(dstr->str);
	TEST_ASSERT_EQUAL(2, dstr->length);
	TEST_ASSERT_GREATER_OR_EQUAL(3, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("<>", dstr->str);
}
