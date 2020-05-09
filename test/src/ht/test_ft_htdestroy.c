/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_htdestroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 02:45:27 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:07:07 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

TEST_GROUP(ft_htdestroy);

TEST_SETUP(ft_htdestroy)
{}

TEST_TEAR_DOWN(ft_htdestroy)
{}

TEST(ft_htdestroy, basic)
{
	t_ftht *ht = ft_htnew(2);

	ft_htset(ht, "a", strdup("1"), free);
	ft_htset(ht, "b", strdup("2"), free);
	ft_htset(ht, "c", "3", NULL);
	ft_htset(ht, "d", "4", NULL);
	ft_htdestroy(ht, NULL);
}
