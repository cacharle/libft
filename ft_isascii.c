#define MAX_CHAR ((1 << 7) - 1)

int ft_isascii(int c)
{
    return (c >= 0 && c <= MAX_CHAR);
}
