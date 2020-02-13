#include "libft_test.h"

TEST_GROUP(ft_lfind);

TEST_SETUP(ft_lfind)
{}

TEST_TEAR_DOWN(ft_lfind)
{}

TEST(ft_lfind, basic)
{
	int arr[] = {3, 4, 1, 2, 7, 189, -1, -134, 7, 1, 34};
	t_ftsearch_const consts;

	int a = 189;
	consts.key =  &a;
	consts.compar = ft_compar_int;

	size_t nelp = sizeof(arr) / sizeof(int);
	void *ptr = ft_lfind(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr + 5, ptr);

	int b = 123;
	consts.key = &b;
	ptr = ft_lfind(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_NULL(ptr);

	int c = 34;
	consts.key = &c;
	ptr = ft_lfind(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr + 10, ptr);

	int d = 3;
	consts.key = &d;
	ptr = ft_lfind(arr, &nelp, sizeof(int), &consts);
	TEST_ASSERT_EQUAL_PTR(arr, ptr);
}
