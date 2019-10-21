/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:40:15 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 13:26:14 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0 || fd > OPEN_MAX)
		return ;
	while (*s)
		write(fd, s++, 1);
}
