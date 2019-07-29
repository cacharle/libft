#include <stdlib.h>


static int  count_len(int nbr)
{
	int				counter;
	unsigned int	u_nbr;

	if (nbr == 0)
		return (1);
	counter = 0;
	u_nbr = nbr;
	if (nbr < 0)
	{
		counter++;
		u_nbr = -nbr;
	}
	while (u_nbr > 0)
	{
		u_nbr /= 10;
		counter++;
	}
	return (counter);
}

char    *ft_itoa(int n)
{
	char			*str;
	int				len;
	int				is_negative;
	unsigned int	u_nbr;

	len = count_len(n);
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	str[len] = '\0';
	is_negative = 0;
	u_nbr = n;
	if (n < 0)
	{
		is_negative = 1;
		str[0] = '-';
		u_nbr = -n;
	}
	len--;
	while (len >= (is_negative ? 1 : 0))
	{
		str[len] = u_nbr % 10 + '0';
		u_nbr /= 10;
		len--;
	}
	return (str);
}
