/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:40:35 by cacharle          #+#    #+#             */
/*   Updated: 2019/10/07 10:40:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	p_n;

	p_n = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		p_n = -n;
	}
	if (p_n > 9)
		ft_putnbr_fd(p_n / 10, fd);
	ft_putchar_fd(p_n % 10 + '0', fd);
}
