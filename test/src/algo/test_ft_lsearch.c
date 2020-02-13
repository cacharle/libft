#include "libft_test.h"

TEST_GROUP(ft_lsearch);

TEST_SETUP(ft_lsearch)
{}

TEST_TEAR_DOWN(ft_lsearch)
{}

TEST(ft_lsearch, basic)
{
	int arr[32] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	t_ftsearch_const consts;

	int a = 189;
	consts.key =  &a;
	consts.compar = ft_compar_int;

	size_t nelp = 11;
	void *ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr + 5, ptr);

	int c = 34;
	consts.key = &c;
	ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr + 10, ptr);

	int d = 3;
	consts.key = &d;
	ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr, ptr);

	int b = 123;
	consts.key = &b;
	ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL(12, nelp);
	TEST_ASSERT_EQUAL(123, arr[11]);
	TEST_ASSERT_EQUAL_PTR(arr + 11, ptr);

	ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL(12, nelp);
	TEST_ASSERT_EQUAL(123, arr[11]);
	TEST_ASSERT_EQUAL_PTR(arr + 11, ptr);

	int e = 1234;
	consts.key = &e;
	ptr = ft_lsearch(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL(13, nelp);
	TEST_ASSERT_EQUAL(1234, arr[12]);
	TEST_ASSERT_EQUAL_PTR(arr + 12, ptr);
}
