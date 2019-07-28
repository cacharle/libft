#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	while (n-- > 0)
		((unsigned char*)s)[n] = uchar_c;
	return (s);
}
