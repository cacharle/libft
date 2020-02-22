/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:26:44 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 10:36:26 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define FT_READ_FD_BUF_SIZE 2048

char	*ft_read_fd(int fd)
{
	int		ret;
	char	*file;
	char	buf[FT_READ_FD_BUF_SIZE + 1];

	if ((file = ft_strdup("")) == NULL)
		return (NULL);
	while ((ret = read(fd, buf, FT_READ_FD_BUF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		ft_strjoinf(file, buf, FT_STRJOINF_FST);
	}
	if (ret == -1)
	{
		free(file);
		return (NULL);
	}
	return (file);
}
