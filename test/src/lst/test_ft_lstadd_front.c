#include "libft_test.h"

TEST_GROUP(ft_lstadd_front);

TEST_SETUP(ft_lstadd_front)
{}

TEST_TEAR_DOWN(ft_lstadd_front)
{}

TEST(ft_lstadd_front, basic)
{
	t_ftlst *lst;
	int a = 1;
	int b = 2;
	int c = 2;

	lst = ft_lstnew(&a);
	TEST_ASSERT_NOT_NULL(lst);

	ft_lstadd_front(&lst, ft_lstnew(&b));
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_EQUAL_PTR(&b, lst->content);
	TEST_ASSERT_EQUAL(b, *(int*)lst->content);
	TEST_ASSERT_NOT_NULL(lst->next);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->content);
	TEST_ASSERT_EQUAL(a, *(int*)lst->next->content);

	ft_lstadd_front(&lst, ft_lstnew(&c));
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_EQUAL_PTR(&c, lst->content);
	TEST_ASSERT_EQUAL(c, *(int*)lst->content);
	TEST_ASSERT_NOT_NULL(lst->next);
	TEST_ASSERT_EQUAL_PTR(&b, lst->next->content);
	TEST_ASSERT_EQUAL(b, *(int*)lst->next->content);
	TEST_ASSERT_NOT_NULL(lst->next->next);
	TEST_ASSERT_EQUAL_PTR(&a, lst->next->next->content);
	TEST_ASSERT_EQUAL(a, *(int*)lst->next->next->content);
}
