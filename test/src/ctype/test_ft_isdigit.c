#include "libft_test.h"

TEST_GROUP(ft_isdigit);

TEST_SETUP(ft_isdigit)
{}

TEST_TEAR_DOWN(ft_isdigit)
{}

TEST(ft_isdigit, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isdigit(i), !!ft_isdigit(i));
}
