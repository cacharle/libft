#include "libft_test.h"

TEST_GROUP(ft_lstsort);

TEST_SETUP(ft_lstsort)
{}

TEST_TEAR_DOWN(ft_lstsort)
{}

TEST(ft_lstsort, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = -1;
	int c = 4;
	int d = -3;

	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstpush_front(&lst, ft_lstnew(&d));
	ft_lstsort(&lst, ft_compar_int);

	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NOT_NULL(lst->next);
	TEST_ASSERT_NOT_NULL(lst->next->next);
	TEST_ASSERT_NOT_NULL(lst->next->next->next);
	TEST_ASSERT_NOT_NULL(lst->data);
	TEST_ASSERT_NOT_NULL(lst->next->data);
	TEST_ASSERT_NOT_NULL(lst->next->next->data);
	TEST_ASSERT_NOT_NULL(lst->next->next->next->data);

	TEST_ASSERT_EQUAL(-3, *(int*)lst->data);
	TEST_ASSERT_EQUAL(-1, *(int*)lst->next->data);
	TEST_ASSERT_EQUAL(1, *(int*)lst->next->next->data);
	TEST_ASSERT_EQUAL(4, *(int*)lst->next->next->next->data);
}
