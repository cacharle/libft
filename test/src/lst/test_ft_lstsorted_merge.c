#include "libft_test.h"

TEST_GROUP(ft_lstsorted_merge);

TEST_SETUP(ft_lstsorted_merge)
{}

TEST_TEAR_DOWN(ft_lstsorted_merge)
{}

TEST(ft_lstsorted_merge, basic)
{
	t_ftlst *lst1 = NULL;
	t_ftlst *lst2 = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	ft_lstadd_front(&lst1, ft_lstnew(&a));
	ft_lstadd_front(&lst1, ft_lstnew(&d));
	ft_lstadd_front(&lst1, ft_lstnew(&e));
	ft_lstadd_front(&lst1, ft_lstnew(&d));
	ft_lstadd_front(&lst1, ft_lstnew(&a));

	ft_lstadd_front(&lst2, ft_lstnew(&e));
	ft_lstadd_front(&lst2, ft_lstnew(&a));
	ft_lstadd_front(&lst2, ft_lstnew(&b));
	ft_lstadd_front(&lst2, ft_lstnew(&d));
	ft_lstadd_front(&lst2, ft_lstnew(&c));

	ft_lstsort(&lst1, ft_compar_int);
	ft_lstsort(&lst2, ft_compar_int);

	lst1 = ft_lstsorted_merge(lst1, lst2, ft_compar_int);
	for (; lst1->next != NULL; lst1 = lst1->next)
		if (ft_compar_int(lst1->content, lst1->next->content) > 0)
			TEST_FAIL();
}
