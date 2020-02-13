#include "libft_test.h"

TEST_GROUP(ft_compar_int);

TEST_SETUP(ft_compar_int)
{}

TEST_TEAR_DOWN(ft_compar_int)
{}

TEST(ft_compar_int, basic)
{
	int a = 4;
	int b = 3;

	TEST_ASSERT_GREATER_THAN(0, ft_compar_int(&a, &b));
	TEST_ASSERT_LESS_THAN(0, ft_compar_int(&b, &a));
	TEST_ASSERT_EQUAL(0, ft_compar_int(&a, &a));
	TEST_ASSERT_EQUAL(0, ft_compar_int(&b, &b));
}
