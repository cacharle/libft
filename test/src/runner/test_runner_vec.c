/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_vec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:55:53 by charles           #+#    #+#             */
/*   Updated: 2020/04/01 22:49:28 by charles          ###   ########.fr       */
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

