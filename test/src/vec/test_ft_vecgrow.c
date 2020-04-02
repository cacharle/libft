/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecgrow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/02 10:41:28 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecgrow);

TEST_SETUP(ft_vecgrow)
{}

TEST_TEAR_DOWN(ft_vecgrow)
{}

TEST(ft_vecgrow, basic)
{
	t_ftvec *vec = ft_vecnew(1);
	TEST_ASSERT_NOT_NULL(vec);
	vec->size = 1;
	vec->data[0] = (void*)(0xfefefefeUL << 32);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(2, vec->capacity);
	TEST_ASSERT_EQUAL(1, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	vec->size = 2;
	vec->data[1] = (void*)(0xfafafafaUL << 32);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(3, vec->capacity);
	TEST_ASSERT_EQUAL(2, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64(0xfafafafaUL << 32, vec->data[1]);
	vec->size = 3;
	vec->data[2] = (void*)(0xfbfbfbfbUL << 32);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64(0xfafafafaUL << 32, vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64(0xfbfbfbfbUL << 32, vec->data[2]);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(6, vec->capacity);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64(0xfafafafaUL << 32, vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64(0xfbfbfbfbUL << 32, vec->data[2]);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(9, vec->capacity);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64(0xfafafafaUL << 32, vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64(0xfbfbfbfbUL << 32, vec->data[2]);

	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(13, vec->capacity);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL_HEX64(0xfefefefeUL << 32, vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64(0xfafafafaUL << 32, vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64(0xfbfbfbfbUL << 32, vec->data[2]);

	ft_vecdestroy(vec, NULL);
}
