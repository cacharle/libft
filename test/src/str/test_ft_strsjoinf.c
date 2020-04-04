/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsjoinf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 23:25:39 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_strsjoinf);

TEST_SETUP(ft_strsjoinf)
{}

TEST_TEAR_DOWN(ft_strsjoinf)
{}

TEST(ft_strsjoinf, basic)
{
	char *join;
	char *arr_orig[] = {"bonjour", "je", "suis", NULL};
	char *arr2_orig[] = {"", "bonjour", "", "", "", "je", "suis", NULL};
	char **null_arr;
	char **arr;
	char **arr2;

	size_t i;

	arr = malloc(sizeof(arr_orig));
	for (i = 0; i < sizeof(arr_orig) / sizeof(char*) - 1; i++)
		arr[i] = strdup(arr_orig[i]);
	arr[i] = NULL;
	join = ft_strsjoinf(arr, " ");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour je suis", join);

	arr = malloc(sizeof(arr_orig));
	for (i = 0; i < sizeof(arr_orig) / sizeof(char*) - 1; i++)
		arr[i] = strdup(arr_orig[i]);
	arr[i] = NULL;
	join = ft_strsjoinf(arr, "<|>");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour<|>je<|>suis", join);

	arr = malloc(sizeof(arr_orig));
	for (i = 0; i < sizeof(arr_orig) / sizeof(char*) - 1; i++)
		arr[i] = strdup(arr_orig[i]);
	arr[i] = NULL;
	join = ft_strsjoinf(arr, "");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjourjesuis", join);

	arr2 = malloc(sizeof(arr2_orig));
	for (i = 0; i < sizeof(arr2_orig) / sizeof(char*) - 1; i++)
		arr2[i] = strdup(arr2_orig[i]);
	arr2[i] = NULL;
	join = ft_strsjoinf(arr2, " ");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour je suis", join);

	arr2 = malloc(sizeof(arr2_orig));
	for (i = 0; i < sizeof(arr2_orig) / sizeof(char*) - 1; i++)
		arr2[i] = strdup(arr2_orig[i]);
	arr2[i] = NULL;
	join = ft_strsjoinf(arr2, "<|>");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjour<|>je<|>suis", join);

	arr2 = malloc(sizeof(arr2_orig));
	for (i = 0; i < sizeof(arr2_orig) / sizeof(char*) - 1; i++)
		arr2[i] = strdup(arr2_orig[i]);
	arr2[i] = NULL;
	join = ft_strsjoinf(arr2, "");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("bonjourjesuis", join);

	null_arr = malloc(sizeof(char*));
	null_arr[0] = NULL;
	join = ft_strsjoinf(null_arr, "abc");
	TEST_ASSERT_NOT_NULL(join);
	TEST_ASSERT_EQUAL_STRING("", join);
}
