/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 10:32:47 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 10:35:07 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

char	*ft_read_file(char *filename)
{
	int		fd;
	char	*file;

	if ((fd = open(filename, O_RDONLY)) < 0 || fd > OPEN_MAX)
		return (NULL);
	if ((file = ft_read_fd(fd)) == NULL)
	{
		free(file);
		return (NULL);
	}
	if (close(fd) < 0)
	{
		free(file);
		return (NULL);
	}
	return (file);
}
