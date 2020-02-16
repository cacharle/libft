#include "libft_test.h"

TEST_GROUP(ft_lstremove_if);

TEST_SETUP(ft_lstremove_if)
{}

TEST_TEAR_DOWN(ft_lstremove_if)
{}

TEST(ft_lstremove_if, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&b));
	ft_lstadd_back(&lst, ft_lstnew(&c));
	ft_lstadd_back(&lst, ft_lstnew(&d));
	ft_lstadd_back(&lst, ft_lstnew(&d));
	ft_lstadd_back(&lst, ft_lstnew(&d));
	ft_lstadd_back(&lst, ft_lstnew(&a));
	ft_lstadd_back(&lst, ft_lstnew(&a));

	ft_lstremove_if(&lst, ft_compar_int, &a, NULL);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NOT_NULL(lst->next);
	TEST_ASSERT_NOT_NULL(lst->next->next);
	TEST_ASSERT_NOT_NULL(lst->next->next->next);
	TEST_ASSERT_NOT_NULL(lst->next->next->next->next);
	TEST_ASSERT_NOT_NULL(lst->content);
	TEST_ASSERT_NOT_NULL(lst->next->content);
	TEST_ASSERT_NOT_NULL(lst->next->next->content);
	TEST_ASSERT_NOT_NULL(lst->next->next->next->content);
	TEST_ASSERT_NOT_NULL(lst->next->next->next->next->content);
	TEST_ASSERT_EQUAL(b, *(int*)lst->content);
	TEST_ASSERT_EQUAL(c, *(int*)lst->next->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->next->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->next->next->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->next->next->next->content);

	ft_lstremove_if(&lst, ft_compar_int, &b, NULL);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NOT_NULL(lst->next);
	TEST_ASSERT_NOT_NULL(lst->next->next);
	TEST_ASSERT_NOT_NULL(lst->next->next->next);
	TEST_ASSERT_NOT_NULL(lst->content);
	TEST_ASSERT_NOT_NULL(lst->next->content);
	TEST_ASSERT_NOT_NULL(lst->next->next->content);
	TEST_ASSERT_EQUAL(c, *(int*)lst->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->next->content);
	TEST_ASSERT_EQUAL(d, *(int*)lst->next->next->next->content);

	ft_lstremove_if(&lst, ft_compar_int, &d, NULL);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NOT_NULL(lst->content);
	TEST_ASSERT_EQUAL(c, *(int*)lst->content);

	ft_lstremove_if(&lst, ft_compar_int, &d, NULL);
	TEST_ASSERT_NOT_NULL(lst);
	TEST_ASSERT_NOT_NULL(lst->content);
	TEST_ASSERT_EQUAL(c, *(int*)lst->content);

	ft_lstremove_if(&lst, ft_compar_int, &c, NULL);
	TEST_ASSERT_NULL(lst);
}
