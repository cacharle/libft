/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 09:52:32 by charles           #+#    #+#             */
/*   Updated: 2020/08/02 10:55:46 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

/*
** \brief      Read a file in a memory buffer
** \param fd   File descriptor to read from
** \param mem  Pointer to mem struct (buffer and buffer size)
** \return     -1 on error, 0 otherwise
*/

int	ft_getfile_fd(int fd, t_ftmem *mem)
{
	char	buf[FT_GETFILE_BUFFER_SIZE];
	int		ret;

	if (fd < 0 || fd > OPEN_MAX || mem == NULL
		|| (mem->data = malloc(1)) == NULL)
		return (-1);
	mem->size = 0;
	while ((ret = read(fd, buf, FT_GETFILE_BUFFER_SIZE)) > 0)
	{
		if ((mem->data = ft_memjoinf1(mem->data, mem->size, buf, ret)) == NULL)
			return (-1);
		mem->size += ret;
	}
	if (ret == -1)
		free(mem->data);
	return (ret);
}
