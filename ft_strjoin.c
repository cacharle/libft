#include <stdlib.h>
#include "libft.h"

char * ft_strjoin(char const *s1, char const *s2)
{
    char    *joined;

    if ((joined = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)))
            == NULL)
        return (NULL);
    joined = ft_strcpy(joined, s1);
    return (ft_strcat(joined, s2));
}
