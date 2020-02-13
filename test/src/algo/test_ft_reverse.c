#include "libft_test.h"

TEST_GROUP(ft_reverse);

TEST_SETUP(ft_reverse)
{}

TEST_TEAR_DOWN(ft_reverse)
{}

TEST(ft_reverse, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	int rev_arr[] = {34, 1, 7, -134, -1, 189, 7, 2, 1, 4, 3};

	ft_reverse(arr, sizeof(arr) / sizeof(int), sizeof(int));
	TEST_ASSERT_EQUAL_INT_ARRAY(rev_arr, arr, sizeof(arr) / sizeof(int));

}
