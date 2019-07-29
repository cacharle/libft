#include <stdlib.h>
#include <string.h>
#include "libft.h"

#include <stdio.h>
char   *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
    size_t  j;
    size_t  little_len;

    little_len = ft_strlen(little);
	if (little_len == 0 || len == 0)
		return ((char*)big);
    i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j])
		{
            /* printf(" %lu", i + j); */
			if (little[j] != big[i + j])
				break ;
			j++;
		}
		if (j == little_len)
			return ((char*)big + i);
		i++;
	}
	return (NULL);
}
