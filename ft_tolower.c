int ft_tolower(int c)
{
    unsigned char uc;

    uc = c;
    /* if (c < -1) */
    /*     return (c + 256); */

    if (uc >= 'A' && uc <= 'Z')
        return (uc - 'A' + 'a');
    return (c);
}
