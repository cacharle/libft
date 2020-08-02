/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlfind.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 03:08:15 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 03:34:40 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_lstlfind);

TEST_SETUP(ft_lstlfind)
{}

TEST_TEAR_DOWN(ft_lstlfind)
{}

TEST(ft_lstlfind, basic)
{
	t_ftlst *found = NULL;
	t_ftlst *lst = NULL;
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstpush_front(&lst, ft_lstnew(&c));
	ft_lstpush_front(&lst, ft_lstnew(&b));
	ft_lstpush_front(&lst, ft_lstnew(&a));
	ft_lstpush_front(&lst, ft_lstnew(&a));

	found = ft_lstlfind(lst, ft_compar_int, &c);
	TEST_ASSERT_EQUAL_PTR(lst->next->next->next, found);
	found = ft_lstlfind(lst, ft_compar_int, &c);
	TEST_ASSERT_EQUAL_PTR(lst->next->next->next, found);

	found = ft_lstlfind(lst, ft_compar_int, &b);
	TEST_ASSERT_EQUAL_PTR(lst->next->next, found);

	found = ft_lstlfind(lst, ft_compar_int, &a);
	TEST_ASSERT_EQUAL_PTR(lst, found);

	found = ft_lstlfind(lst, ft_compar_int, &d);
	TEST_ASSERT_NULL(found);

	ft_lstdestroy(&lst, NULL);
}
