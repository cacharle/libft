#include <unistd.h>
#include "libft.h"

void    ft_putnbr(int n)
{
	unsigned int	p_n;

	p_n = n;
	if (n < 0)
	{
        ft_putchar('-');
		p_n = -n;
	}
	if (p_n > 9)
		ft_putnbr(p_n / 10);
	ft_putchar(p_n % 10 + '0');
}
