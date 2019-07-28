#include <stdlib.h>
#include <string.h>
#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	size_t  i;
    char    *cursor;

    cursor = (char*)haystack;
	if (!ft_strlen(needle))
		return (cursor);
	while (*cursor)
	{
		i = 0;
		while (needle[i] && cursor[i])
		{
			if (needle[i] != cursor[i])
				break ;
			i++;
		}
		if (i == ft_strlen(needle))
			return (cursor);
		cursor++;
	}
	return (NULL);
}
