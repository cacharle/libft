/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecremove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 22:48:58 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 22:56:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecremove);

TEST_SETUP(ft_vecremove)
{}

TEST_TEAR_DOWN(ft_vecremove)
{}

TEST(ft_vecremove, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(4);
	for (size_t i = 0; i < 4; i++)
		vec->data[i] = (void*)(i + 1);
	vec->size = 4;

	ft_vecremove(vec, 0, NULL);
	TEST_ASSERT_EQUAL(3, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL_UINT64(2, (size_t)vec->data[0]);
	TEST_ASSERT_EQUAL_UINT64(3, (size_t)vec->data[1]);
	TEST_ASSERT_EQUAL_UINT64(4, (size_t)vec->data[2]);

	ft_vecremove(vec, 1, NULL);
	TEST_ASSERT_EQUAL(2, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL_UINT64(2, (size_t)vec->data[0]);
	TEST_ASSERT_EQUAL_UINT64(4, (size_t)vec->data[1]);

	ft_vecremove(vec, 1, NULL);
	TEST_ASSERT_EQUAL(1, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL_UINT64(2, (size_t)vec->data[0]);

	ft_vecremove(vec, 1, NULL);
	TEST_ASSERT_EQUAL(1, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL_UINT64(2, (size_t)vec->data[0]);

	ft_vecremove(vec, 0, NULL);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);

	ft_vecremove(vec, 0, NULL);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_EQUAL(4, vec->capacity);

	ft_vecdestroy(vec, NULL);
}
