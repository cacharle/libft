/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrreserve.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/04 20:44:42 by charles           #+#    #+#             */
/*   Updated: 2020/05/17 13:27:52 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP_RUNNER(ft_dstrdestroy)
{
	RUN_TEST_CASE(ft_dstrdestroy, basic);
}

TEST_GROUP_RUNNER(ft_dstrreserve)
{
	RUN_TEST_CASE(ft_dstrreserve, basic);
}

TEST_GROUP_RUNNER(ft_dstrinsert)
{
	RUN_TEST_CASE(ft_dstrinsert, basic);
}

TEST_GROUP_RUNNER(ft_dstrnew)
{
	RUN_TEST_CASE(ft_dstrnew, basic);
}

TEST_GROUP_RUNNER(ft_dstrunwrap)
{
	RUN_TEST_CASE(ft_dstrunwrap, basic);
}

TEST_GROUP_RUNNER(ft_dstrsubstitute)
{
	RUN_TEST_CASE(ft_dstrsubstitute, basic);
}

TEST_GROUP_RUNNER(ft_dstrerase)
{
	RUN_TEST_CASE(ft_dstrerase, basic);
}
