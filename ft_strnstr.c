#include <stdlib.h>
#include <string.h>
#include "libft.h"

char   *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t  i;
    size_t  j;
    size_t  min_len;

    min_len = len > ft_strlen(little) ? ft_strlen(little) : len;
	if (min_len == 0)
		return ((char*)big);
    i = 0;
	while (big[i])
	{
		j = 0;
		while (little[j] && big[i + j])
		{
			if (little[j] != big[i + j])
                break ;
			j++;
            if (j == min_len)
                return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
