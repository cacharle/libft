/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_mem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 03:36:16 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 20:40:24 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP_RUNNER(ft_bzero)
{
	RUN_TEST_CASE(ft_bzero, basic);
}

TEST_GROUP_RUNNER(ft_calloc)
{
	RUN_TEST_CASE(ft_calloc, basic);
}

TEST_GROUP_RUNNER(ft_memccpy)
{
	RUN_TEST_CASE(ft_memccpy, basic);
}

TEST_GROUP_RUNNER(ft_memchr)
{
	RUN_TEST_CASE(ft_memchr, basic);
}

TEST_GROUP_RUNNER(ft_memcmp)
{
	RUN_TEST_CASE(ft_memcmp, basic);
}

TEST_GROUP_RUNNER(ft_memcpy)
{
	RUN_TEST_CASE(ft_memcpy, basic);
}

TEST_GROUP_RUNNER(ft_memmem)
{
	RUN_TEST_CASE(ft_memmem, basic);
	RUN_TEST_CASE(ft_memmem, invalid_len);
}

TEST_GROUP_RUNNER(ft_memmove)
{
	RUN_TEST_CASE(ft_memmove, basic);
}

TEST_GROUP_RUNNER(ft_memset)
{
	RUN_TEST_CASE(ft_memset, basic);
}

TEST_GROUP_RUNNER(ft_memset_pattern4)
{
	RUN_TEST_CASE(ft_memset_pattern4, basic);
}

TEST_GROUP_RUNNER(ft_memswap)
{
	RUN_TEST_CASE(ft_memswap, basic);
}
