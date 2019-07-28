#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 4096

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    size_t  j;
    size_t  k;
    unsigned char   tmp[BUF_SIZE];
    unsigned char   *uc_dest;
    unsigned char   *uc_src;

    if (dest == NULL && src == NULL)
        return (NULL);
    uc_dest = (unsigned char*) dest;
    uc_src = (unsigned char*) src;
    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < BUF_SIZE && i < n)
        {
            tmp[j] = uc_src[i];
            j++;
            i++;
        }
        k = 0;
        while (k < j)
        {
            uc_dest[k] = tmp[k];
            k++;
        }
        i++;
    }
    return (dest);
}
