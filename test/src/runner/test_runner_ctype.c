/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner_ctype.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 22:44:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/12 23:13:02 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP_RUNNER(ft_isalnum)
{
	RUN_TEST_CASE(ft_isalnum, base);
}

TEST_GROUP_RUNNER(ft_isalpha)
{
	RUN_TEST_CASE(ft_isalpha, base);
}

TEST_GROUP_RUNNER(ft_isascii)
{
	RUN_TEST_CASE(ft_isascii, base);
}

TEST_GROUP_RUNNER(ft_isblank)
{
	RUN_TEST_CASE(ft_isblank, base);
}

TEST_GROUP_RUNNER(ft_isdigit)
{
	RUN_TEST_CASE(ft_isdigit, base);
}

TEST_GROUP_RUNNER(ft_isprint)
{
	RUN_TEST_CASE(ft_isprint, base);
}

TEST_GROUP_RUNNER(ft_isspace)
{
	RUN_TEST_CASE(ft_isspace, base);
}

TEST_GROUP_RUNNER(ft_todigit)
{
	RUN_TEST_CASE(ft_todigit, base);
}

TEST_GROUP_RUNNER(ft_tolower)
{
	RUN_TEST_CASE(ft_tolower, base);
}

TEST_GROUP_RUNNER(ft_toupper)
{
	RUN_TEST_CASE(ft_toupper, base);
}

