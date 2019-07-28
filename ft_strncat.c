#include <string.h>

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (j < n && src[j])
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
