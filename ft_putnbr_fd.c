/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:40:35 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/20 03:46:11 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	p_n;

	if (fd < 0 || fd > OPEN_MAX)
		return ;
	p_n = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		p_n = -n;
	}
	if (p_n > 9)
		ft_putnbr_fd(p_n / 10, fd);
	ft_putchar_fd(p_n % 10 | 0x30, fd);
}
