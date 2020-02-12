#include "libft_test.h"

TEST_GROUP(ft_toupper);

TEST_SETUP(ft_toupper)
{}

TEST_TEAR_DOWN(ft_toupper)
{}

TEST(ft_toupper, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(toupper(i), ft_toupper(i));
}
