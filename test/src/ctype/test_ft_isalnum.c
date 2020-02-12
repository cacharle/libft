#include "libft_test.h"

TEST_GROUP(ft_isalnum);

TEST_SETUP(ft_isalnum)
{}

TEST_TEAR_DOWN(ft_isalnum)
{}

TEST(ft_isalnum, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isalnum(i), !!ft_isalnum(i));
}
