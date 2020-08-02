#include "libft_test.h"

TEST_GROUP(ft_lstreverse);

TEST_SETUP(ft_lstreverse)
{}

TEST_TEAR_DOWN(ft_lstreverse)
{}

TEST(ft_lstreverse, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	ft_lstreverse(&lst);
	TEST_ASSERT_NULL(lst);

	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstreverse(&lst);
	TEST_ASSERT_EQUAL_PTR(&a, lst->data);

	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstreverse(&lst);
	TEST_ASSERT_EQUAL_PTR(&a, lst->data);
	TEST_ASSERT_EQUAL_PTR(&b, lst->next->data);

	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstreverse(&lst);
	TEST_ASSERT_EQUAL_PTR(&b, lst->data);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->data);
	TEST_ASSERT_EQUAL_PTR(&c, lst->next->next->data);

	ft_lstpush_front(&lst, ft_lstnew(&d));
	ft_lstreverse(&lst);
	TEST_ASSERT_EQUAL_PTR(&c, lst->data);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->data);
	TEST_ASSERT_EQUAL_PTR(&b, lst->next->next->data);
	TEST_ASSERT_EQUAL_PTR(&d, lst->next->next->next->data);

	ft_lstdestroy(&lst, NULL);
}
