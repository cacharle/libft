#include <string.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (s[i] != (char)c)
    {
        if (i == 0)
            return (NULL);
        i--;
    }
    return ((char*)s + i);
}
