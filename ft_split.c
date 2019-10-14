/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:22:09 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/14 12:51:34 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_segment(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		counter++;
		while (*s && *s != c)
			s++;
	}
	return (counter);
}

static char		*ft_strndup(const char *s1, size_t n)
{
	char	*clone;
	size_t	i;

	if ((clone = (char*)malloc(sizeof(char) * (n + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		clone[i] = s1[i];
		i++;
	}
	clone[i] = '\0';
	return (clone);
}

static void		*destroy_strs(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	size;
	size_t	i;
	size_t	j;

	size = count_segment(s, c);
	if ((strs = (char**)malloc(sizeof(char*) * (size + 1))) == NULL)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if ((strs[j++] = ft_strndup(s, i)) == NULL)
			return (destroy_strs(strs));
		s += i;
	}
	strs[j] = NULL;
	return (strs);
}
