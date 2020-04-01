/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:01:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecnew);

TEST_SETUP(ft_vecnew)
{}

TEST_TEAR_DOWN(ft_vecnew)
{}

TEST(ft_vecnew, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(0);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);
	TEST_ASSERT_EQUAL(1, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	ft_vecdestroy(vec, NULL);

	vec = ft_vecnew(10);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);
	TEST_ASSERT_EQUAL(10, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	ft_vecdestroy(vec, NULL);

	vec = ft_vecnew(256);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);
	TEST_ASSERT_EQUAL(256, vec->capacity);
	TEST_ASSERT_EQUAL(0, vec->size);
	ft_vecdestroy(vec, NULL);
}
