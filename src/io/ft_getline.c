/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getline.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:39:38 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/12 21:32:50 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		st_read_line(int fd, char **line, char *rest)
{
	int			ret;
	char		*cut;
	static char	buf[FT_GETLINE_BUFFER_SIZE + 1] = {'\0'};

	while ((ret = read(fd, buf, FT_GETLINE_BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if ((cut = ft_strchr(buf, '\n')) != NULL)
		{
			ft_strcpy(rest, cut + 1);
			*cut = '\0';
		}
		if ((*line = ft_strjoinf(*line, buf, FT_STRJOINF_FST)) == NULL)
			return (FT_ERROR);
		if (cut != NULL)
			return (FT_LINE);
	}
	if (ret == -1)
		free(line);
	return (ret);
}

/*
** if has rest:
**     if rest has newline:
**         push rest until newline in line, shift rest
**         return LINE_READ
**     else:
**         push rest in line
**
** while can read fd in buf
**     if buf has newline:
**         push buf until newline in line
**         push buf after newline in rest
**         return LINE_READ
**     push buf in line
**
** return FTNL_EOF
*/

int				ft_getline(int fd, char **line)
{
	char		*cut;
	static char	rest[OPEN_MAX][FT_GETLINE_BUFFER_SIZE + 1] = {{'\0'}};

	if (fd < 0 || fd > OPEN_MAX || line == NULL)
		return (FT_ERROR);
	if (rest[fd][0] == '\0')
	{
		if ((*line = ft_strdup("")) == NULL)
			return (FT_ERROR);
		return (st_read_line(fd, line, rest[fd]));
	}
	if ((cut = ft_strchr(rest[fd], '\n')) != NULL)
	{
		*cut = '\0';
		if ((*line = ft_strdup(rest[fd])) == NULL)
			return (FT_ERROR);
		ft_strmove(rest[fd], cut + 1);
		return (FT_LINE);
	}
	if ((*line = ft_strdup(rest[fd])) == NULL)
		return (FT_ERROR);
	rest[fd][0] = '\0';
	return (st_read_line(fd, line, rest[fd]));
}
