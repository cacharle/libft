#include <unistd.h>

void ft_putstr(char const *s)
{
    while (*s)
        write(STDOUT_FILENO, s++, 1);
}
