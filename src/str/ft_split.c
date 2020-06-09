/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 08:29:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/06/09 17:14:58 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_segment(char const *s, char c)
{
	size_t	counter;
	int		i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		counter++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (counter);
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
			return (ft_split_destroy(strs));
		j += i - 1;
	}
	strs[tab_counter] = NULL;
	return (strs);
}
