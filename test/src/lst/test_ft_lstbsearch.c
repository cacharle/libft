#include "libft_test.h"

TEST_GROUP(ft_lstbsearch);

TEST_SETUP(ft_lstbsearch)
{}

TEST_TEAR_DOWN(ft_lstbsearch)
{}

TEST(ft_lstbsearch, basic)
{
	t_ftlst *found = NULL;
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstpush_front(&lst, ft_lstnew(&a));

	found = ft_lstbsearch(lst, ft_compar_int, &c);
	TEST_ASSERT_NOT_NULL(found);
	found = ft_lstbsearch(lst, ft_compar_int, &c);
	TEST_ASSERT_NOT_NULL(found);
	found = ft_lstbsearch(lst, ft_compar_int, &b);
	TEST_ASSERT_NOT_NULL(found);
	found = ft_lstbsearch(lst, ft_compar_int, &a);
	TEST_ASSERT_NOT_NULL(found);
	found = ft_lstbsearch(lst, ft_compar_int, &d);
	TEST_ASSERT_NULL(found);

	ft_lstdestroy(&lst, NULL);
}
