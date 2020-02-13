/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 01:54:55 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/13 21:04:46 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_mem.h"

#define BAD_TABLE_SIZE 256

static void	st_bad_table_init(size_t bad_table[BAD_TABLE_SIZE],
									const char *little, size_t little_len)
{
	size_t	i;

	i = 0;
	while (i < BAD_TABLE_SIZE)
		bad_table[i++] = little_len;
	i = 0;
	while (i < little_len - 1)
	{
		bad_table[(int)little[i]] = little_len - i - 1;
		i++;
	}
}

static int	st_memcmp_end(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (*(t_ftbyte*)(s1 + n) != *(t_ftbyte*)(s2 + n))
			return (*(t_ftbyte*)(s1 + n) - *(t_ftbyte*)(s2 + n));
	return (0);
}

void		*ft_memmem(const void *big, size_t big_len,
							const void *little, size_t little_len)
{
	size_t	i;
	size_t	bad_table[BAD_TABLE_SIZE];

	if (big_len < little_len || little_len == 0 || big_len == 0)
		return (NULL);
	st_bad_table_init(bad_table, little, little_len);
	i = 0;
	while (i <= big_len - little_len)
	{
		if (st_memcmp_end(big + i, little, little_len) == 0)
			return ((void*)big + i);
		i += bad_table[*(t_ftbyte*)(big + i + little_len - 1)];
	}
	return (NULL);
}
