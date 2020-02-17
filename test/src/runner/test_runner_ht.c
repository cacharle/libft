/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_ht.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:44:39 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 05:02:25 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP_RUNNER(ft_htcontent_new)
{
	RUN_TEST_CASE(ft_htcontent_new, basic);
}

TEST_GROUP_RUNNER(ft_htnew)
{
	RUN_TEST_CASE(ft_htnew, segfault);
	RUN_TEST_CASE(ft_htnew, error_null);
	RUN_TEST_CASE(ft_htnew, happy_path);
}

TEST_GROUP_RUNNER(ft_htget)
{
	RUN_TEST_CASE(ft_htget, segfault);
	RUN_TEST_CASE(ft_htget, error_null);
}

TEST_GROUP_RUNNER(ft_htset)
{
	RUN_TEST_CASE(ft_htset, segfault);
	RUN_TEST_CASE(ft_htset, error_null);
	RUN_TEST_CASE(ft_htset, happy_path);
	RUN_TEST_CASE(ft_htset, reset);
	RUN_TEST_CASE(ft_htset, collision);
}
