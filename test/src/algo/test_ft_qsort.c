#include "libft_test.h"

TEST_GROUP(ft_qsort);

TEST_SETUP(ft_qsort)
{}

TEST_TEAR_DOWN(ft_qsort)
{}

static int compar(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

TEST(ft_qsort, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	int sorted_arr[sizeof(arr)];

	memcpy(sorted_arr, arr, sizeof(arr));
	qsort(sorted_arr, sizeof(arr) / sizeof(int), sizeof(int), compar);

	ft_qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compar);
	TEST_ASSERT_EQUAL_INT_ARRAY(sorted_arr, arr, sizeof(arr) / sizeof(int));
}
