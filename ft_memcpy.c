#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (dest == NULL && src == NULL)
        return (NULL);
    i = 0;
    while (i < n)
    {
        *((char*)dest + i) = *((char*)src + i);
        i++;
    }
    return (dest);
}
