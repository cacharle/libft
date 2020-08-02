/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecinsert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 22:48:58 by charles           #+#    #+#             */
/*   Updated: 2020/04/02 11:05:14 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecinsert);

TEST_SETUP(ft_vecinsert)
{}

TEST_TEAR_DOWN(ft_vecinsert)
{}

TEST(ft_vecinsert, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(2);
	vec->data[0] = (void*)(1UL << 32);
	vec->data[1] = (void*)(2UL << 32);
	vec->size = 2;

	TEST_ASSERT_NOT_NULL(ft_vecinsert(vec, 0, (void*)(0xfefefefeUL << 32)));
	TEST_ASSERT_EQUAL(3, vec->capacity);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfefefefeUL << 32), vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64((void*)(1UL << 32), vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64((void*)(2UL << 32), vec->data[2]);

	TEST_ASSERT_NOT_NULL(ft_vecinsert(vec, 1, (void*)(0xfafafafaUL << 32)));
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL(4, vec->size);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfefefefeUL << 32), vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfafafafaUL << 32), vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64((void*)(1UL << 32), vec->data[2]);
	TEST_ASSERT_EQUAL_HEX64((void*)(2UL << 32), vec->data[3]);

	TEST_ASSERT_NOT_NULL(ft_vecinsert(vec, 2, (void*)(0xfbfbfbfbUL << 32)));
	TEST_ASSERT_EQUAL(6, vec->capacity);
	TEST_ASSERT_EQUAL(5, vec->size);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfefefefeUL << 32), vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfafafafaUL << 32), vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfbfbfbfbUL << 32), vec->data[2]);
	TEST_ASSERT_EQUAL_HEX64((void*)(1UL << 32), vec->data[3]);

	TEST_ASSERT_NOT_NULL(ft_vecinsert(vec, vec->size, (void*)(0xfcUL << 31)));
	TEST_ASSERT_EQUAL(6, vec->capacity);
	TEST_ASSERT_EQUAL(6, vec->size);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfefefefeUL << 32), vec->data[0]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfafafafaUL << 32), vec->data[1]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfbfbfbfbUL << 32), vec->data[2]);
	TEST_ASSERT_EQUAL_HEX64((void*)(1UL << 32), vec->data[3]);
	TEST_ASSERT_EQUAL_HEX64((void*)(2UL << 32), vec->data[4]);
	TEST_ASSERT_EQUAL_HEX64((void*)(0xfcUL << 31), vec->data[5]);

	ft_vecdestroy(vec, NULL);
}
