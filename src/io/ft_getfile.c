/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:32:47 by cacharle          #+#    #+#             */
/*   Updated: 2020/08/02 11:01:06 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

int	ft_getfile(char *filename, t_ftmem *mem)
{
	int		fd;

	if ((fd = open(filename, O_RDONLY)) < 0)
		return (-1);
	if (ft_getfile_fd(fd, mem) < 0)
	{
		close(fd);
		return (-1);
	}
	return (close(fd));
}
