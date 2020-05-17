/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrreserve.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/05/17 13:27:30 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrreserve);

TEST_SETUP(ft_dstrreserve)
{}

TEST_TEAR_DOWN(ft_dstrreserve)
{}

TEST(ft_dstrreserve, basic)
{
	t_ftdstr *dstr;

	dstr = ft_dstrnew("bonjour");
	TEST_ASSERT_NOT_NULL(ft_dstrreserve(dstr, 3));
	TEST_ASSERT_GREATER_OR_EQUAL(3, dstr->capacity - 1);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen("bonjour"), dstr->length);

	TEST_ASSERT_NOT_NULL(ft_dstrreserve(dstr, 16));
	TEST_ASSERT_GREATER_OR_EQUAL(16, dstr->capacity - 1);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen("bonjour"), dstr->length);

	TEST_ASSERT_NOT_NULL(ft_dstrreserve(dstr, 8));
	TEST_ASSERT_GREATER_OR_EQUAL(8, dstr->capacity - 1);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen("bonjour"), dstr->length);

	TEST_ASSERT_NOT_NULL(ft_dstrreserve(dstr, 20));
	TEST_ASSERT_GREATER_OR_EQUAL(20, dstr->capacity - 1);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen("bonjour"), dstr->length);

	TEST_ASSERT_NOT_NULL(ft_dstrreserve(dstr, 32));
	TEST_ASSERT_GREATER_OR_EQUAL(32, dstr->capacity - 1);
	TEST_ASSERT_EQUAL_STRING("bonjour", dstr->str);
	TEST_ASSERT_EQUAL(strlen("bonjour"), dstr->length);
}
