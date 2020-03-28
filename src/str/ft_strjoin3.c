#include "libft.h"

char	*ft_strjoin3(char const *s1, char const *s2, char const *s3)
{
	char	*joined;

	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	if ((joined = (char*)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3) + 1))) == NULL)
		return (NULL);
	ft_strcpy(joined, s1);
	ft_strcat(joined, s2);
	ft_strcat(joined, s3);
	return (joined);
}
