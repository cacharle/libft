/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_vec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:55:53 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 19:36:41 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_test.h"

TEST_GROUP_RUNNER(ft_vecdestroy)
{
	RUN_TEST_CASE(ft_vecdestroy, basic);
}

TEST_GROUP_RUNNER(ft_vecgrow)
{
	RUN_TEST_CASE(ft_vecgrow, basic);
}

TEST_GROUP_RUNNER(ft_veciter)
{
	RUN_TEST_CASE(ft_veciter, basic);
}

TEST_GROUP_RUNNER(ft_vecnew)
{
	RUN_TEST_CASE(ft_vecnew, basic);
}

TEST_GROUP_RUNNER(ft_vecpop)
{
	RUN_TEST_CASE(ft_vecpop, basic);
}

TEST_GROUP_RUNNER(ft_vecpush)
{
	RUN_TEST_CASE(ft_vecpush, basic);
}

TEST_GROUP_RUNNER(ft_vecremove)
{
	RUN_TEST_CASE(ft_vecremove, basic);
}

TEST_GROUP_RUNNER(ft_vecinsert)
{
	RUN_TEST_CASE(ft_vecinsert, basic);
}

TEST_GROUP_RUNNER(ft_vecsort)
{
	RUN_TEST_CASE(ft_vecsort, basic);
}
