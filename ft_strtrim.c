#include <stdlib.h>
#include "libft.h"

static int  is_space(char c)
{
    return (c == ' ' || c == '\n' || c == '\t');
}

char    *ft_strtrim(char const *s)
{
    size_t  start;
    size_t  len;
    char    *trimed;

    start = 0;
    while (s[start] && is_space(s[start]))
        start++;
    len = ft_strlen(&s[start]);
    if (len != 0)
        while (s[start + len - 1] && is_space(s[start + len - 1]))
            len--;
    if ((trimed = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
        return (NULL);
    trimed = ft_strncpy(trimed, &s[start], len);
    trimed[len] = '\0';
    return (trimed);
}
