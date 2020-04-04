/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrerase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/05 01:02:40 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrerase);

TEST_SETUP(ft_dstrerase)
{}

TEST_TEAR_DOWN(ft_dstrerase)
{}

TEST(ft_dstrerase, basic)
{
	t_ftdstr *dstr;

	dstr = ft_dstrnew("bonjour");
	ft_dstrerase(dstr, 0, 0);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(7, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);

	ft_dstrerase(dstr, 2, 0);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(7, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);

	ft_dstrerase(dstr, 2, 1);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(6, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("bojour", dstr->str);

	ft_dstrerase(dstr, 6, 1);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(6, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("bojour", dstr->str);

	ft_dstrerase(dstr, 5, 1);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(5, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("bojou", dstr->str);

	ft_dstrerase(dstr, 0, 2);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(3, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("jou", dstr->str);

	ft_dstrerase(dstr, 0, 10);
	TEST_ASSERT_NOT_NULL(dstr);
	TEST_ASSERT_EQUAL(0, dstr->length);
	TEST_ASSERT_EQUAL(8, dstr->capacity);
	TEST_ASSERT_EQUAL_STRING("", dstr->str);
}
