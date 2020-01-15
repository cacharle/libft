/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:29:52 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 04:02:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*mapped;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	if ((mapped = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = (*f)(s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
