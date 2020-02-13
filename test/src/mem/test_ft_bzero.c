/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:32:20 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 04:30:39 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_bzero);

TEST_SETUP(ft_bzero)
{}

TEST_TEAR_DOWN(ft_bzero)
{}

TEST(ft_bzero, basic)
{
	char buf[32] = {'a'};

	ft_bzero(buf, 32);
	for (int i = 0; i < 32; i++)
		TEST_ASSERT_EQUAL(0x0, buf[i]);
}
