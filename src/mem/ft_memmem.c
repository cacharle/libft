/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 01:54:55 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 03:13:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

#define BAD_TABLE_SIZE 256

static void		st_bad_table_init(size_t bad_table[BAD_TABLE_SIZE],
									const char *little, size_t little_len)
{
	size_t	i;

	ft_memset_pattern4(bad_table, &little_len, 4 * BAD_TABLE_SIZE);
	i = 0;
	while (i < little_len)
	{
		bad_table[(int)little[i]] = little_len - i - 1;
		i++;
	}
}

static t_ftbool	st_memcmp_end(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (((t_ftbyte*)s1)[n] != ((t_ftbyte*)s2)[n])
			return (FALSE);
	return (TRUE);
}

void			*ft_memmem(const void *big, size_t big_len,
							const void *little, size_t little_len)
{
	size_t	i;
	size_t	bad_table[BAD_TABLE_SIZE];

	st_bad_table_init(bad_table, little, little_len);
	i = 0;
	while (i < big_len - little_len)
	{
		if (st_memcmp_end((t_ftbyte*)big + i, little, little_len))
			return ((t_ftbyte*)big + i);
		i += bad_table[(int)(((t_ftbyte*)big)[i + big_len] - 1)];
	}
	return (NULL);
}
