#include "libft_test.h"

TEST_GROUP(ft_isalpha);

TEST_SETUP(ft_isalpha)
{}

TEST_TEAR_DOWN(ft_isalpha)
{}

TEST(ft_isalpha, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isalpha(i), !!ft_isalpha(i));
}
