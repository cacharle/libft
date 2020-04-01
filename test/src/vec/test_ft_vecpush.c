/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecpush.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:23:00 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecpush);

TEST_SETUP(ft_vecpush)
{}

TEST_TEAR_DOWN(ft_vecpush)
{}

TEST(ft_vecpush, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(2);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);

	TEST_ASSERT_NOT_NULL(ft_vecpush(vec, (void*)10));
	TEST_ASSERT_EQUAL(1, vec->size);
	TEST_ASSERT_EQUAL(2, vec->capacity);
	TEST_ASSERT_EQUAL(10, (long)vec->data[0]);

	TEST_ASSERT_NOT_NULL(ft_vecpush(vec, (void*)11));
	TEST_ASSERT_EQUAL(2, vec->size);
	TEST_ASSERT_EQUAL(2, vec->capacity);
	TEST_ASSERT_EQUAL(11, (long)vec->data[1]);

	TEST_ASSERT_NOT_NULL(ft_vecpush(vec, (void*)12));
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL(2 * 1.5, vec->capacity);
	TEST_ASSERT_EQUAL(12, (long)vec->data[2]);

	TEST_ASSERT_NOT_NULL(ft_vecpush(vec, (void*)13));
	TEST_ASSERT_EQUAL(4, vec->size);
	TEST_ASSERT_EQUAL(2 * 1.5 * 1.5, vec->capacity);
	TEST_ASSERT_EQUAL(13, (long)vec->data[3]);

	TEST_ASSERT_NOT_NULL(ft_vecpush(vec, (void*)14));
	TEST_ASSERT_EQUAL(5, vec->size);
	TEST_ASSERT_EQUAL(2 * 1.5 * 1.5 * 1.5, vec->capacity);
	TEST_ASSERT_EQUAL(14, (long)vec->data[4]);

	ft_vecdestroy(vec, NULL);
}
