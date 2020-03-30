#include "libft_test.h"

TEST_GROUP(ft_lstnew);

TEST_SETUP(ft_lstnew)
{}

TEST_TEAR_DOWN(ft_lstnew)
{}

TEST(ft_lstnew, basic)
{
	t_ftlst *lst;
	int a = 4;

	lst = ft_lstnew(&a);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_EQUAL_PTR(&a, lst->data);
	TEST_ASSERT_EQUAL(a, *(int*)lst->data);

	/* free(lst); */
	lst = ft_lstnew(NULL);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NULL(lst->data);
}
