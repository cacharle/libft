#include <stdlib.h>
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
        mapped[i] = (*f)((unsigned int)i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return (mapped);
}
