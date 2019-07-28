#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    char   *cursor;

    cursor = (char*)s;
    while (*cursor)
    {
        if (*cursor == (char)c)
            return (cursor);
        cursor++;
    }
    if (c == 0)
        return (cursor);
    return (NULL);
}
