#include "libft_test.h"

TEST_GROUP(ft_isblank);

TEST_SETUP(ft_isblank)
{}

TEST_TEAR_DOWN(ft_isblank)
{}

TEST(ft_isblank, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isblank(i), !!ft_isblank(i));
}
