#include "libft_test.h"

TEST_GROUP(ft_isprint);

TEST_SETUP(ft_isprint)
{}

TEST_TEAR_DOWN(ft_isprint)
{}

TEST(ft_isprint, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
		TEST_ASSERT_EQUAL(!!isprint(i), !!ft_isprint(i));
}
