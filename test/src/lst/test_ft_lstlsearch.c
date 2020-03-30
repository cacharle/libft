/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstlsearch.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 03:21:46 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 03:35:37 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_lstlsearch);

TEST_SETUP(ft_lstlsearch)
{}

TEST_TEAR_DOWN(ft_lstlsearch)
{}

TEST(ft_lstlsearch, basic)
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

	found = ft_lstlsearch(lst, ft_compar_int, &c);
	TEST_ASSERT_EQUAL_PTR(lst->next->next->next, found);
	found = ft_lstlsearch(lst, ft_compar_int, &c);
	TEST_ASSERT_EQUAL_PTR(lst->next->next->next, found);

	found = ft_lstlsearch(lst, ft_compar_int, &b);
	TEST_ASSERT_EQUAL_PTR(lst->next->next, found);

	found = ft_lstlsearch(lst, ft_compar_int, &a);
	TEST_ASSERT_EQUAL_PTR(lst, found);

	found = ft_lstlsearch(lst, ft_compar_int, &d);
	TEST_ASSERT_EQUAL_PTR(ft_lstlast(lst), found);

	ft_lstdestroy(&lst, NULL);
}
