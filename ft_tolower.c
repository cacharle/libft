int ft_tolower(int c)
{
    if (c < -1)
         return (c + 256);
    if (c == -1)
        return (-1);
    if (c == 0)
        return (0);
    if (c >= 'A' && c <= 'Z')
        return ('a' + c - 'A');
    return (c);
}
