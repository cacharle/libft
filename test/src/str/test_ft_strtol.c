/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtol.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:41:59 by charles           #+#    #+#             */
/*   Updated: 2020/07/17 16:31:20 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_strtol);

TEST_SETUP(ft_strtol)
{}

TEST_TEAR_DOWN(ft_strtol)
{}

static long expected;
static long actual;
static char *expected_rest;
static char *actual_rest;
static int	expected_errno;
static int	actual_errno;
static char	error_buf[2048];

static char	*rest = NULL;

#define TEST_ASSERT_FT_STRTOL(str, base) do { \
	errno = 0;                \
	expected = strtol(str, &rest, base);   \
	expected_rest = rest;                     \
	expected_errno = errno;        \
	errno = 0;                \
	actual = ft_strtol(str, &rest, base);   \
	actual_rest = rest;                     \
	actual_errno = errno;        \
	if (actual != expected || actual_errno != expected_errno || expected_rest != actual_rest)  \
	{ \
		snprintf(error_buf, 2048,                                    \
				 "with: ("#str", "#base") expected: %ld actual: %ld " \
				 "rest: expected: \"%s\" actual: \"%s\" "             \
				 "errno: expected: %d actual: %d",                   \
				expected, actual, expected_rest, actual_rest, expected_errno, actual_errno); \
		TEST_FAIL_MESSAGE(error_buf);                    \
	} \
} while(0);

TEST(ft_strtol, basic)
{
	TEST_ASSERT_FT_STRTOL("", 10);
	TEST_ASSERT_FT_STRTOL("0", 10);
	TEST_ASSERT_FT_STRTOL("000000000", 10);
	TEST_ASSERT_FT_STRTOL("1", 10);
	TEST_ASSERT_FT_STRTOL("2", 10);
	TEST_ASSERT_FT_STRTOL("3", 10);
	TEST_ASSERT_FT_STRTOL("4", 10);
	TEST_ASSERT_FT_STRTOL("5", 10);
	TEST_ASSERT_FT_STRTOL("6", 10);
	TEST_ASSERT_FT_STRTOL("7", 10);
	TEST_ASSERT_FT_STRTOL("8", 10);
	TEST_ASSERT_FT_STRTOL("9", 10);
	TEST_ASSERT_FT_STRTOL("000000000000000000000000000000000000000000000000000000000008", 10);

	TEST_ASSERT_FT_STRTOL("                           9", 10);
	TEST_ASSERT_FT_STRTOL("    \v  \t\f\t\t\t\n\r\f\r\v9", 10);
	/* TEST_ASSERT_FT_STRTOL("    \v . \t\f\t\t\t\n\r\f\r\v9", 10); */ // dont really care atm
	TEST_ASSERT_FT_STRTOL("                           9bonjour", 10);
	TEST_ASSERT_FT_STRTOL("    \v  \t\f\t\t\t\n\r\f\r\v9   \t\t\v\r\f\r", 10);
	/* TEST_ASSERT_FT_STRTOL("    \v . \t\f\t\t\t\n\r\f\r\v9      \t bonjour", 10); */
}

TEST(ft_strtol, limits)
{
	TEST_ASSERT_FT_STRTOL("-128", 10);
	TEST_ASSERT_FT_STRTOL("127", 10);
	TEST_ASSERT_FT_STRTOL("255", 10);
	TEST_ASSERT_FT_STRTOL("-128", 10);
	TEST_ASSERT_FT_STRTOL("127", 10);
	TEST_ASSERT_FT_STRTOL("-32768", 10);
	TEST_ASSERT_FT_STRTOL("32767", 10);
	TEST_ASSERT_FT_STRTOL("65535", 10);
	TEST_ASSERT_FT_STRTOL("-2147483648", 10);
	TEST_ASSERT_FT_STRTOL("2147483647", 10);
	TEST_ASSERT_FT_STRTOL("4294967295", 10);
	TEST_ASSERT_FT_STRTOL("-9223372036854775808", 10);
	TEST_ASSERT_FT_STRTOL("9223372036854775807", 10);
	TEST_ASSERT_FT_STRTOL("18446744073709551615", 10);

	TEST_ASSERT_FT_STRTOL("-129", 10);
	TEST_ASSERT_FT_STRTOL("126", 10);
	TEST_ASSERT_FT_STRTOL("254", 10);
	TEST_ASSERT_FT_STRTOL("-127", 10);
	TEST_ASSERT_FT_STRTOL("126", 10);
	TEST_ASSERT_FT_STRTOL("-32767", 10);
	TEST_ASSERT_FT_STRTOL("32766", 10);
	TEST_ASSERT_FT_STRTOL("65534", 10);
	TEST_ASSERT_FT_STRTOL("-2147483647", 10);
	TEST_ASSERT_FT_STRTOL("2147483646", 10);
	TEST_ASSERT_FT_STRTOL("4294967294", 10);
	TEST_ASSERT_FT_STRTOL("-9223372036854775807", 10);
	TEST_ASSERT_FT_STRTOL("9223372036854775806", 10);
	TEST_ASSERT_FT_STRTOL("18446744073709551614", 10);

	TEST_ASSERT_FT_STRTOL("-129", 10);
	TEST_ASSERT_FT_STRTOL("128", 10);
	TEST_ASSERT_FT_STRTOL("256", 10);
	TEST_ASSERT_FT_STRTOL("-129", 10);
	TEST_ASSERT_FT_STRTOL("128", 10);
	TEST_ASSERT_FT_STRTOL("-32769", 10);
	TEST_ASSERT_FT_STRTOL("32768", 10);
	TEST_ASSERT_FT_STRTOL("65536", 10);
	TEST_ASSERT_FT_STRTOL("-2147483649", 10);
	TEST_ASSERT_FT_STRTOL("2147483648", 10);
	TEST_ASSERT_FT_STRTOL("4294967296", 10);
	TEST_ASSERT_FT_STRTOL("-9223372036854775809", 10);
	TEST_ASSERT_FT_STRTOL("9223372036854775808", 10);
	TEST_ASSERT_FT_STRTOL("18446744073709551616", 10);

	TEST_ASSERT_FT_STRTOL("-9223372036854775809", 10);
	TEST_ASSERT_FT_STRTOL("9223372036854775808", 10);
	TEST_ASSERT_FT_STRTOL("-9223372036854775808", 10);
	TEST_ASSERT_FT_STRTOL("18446744073709551615", 10);
	TEST_ASSERT_FT_STRTOL("18446744073709551616", 10);
}
