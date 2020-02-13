#include "libft_test.h"

TEST_GROUP(ft_is_set);

TEST_SETUP(ft_is_set)
{}

TEST_TEAR_DOWN(ft_is_set)
{}

static int compar(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

TEST(ft_is_set, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	int unique_arr[] = {3, 4, 2, 189, -1, -134, 7, 1, 34};

	TEST_ASSERT_FALSE(ft_is_set(arr, sizeof(arr) / sizeof(int), sizeof(int), compar));
	TEST_ASSERT_TRUE(ft_is_set(unique_arr, sizeof(unique_arr) / sizeof(int), sizeof(int), compar));
}
