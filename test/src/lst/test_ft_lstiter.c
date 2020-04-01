#include "libft_test.h"

TEST_GROUP(ft_lstiter);

TEST_SETUP(ft_lstiter)
{}

TEST_TEAR_DOWN(ft_lstiter)
{}

static void square_iter_func(void *data)
{
	int *d = (int*)data;

	*d = *d * *d;
}

TEST(ft_lstiter, basic)
{
	t_ftlst *lst = NULL;
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;

	ft_lstiter(lst, square_iter_func);
	TEST_ASSERT_NULL(lst);

	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstiter(lst, square_iter_func);
	TEST_ASSERT_EQUAL(4, *(int*)lst->data);

	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstiter(lst, square_iter_func);
	TEST_ASSERT_EQUAL(9, *(int*)lst->data);
	TEST_ASSERT_EQUAL(16, *(int*)lst->next->data);

	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstiter(lst, square_iter_func);
	TEST_ASSERT_EQUAL(16, *(int*)lst->data);
	TEST_ASSERT_EQUAL(81, *(int*)lst->next->data);
	TEST_ASSERT_EQUAL(256, *(int*)lst->next->next->data);

	ft_lstpush_front(&lst, ft_lstnew(&d));
	ft_lstiter(lst, square_iter_func);
	TEST_ASSERT_EQUAL(25, *(int*)lst->data);
	TEST_ASSERT_EQUAL(256, *(int*)lst->next->data);
	TEST_ASSERT_EQUAL(81 * 81, *(int*)lst->next->next->data);
	TEST_ASSERT_EQUAL(256 * 256, *(int*)lst->next->next->next->data);

	ft_lstdestroy(&lst, NULL);
}
