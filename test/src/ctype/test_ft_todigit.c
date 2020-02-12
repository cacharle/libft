#include "libft_test.h"

TEST_GROUP(ft_todigit);

TEST_SETUP(ft_todigit)
{}

TEST_TEAR_DOWN(ft_todigit)
{}

TEST(ft_todigit, base)
{
	for (int i = 0; i <= UCHAR_MAX; i++)
	{
		if (isdigit(i))
			TEST_ASSERT_EQUAL(i - '0', ft_todigit(i));
		else
			TEST_ASSERT_EQUAL(-1, ft_todigit(i));
	}
}
