#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char   *uc_dest;
    unsigned char   *uc_src;

    uc_dest = (unsigned char*)dest;
    uc_src = (unsigned char*)src;
    i = 0;
    while (i < n)
    {
        uc_dest[i] = uc_src[i];
        if (uc_dest[i] == (unsigned char)c)
            break ;
        i++;
    }
    if (i == n)
        return (NULL);
    return (dest + i + 1);
}
