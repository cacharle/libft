#include <stdlib.h>

static size_t   count_segment(char const *s, char c)
{
    size_t  counter;

    counter = 0;
    while (*s)
    {
        if (*s == c)
        {
            s++;
            continue ;
        }
        counter++;
        while (*s && *s != c)
            s++;
    }
    return (counter);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **strs;
    char    *tmp;
    size_t  size;
    size_t  i;
    size_t  j;

    size = count_segment(s, c);
    if ((strs = (char**)malloc(sizeof(char*) * (size + 1))) == NULL)
        return (NULL);
    j = 0;
    while (*s)
    {
        if (*s == c)
        {
            s++;
            continue ;
        }
        i = 0;
        while (s[i] && s[i] != c)
            i++;
        if ((tmp = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
            return (NULL);
        i = 0;
        while (*s && *s != c)
            tmp[i++] = *s++;
        tmp[i] = '\0';
        strs[j++] = tmp;
    }
    strs[j] = 0;
    return (strs);
}
