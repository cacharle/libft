/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:33:14 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 19:38:17 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_memchr);

TEST_SETUP(ft_memchr)
{}

TEST_TEAR_DOWN(ft_memchr)
{}

TEST(ft_memchr, basic)
{
	char *a = "bonjour";

	char *ptr = ft_memchr(a, 'j', sizeof(a));
	TEST_ASSERT_EQUAL_PTR(a + 3, ptr);

	ptr = ft_memchr(a, 'z', sizeof(a));
	TEST_ASSERT_NULL(ptr);

	ptr = ft_memchr(a, '\0', sizeof(a));
	TEST_ASSERT_EQUAL_PTR(a + 7, ptr);
}
