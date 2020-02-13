/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_algo.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:25:52 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 21:37:15 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"


TEST_GROUP_RUNNER(ft_bsearch)
{
	RUN_TEST_CASE(ft_bsearch, basic);
}

TEST_GROUP_RUNNER(ft_compar_int)
{
	RUN_TEST_CASE(ft_compar_int, basic);
}

TEST_GROUP_RUNNER(ft_heapsort)
{
	RUN_TEST_CASE(ft_heapsort, basic);
}

TEST_GROUP_RUNNER(ft_is_set)
{
	RUN_TEST_CASE(ft_is_set, basic);
}

TEST_GROUP_RUNNER(ft_lfind)
{
	RUN_TEST_CASE(ft_lfind, basic);
}

TEST_GROUP_RUNNER(ft_lsearch)
{
	RUN_TEST_CASE(ft_lsearch, basic);
}

TEST_GROUP_RUNNER(ft_mergesort)
{
	RUN_TEST_CASE(ft_mergesort, basic);
}

TEST_GROUP_RUNNER(ft_qsort)
{
	RUN_TEST_CASE(ft_qsort, basic);
}

TEST_GROUP_RUNNER(ft_reverse)
{
	RUN_TEST_CASE(ft_reverse, basic);
}
