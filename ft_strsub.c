#include <stdlib.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char            *sub;

    if ((sub = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
