#include <stdlib.h>
#include <string.h>

char    *ft_strnew(size_t size)
{
    char    *str;

    if ((str = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
        return (NULL);
    str[size] = '\0';
    while (size-- > 0)
        str[size] = '\0';
    return (str);
}
