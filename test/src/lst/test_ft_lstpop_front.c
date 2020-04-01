#include "libft_test.h"

TEST_GROUP(ft_lstpop_front);

TEST_SETUP(ft_lstpop_front)
{}

TEST_TEAR_DOWN(ft_lstpop_front)
{}

TEST(ft_lstpop_front, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;

	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstpush_front(&lst, ft_lstnew(&c));

	ft_lstpop_front(&lst, NULL);
	TEST_ASSERT_EQUAL_PTR(&b, lst->data);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->data);

	ft_lstpop_front(&lst, NULL);
	TEST_ASSERT_EQUAL_PTR(&a, lst->data);

	ft_lstpop_front(&lst, NULL);
	TEST_ASSERT_NULL(lst);
}
