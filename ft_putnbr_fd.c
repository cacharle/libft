#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int	p_n;

	p_n = n;
	if (n < 0)
	{
        ft_putchar_fd('-', fd);
		p_n = -n;
	}
	if (p_n > 9)
		ft_putnbr_fd(p_n / 10, fd);
	ft_putchar_fd(p_n % 10 + '0', fd);
}
