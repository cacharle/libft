/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 23:32:26 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_strsjoin);

TEST_SETUP(ft_strsjoin)
{}

TEST_TEAR_DOWN(ft_strsjoin)
{}

TEST(ft_strsjoin, basic)
{
	char *join;
	char *arr[] = {"bonjour", "je", "suis", NULL};
	char *arr2[] = {"", "bonjour", "", "", "", "je", "suis", NULL};
	char *null_arr[] = {NULL};

	join = ft_strsjoin(arr, " ");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour je suis", join);

	join = ft_strsjoin(arr, "<|>");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour<|>je<|>suis", join);

	join = ft_strsjoin(arr, "");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjourjesuis", join);

	join = ft_strsjoin(arr2, " ");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour je suis", join);

	join = ft_strsjoin(arr2, "<|>");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour<|>je<|>suis", join);

	join = ft_strsjoin(arr2, "");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjourjesuis", join);

	join = ft_strsjoin(null_arr, "abc");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("", join);
}
