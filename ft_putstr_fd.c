#include <unistd.h>

void ft_putstr_fd(char const *s, int fd)
{
    while (*s)
        write(fd, s++, 1);
}
