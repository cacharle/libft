/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecpop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:26:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecpop);

TEST_SETUP(ft_vecpop)
{}

TEST_TEAR_DOWN(ft_vecpop)
{}

TEST(ft_vecpop, basic)
{
	t_ftvec *vec;

	vec = ft_vecnew(3);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);

	vec->size = 3;
	for (long i = 0; i < 3; i++)
		vec->data[i] = (void*)i;

	ft_vecpop(vec, NULL);
	TEST_ASSERT_EQUAL(2, vec->size);
	TEST_ASSERT_EQUAL(3, vec->capacity);
	ft_vecpop(vec, NULL);
	TEST_ASSERT_EQUAL(1, vec->size);
	TEST_ASSERT_EQUAL(3, vec->capacity);
	ft_vecpop(vec, NULL);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_EQUAL(3, vec->capacity);
	ft_vecpop(vec, NULL);
	TEST_ASSERT_EQUAL(0, vec->size);
	TEST_ASSERT_EQUAL(3, vec->capacity);
}
