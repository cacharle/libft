#include "libft_test.h"

TEST_GROUP(ft_lstsize);

TEST_SETUP(ft_lstsize)
{}

TEST_TEAR_DOWN(ft_lstsize)
{}

TEST(ft_lstsize, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;

	TEST_ASSERT_EQUAL(0, ft_lstsize(lst));
	lst = ft_lstnew(&a);
	TEST_ASSERT_EQUAL(1, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(2, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(3, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(4, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(5, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(6, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(7, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(8, ft_lstsize(lst));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL(9, ft_lstsize(lst));

	ft_lstdestroy(&lst, NULL);
}
