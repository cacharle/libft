#include <unistd.h>

void ft_putchar(char c)
{
    /* if (c < 0) */
    /*     write(1, "", 1); */
    write(STDOUT_FILENO, &c, 1);
}
