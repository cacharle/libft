#include "libft_test.h"

TEST_GROUP(ft_qsort);

TEST_SETUP(ft_qsort)
{}

TEST_TEAR_DOWN(ft_qsort)
{}

TEST(ft_qsort, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	int sorted_arr[sizeof(arr)];
	memcpy(sorted_arr, arr, sizeof(arr));
	qsort(sorted_arr, sizeof(arr) / sizeof(int), sizeof(int), ft_compar_int);
	ft_qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), ft_compar_int);
	TEST_ASSERT_EQUAL_INT_ARRAY(sorted_arr, arr, sizeof(arr) / sizeof(int));
}

TEST(ft_qsort, strings)
{
	char *arr[] = {"zzz", "fff", "aaa"};
	char *sorted[sizeof(arr)];
	memcpy(sorted, arr, sizeof(arr));
	qsort(sorted, sizeof(arr) / sizeof(char*), sizeof(char*), ft_compar_str);
	ft_qsort(arr, sizeof(arr) / sizeof(char*), sizeof(char*), ft_compar_str);
	TEST_ASSERT_EQUAL_STRING_ARRAY(sorted, arr, sizeof(arr) / sizeof(char*));

	char *arr2[] = {"abcdef", "abcde", "abcd", "abc", "ab", "a", ""};
	char *sorted2[sizeof(arr2)];
	memcpy(sorted2, arr2, sizeof(arr2));
	qsort(sorted2, sizeof(arr2) / sizeof(char*), sizeof(char*), ft_compar_str);
	ft_qsort(arr2, sizeof(arr2) / sizeof(char*), sizeof(char*), ft_compar_str);
	TEST_ASSERT_EQUAL_STRING_ARRAY(sorted2, arr2, sizeof(arr2) / sizeof(char*));

	char *arr3[] = {"", "a", "ab", "abc", "abcd", "abcde", "abcdef"};
	char *sorted3[sizeof(arr3)];
	memcpy(sorted3, arr3, sizeof(arr3));
	qsort(sorted3, sizeof(arr3) / sizeof(char*), sizeof(char*), ft_compar_str);
	ft_qsort(arr3, sizeof(arr3) / sizeof(char*), sizeof(char*), ft_compar_str);
	TEST_ASSERT_EQUAL_STRING_ARRAY(sorted3, arr3, sizeof(arr3) / sizeof(char*));

	char *arr4[] = {"ast.c", "z.c", "path.c", "main.c", "utils.c", "preprocess.c", "env.c"};
	char *sorted4[sizeof(arr4)];
	memcpy(sorted4, arr4, sizeof(arr4));
	qsort(sorted4, sizeof(arr4) / sizeof(char*), sizeof(char*), ft_compar_str);
	ft_qsort(arr4, sizeof(arr4) / sizeof(char*), sizeof(char*), ft_compar_str);
	TEST_ASSERT_EQUAL_STRING_ARRAY(sorted4, arr4, sizeof(arr4) / sizeof(char*));
}
