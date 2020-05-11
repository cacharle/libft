/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 09:52:32 by charles           #+#    #+#             */
/*   Updated: 2020/05/11 10:15:12 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

char	*ft_getfile(int fd)
{
	char	*s;
	char	buf[FT_GETFILE_BUFFER_SIZE + 1];
	int		ret;

	if (fd < 0 || fd > OPEN_MAX)
		return (NULL);
	if ((s = ft_strdup("")) == NULL)
		return (NULL);
	while ((ret = read(fd, buf, FT_GETFILE_BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if ((s = ft_strjoinf(s, buf, FT_STRJOINF_FST)) == NULL)
			return (NULL);
	}
	if (ret == -1)
	{
		free(s);
		return (NULL);
	}
	return (s);
}
