#include "libft_test.h"

TEST_GROUP(ft_lstlast);

TEST_SETUP(ft_lstlast)
{}

TEST_TEAR_DOWN(ft_lstlast)
{}

TEST(ft_lstlast, basic)
{
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	ft_lstpush_front(&lst, ft_lstnew(&a));
	TEST_ASSERT_EQUAL_PTR(lst, ft_lstlast(lst));
	ft_lstpush_front(&lst, ft_lstnew(&b));
	TEST_ASSERT_EQUAL_PTR(lst->next, ft_lstlast(lst));
	ft_lstpush_front(&lst, ft_lstnew(&c));
	TEST_ASSERT_EQUAL_PTR(lst->next->next, ft_lstlast(lst));
	ft_lstpush_front(&lst, ft_lstnew(&d));
	TEST_ASSERT_EQUAL_PTR(lst->next->next->next, ft_lstlast(lst));

	ft_lstdestroy(&lst, NULL);
}
