/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 09:48:23 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 09:53:41 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_io.h"

void	ft_putnbr_base_fd(int n, char *base, int fd)
{
	unsigned int	p_n;
	int				radix;

	if (fd < 0 || fd > OPEN_MAX)
		return ;
	p_n = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		p_n = -n;
	}
	radix = ft_strlen(base);
	if (p_n > 9)
		ft_putnbr_base_fd(p_n / radix, base, fd);
	ft_putchar_fd(base[p_n % radix], fd);
}
