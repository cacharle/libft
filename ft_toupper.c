#include "libft.h"

int ft_toupper(int c)
{
    if (c < -1)
         return (c + 256);
    if (c == -1)
        return (-1);
    if (c == 0)
        return (0);
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return (c);
}
