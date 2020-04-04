/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecpush_safe.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 23:31:08 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecpush_safe);

TEST_SETUP(ft_vecpush_safe)
{}

TEST_TEAR_DOWN(ft_vecpush_safe)
{}

TEST(ft_vecpush_safe, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(1);
	TEST_ASSERT_NULL(ft_vecpush_safe(vec, NULL));

	TEST_ASSERT_NOT_NULL(ft_vecpush_safe(vec, (void*)0x1UL));
	TEST_ASSERT_EQUAL_HEX(0x1, (unsigned long)vec->data[0]);
	TEST_ASSERT_GREATER_OR_EQUAL(1, vec->capacity);
	TEST_ASSERT_EQUAL(1, vec->size);

	TEST_ASSERT_NULL(ft_vecpush_safe(vec, NULL));
	TEST_ASSERT_NULL(ft_vecpush_safe(vec, NULL));

	TEST_ASSERT_NOT_NULL(ft_vecpush_safe(vec, (void*)0x2UL));
	TEST_ASSERT_EQUAL_HEX(0x2, (unsigned long)vec->data[1]);
	TEST_ASSERT_GREATER_OR_EQUAL(2, vec->capacity);
	TEST_ASSERT_EQUAL(2, vec->size);

	TEST_ASSERT_NULL(ft_vecpush_safe(vec, NULL));
	TEST_ASSERT_NULL(ft_vecpush_safe(vec, NULL));
}
