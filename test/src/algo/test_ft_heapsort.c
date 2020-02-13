#include "libft_test.h"

TEST_GROUP(ft_heapsort);

TEST_SETUP(ft_heapsort)
{}

TEST_TEAR_DOWN(ft_heapsort)
{}

static int compar(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

TEST(ft_heapsort, basic)
{
	TEST_IGNORE();
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	int sorted_arr[sizeof(arr)];

	memcpy(sorted_arr, arr, sizeof(arr));
	qsort(sorted_arr, sizeof(arr) / sizeof(int), sizeof(int), compar);

	ft_heapsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compar);
	TEST_ASSERT_EQUAL_INT_ARRAY(sorted_arr, arr, sizeof(arr) / sizeof(int));
}
