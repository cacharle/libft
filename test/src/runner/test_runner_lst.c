/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 03:54:05 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/15 03:59:08 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP_RUNNER(ft_lstadd_back)
{
	RUN_TEST_CASE(ft_lstadd_back, basic);
}

TEST_GROUP_RUNNER(ft_lstadd_front)
{
	RUN_TEST_CASE(ft_lstadd_front, basic);
}

TEST_GROUP_RUNNER(ft_lstbsearch)
{
	RUN_TEST_CASE(ft_lstbsearch, basic);
}

TEST_GROUP_RUNNER(ft_lstclear)
{
	RUN_TEST_CASE(ft_lstclear, basic);
}

TEST_GROUP_RUNNER(ft_lstdelone)
{
	RUN_TEST_CASE(ft_lstdelone, basic);
}

TEST_GROUP_RUNNER(ft_lstiter)
{
	RUN_TEST_CASE(ft_lstiter, basic);
}

TEST_GROUP_RUNNER(ft_lstlast)
{
	RUN_TEST_CASE(ft_lstlast, basic);
}

TEST_GROUP_RUNNER(ft_lstmap)
{
	RUN_TEST_CASE(ft_lstmap, basic);
}

TEST_GROUP_RUNNER(ft_lstnew)
{
	RUN_TEST_CASE(ft_lstnew, basic);
}

TEST_GROUP_RUNNER(ft_lstpop_front)
{
	RUN_TEST_CASE(ft_lstpop_front, basic);
}

TEST_GROUP_RUNNER(ft_lstremove_if)
{
	RUN_TEST_CASE(ft_lstremove_if, basic);
}

TEST_GROUP_RUNNER(ft_lstreverse)
{
	RUN_TEST_CASE(ft_lstreverse, basic);
}

TEST_GROUP_RUNNER(ft_lstreverse_ret)
{
	RUN_TEST_CASE(ft_lstreverse_ret, basic);
}

TEST_GROUP_RUNNER(ft_lstsize)
{
	RUN_TEST_CASE(ft_lstsize, basic);
}

TEST_GROUP_RUNNER(ft_lstsort)
{
	RUN_TEST_CASE(ft_lstsort, basic);
}

TEST_GROUP_RUNNER(ft_lstsorted_merge)
{
	RUN_TEST_CASE(ft_lstsorted_merge, basic);
}
