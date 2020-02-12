#include "libft_test.h"

TEST_GROUP(ft_isascii);

TEST_SETUP(ft_isascii)
{}

TEST_TEAR_DOWN(ft_isascii)
{}

TEST(ft_isascii, base)
{
	for (int i = 0; i < UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isascii(i), !!ft_isascii(i));
}
