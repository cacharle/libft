/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 09:17:48 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/15 09:19:36 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcount(char *str, char c)
{
	int	counter;

	if (c == '\0')
		return (1);
	counter = 0;
	while (*str)
		if (*str++ == c)
			counter++;
	return (counter);
}
