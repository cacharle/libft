/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:45:33 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/16 07:45:32 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcount(char *str, char c)
{
	int	counter;

	if (c == '\0')
		return (0);
	counter = 0;
	while (*str)
		if (*str++ == c)
			counter++;
	return (counter);
}
