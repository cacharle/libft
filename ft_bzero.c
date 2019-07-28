#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    char    *s_char_ptr;

    s_char_ptr = (char*)s;
    while (n-- > 0)
        s_char_ptr[n] = 0;
}
