#include "libft_ht.h"

/*
** Iterate function `f` over every pair in `ht`.
*/

void	ft_htiter(t_ftht *ht, void (*f)(t_ftht_content*))
{
	size_t	i;

	i = 0;
	while (i < ht->size)
	{
		ft_lstiter(ht->entries[i], (void (*)(void*))f);
		i++;
	}
}
