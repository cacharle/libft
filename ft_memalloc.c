#include <stdlib.h>
#include <string.h>

void    *ft_memalloc(size_t size)
{
    void    *ptr;

    if ((ptr = malloc(size)) == NULL)
        return (NULL);
    while (size-- > 0)
        ((unsigned char*)ptr)[size] = 0;
    return (ptr);
}
