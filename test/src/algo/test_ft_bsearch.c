#include "libft_test.h"

TEST_GROUP(ft_bsearch);

TEST_SETUP(ft_bsearch)
{}

TEST_TEAR_DOWN(ft_bsearch)
{}

TEST(ft_bsearch, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	t_ftsearch_const consts;

	int a = 189;
	consts.key =  &a;
	consts.compar = ft_compar_int;

	size_t nelp = sizeof(arr) / sizeof(int);
	qsort(arr, nelp, sizeof(int), ft_compar_int);

	void *ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);

	int b = 123;
	consts.key = &b;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_NULL(ptr);

	int c = -134;
	consts.key = &c;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);

	int e = 1;
	consts.key = &e;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);

	int d = -1;
	consts.key = &d;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);

	int f = 34;
	consts.key = &f;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);

	int g = 7;
	consts.key = &g;
	ptr = ft_bsearch(arr, nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(bsearch(consts.key, arr, nelp, sizeof(int), consts.compar), ptr);
}
