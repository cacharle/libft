/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_dstrunwrap.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/04/04 21:07:16 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_dstrunwrap);

TEST_SETUP(ft_dstrunwrap)
{}

TEST_TEAR_DOWN(ft_dstrunwrap)
{}

TEST(ft_dstrunwrap, basic)
{
	t_ftdstr *dstr;
	char *ret;

	dstr = ft_dstrnew("bonjour");
	ret = ft_dstrunwrap(dstr);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("bonjour", ret);

	dstr = ft_dstrnew("");
	ret = ft_dstrunwrap(dstr);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("", ret);

	dstr = ft_dstrnew("hidden\0text");
	ret = ft_dstrunwrap(dstr);
	TEST_ASSERT_NOT_NULL(ret);
	TEST_ASSERT_EQUAL_STRING("hidden", ret);
}
