#include "libft_test.h"

TEST_GROUP(ft_lstmap);

TEST_SETUP(ft_lstmap)
{}

TEST_TEAR_DOWN(ft_lstmap)
{}

static void *f_square(void *data)
{
	int *d = malloc(sizeof(int));
	
	*d = *(int*)data;
	*d = *d * *d;
	return d;
}

TEST(ft_lstmap, basic)
{
	t_ftlst *lst = NULL;
	t_ftlst *mapped = NULL;
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 5;

	mapped = ft_lstmap(lst, f_square, free);
	TEST_ASSERT_NULL(mapped);

	ft_lstpush_front(&lst, ft_lstnew(&a));
	mapped = ft_lstmap(lst, f_square, free);
	TEST_ASSERT_NOT_NULL(mapped);
	TEST_ASSERT_NOT_NULL(mapped->data);
	TEST_ASSERT_EQUAL(4, *(int*)mapped->data);
	TEST_ASSERT_NULL(mapped->next);
	ft_lstdestroy(&mapped, free);

	ft_lstpush_front(&lst, ft_lstnew(&b));
	mapped = ft_lstmap(lst, f_square, free);
	TEST_ASSERT_NOT_NULL(mapped);
	TEST_ASSERT_NOT_NULL(mapped->data);
	TEST_ASSERT_EQUAL(9, *(int*)mapped->data);
	TEST_ASSERT_NOT_NULL(mapped->next);
	TEST_ASSERT_NOT_NULL(mapped->next->data);
	TEST_ASSERT_EQUAL(4, *(int*)mapped->next->data);
	TEST_ASSERT_NULL(mapped->next->next);
	ft_lstdestroy(&mapped, free);

	ft_lstpush_front(&lst, ft_lstnew(&c));
	mapped = ft_lstmap(lst, f_square, free);
	TEST_ASSERT_NOT_NULL(mapped);
	TEST_ASSERT_NOT_NULL(mapped->data);
	TEST_ASSERT_EQUAL(16, *(int*)mapped->data);
	TEST_ASSERT_NOT_NULL(mapped->next);
	TEST_ASSERT_NOT_NULL(mapped->next->data);
	TEST_ASSERT_EQUAL(9, *(int*)mapped->next->data);
	TEST_ASSERT_NOT_NULL(mapped->next->next);
	TEST_ASSERT_NOT_NULL(mapped->next->next->data);
	TEST_ASSERT_EQUAL(4, *(int*)mapped->next->next->data);
	TEST_ASSERT_NULL(mapped->next->next->next);
	ft_lstdestroy(&mapped, free);

	ft_lstpush_front(&lst, ft_lstnew(&d));
	mapped = ft_lstmap(lst, f_square, free);
	TEST_ASSERT_NOT_NULL(mapped);
	TEST_ASSERT_NOT_NULL(mapped->data);
	TEST_ASSERT_EQUAL(25, *(int*)mapped->data);
	TEST_ASSERT_NOT_NULL(mapped->next);
	TEST_ASSERT_NOT_NULL(mapped->next->data);
	TEST_ASSERT_EQUAL(16, *(int*)mapped->next->data);
	TEST_ASSERT_NOT_NULL(mapped->next->next);
	TEST_ASSERT_NOT_NULL(mapped->next->next->data);
	TEST_ASSERT_EQUAL(9, *(int*)mapped->next->next->data);
	TEST_ASSERT_NOT_NULL(mapped->next->next->next);
	TEST_ASSERT_NOT_NULL(mapped->next->next->next->data);
	TEST_ASSERT_EQUAL(4, *(int*)mapped->next->next->next->data);
	ft_lstdestroy(&mapped, free);

	ft_lstdestroy(&lst, NULL);
}
