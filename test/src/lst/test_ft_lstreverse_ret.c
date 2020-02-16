#include "libft_test.h"

TEST_GROUP(ft_lstreverse_ret);

TEST_SETUP(ft_lstreverse_ret)
{}

TEST_TEAR_DOWN(ft_lstreverse_ret)
{}

TEST(ft_lstreverse_ret, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	lst = ft_lstreverse_ret(lst);
	TEST_ASSERT_NULL(lst);

	ft_lstadd_front(&lst, ft_lstnew(&a));
	lst = ft_lstreverse_ret(lst);
	TEST_ASSERT_EQUAL_PTR(&a, lst->content);

	ft_lstadd_front(&lst, ft_lstnew(&b));
	lst = ft_lstreverse_ret(lst);
	TEST_ASSERT_EQUAL_PTR(&a, lst->content);
	TEST_ASSERT_EQUAL_PTR(&b, lst->next->content);

	ft_lstadd_front(&lst, ft_lstnew(&c));
	lst = ft_lstreverse_ret(lst);
	TEST_ASSERT_EQUAL_PTR(&b, lst->content);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->content);
	TEST_ASSERT_EQUAL_PTR(&c, lst->next->next->content);

	ft_lstadd_front(&lst, ft_lstnew(&d));
	lst = ft_lstreverse_ret(lst);
	TEST_ASSERT_EQUAL_PTR(&c, lst->content);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->content);
	TEST_ASSERT_EQUAL_PTR(&b, lst->next->next->content);
	TEST_ASSERT_EQUAL_PTR(&d, lst->next->next->next->content);

	ft_lstclear(&lst, NULL);
}
