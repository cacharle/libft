#include <stdlib.h>
#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *clone;
    size_t  i;
    size_t  len;

    len = ft_strlen(s);
    if ((clone = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        clone[i] = s[i];
        i++;
    }
    clone[i] = '\0';
    return (clone);
}

