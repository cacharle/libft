/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_veciter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 20:20:41 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_veciter);

TEST_SETUP(ft_veciter)
{}

TEST_TEAR_DOWN(ft_veciter)
{}

static void iter_func(void *x)
{
	*(int*)x = *(int*)x * *(int*)x;
}

static void iter_func2(void *x)
{
	*(int*)x = *(int*)x - 100;
}

TEST(ft_veciter, basic)
{
	int	tmp[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	t_ftvec *vec;

	vec = ft_vecnew(10);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_NOT_NULL(vec->data);
	for (int i = 0; i < 10; i++)
		vec->data[i] = tmp + i;
	vec->size = 10;
	ft_veciter(vec, iter_func);
	for (int i = 0; i < 10; i++)
		TEST_ASSERT_EQUAL(i * i, *(int*)vec->data[i]);
	ft_veciter(vec, iter_func2);
	for (int i = 0; i < 10; i++)
		TEST_ASSERT_EQUAL(i * i - 100, *(int*)vec->data[i]);

	ft_vecdestroy(vec, NULL);
}
