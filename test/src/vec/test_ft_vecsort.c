/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_vecsort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 19:31:13 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 19:45:27 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_vecsort);

TEST_SETUP(ft_vecsort)
{}

TEST_TEAR_DOWN(ft_vecsort)
{}

TEST(ft_vecsort, basic)
{
	t_ftvec *vec = ft_vecnew(1);
	char*	arr[]    = {"bonjour", "je", "suis", "lala", "z", "b"};
	char*	sorted[] = {"bonjour", "je", "suis", "lala", "z", "b"};

	for (size_t i = 0; i < sizeof(arr) / sizeof(char*); i++)
		ft_vecpush(vec, arr[i]);
	ft_vecsort(vec, ft_compar_str);
	ft_qsort(sorted, sizeof(sorted) / sizeof(char*), sizeof(char*), ft_compar_str);
	TEST_ASSERT_EQUAL_STRING_ARRAY(sorted, vec->data, vec->size);
}
