#define MIN_INT (1 << 31)
#define MAX_INT (~(1 << 31))

int ft_atoi(const char *nptr)
{
	unsigned int	nb;
	int	i;
	int	is_negative;

	while (*nptr == ' ' || *nptr == '\t'|| *nptr == '\n'
		   || *nptr == '\v'|| *nptr == '\f'|| *nptr == '\r')
		nptr++;
    is_negative = 0;
	if (*nptr == '-' || *nptr == '+')
	{
        if (*nptr == '-')
            is_negative = 1;
		nptr++;
	}
    i = 0;
    nb = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
        if (!is_negative && nb > (unsigned int)MAX_INT)
            return (-1);
        else if (nb > (unsigned int)MIN_INT)
            return (0);
        nb *= 10;
        nb += nptr[i] - '0';
        i++;
	}
	return ((int)(is_negative ? -nb : nb));
}
