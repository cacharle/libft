#include "libft_test.h"

TEST_GROUP(ft_isspace);

TEST_SETUP(ft_isspace)
{}

TEST_TEAR_DOWN(ft_isspace)
{}

TEST(ft_isspace, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isspace(i), !!ft_isspace(i));
}
