#include "libft_test.h"

TEST_GROUP(ft_tolower);

TEST_SETUP(ft_tolower)
{}

TEST_TEAR_DOWN(ft_tolower)
{}

TEST(ft_tolower, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(tolower(i), ft_tolower(i));
}
