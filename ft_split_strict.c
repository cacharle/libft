/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_strict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 05:20:26 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/04 05:21:29 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_segment(char const *s, char c)
{
	size_t	counter;
	int		i;

	counter = 0;
	i = -1;
	while (s[++i])
		if (s[i] == c)
			counter++;
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
	size_t	tab_counter;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	tab_counter = count_segment(s, c);
	if ((strs = (char**)malloc(sizeof(char*) * (tab_counter + 1))) == NULL)
		return (NULL);
	tab_counter = 0;
	j = -1;
	while (s[++j])
	{
		if (s[j] == c)
			continue ;
		i = 0;
		while (s[j + i] && s[j + i] != c)
			i++;
		if ((strs[tab_counter++] = ft_strndup(&s[j], i)) == NULL)
			return (destroy_strs(strs));
		j += i - 1;
	}
	strs[tab_counter] = NULL;
	return (strs);
}
