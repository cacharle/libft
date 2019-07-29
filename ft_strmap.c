#include <stdlib.h>
#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    size_t  i;
    size_t  len;
    char    *mapped;

    len = ft_strlen(s);
    if ((mapped = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        mapped[i] = (*f)(s[i]);
        i++;
    }
    mapped[i] = '\0';
    return (mapped);
}
