/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecgrow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 21:17:13 by charles          ###   ########.fr       */
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
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(2, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(3, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(4, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(6, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(9, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_NOT_NULL(ft_vecgrow(vec));
	TEST_ASSERT_EQUAL(13, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);

	ft_vecdestroy(vec, NULL);
}
