/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htentry_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 04:07:04 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/17 04:15:39 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htentry_new);

TEST_SETUP(ft_htentry_new)
{}

TEST_TEAR_DOWN(ft_htentry_new)
{}

TEST(ft_htentry_new, basic)
{
	t_ftht_entry *c = NULL;

	char *k = "bonjour";
	c = ft_htentry_new(k, NULL);
	TEST_ASSERT_NOT_NULL(c);
	TEST_ASSERT(k != c->key);
	TEST_ASSERT_EQUAL_STRING(k, c->key);
	TEST_ASSERT_NULL(c->value); 

	c = ft_htentry_new(k, k);
	TEST_ASSERT_NOT_NULL(c);
	TEST_ASSERT(k != c->key);
	TEST_ASSERT_EQUAL_STRING(k, c->key);
	TEST_ASSERT_EQUAL_PTR(k, c->value); 
	TEST_ASSERT_EQUAL_STRING(k, (char*)c->value); 

	/* free(c->key); */
	/* free(c); */
}
