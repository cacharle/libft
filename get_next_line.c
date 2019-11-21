/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:08:36 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/21 03:39:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define HAS_NEWLINE(str, split_at) ((split_at = find_newline(str)) != -1)

static int		find_newline(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			return (i);
	return (-1);
}

static int		free_return(char **ptr, char **ptr2, int ret)
{
	if (ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
	if (ptr2 != NULL)
	{
		free(*ptr2);
		*ptr2 = NULL;
	}
	return (ret);
}

static int		read_line(int fd, char **line, char *rest)
{
	int		ret;
	int		split_at;
	char	*buf;

	if ((buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))) == NULL)
		return (free_return(line, NULL, STATUS_ERROR));
	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (HAS_NEWLINE(buf, split_at))
		{
			ft_strcpy(rest, buf + split_at + 1);
			buf[split_at] = '\0';
			if ((*line = ft_strjoin_free(*line, buf, 1)) == NULL)
				return (free_return(&buf, NULL, STATUS_ERROR));
			return (free_return(&buf, NULL, STATUS_LINE));
		}
		if ((*line = ft_strjoin_free(*line, buf, 1)) == NULL)
			return (free_return(&buf, NULL, STATUS_ERROR));
	}
	if (ret == -1)
		return (free_return(&buf, line, STATUS_ERROR));
	return (free_return(&buf, NULL, ret));
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
** return GNL_EOF
*/

int				get_next_line(int fd, char **line)
{
	int			split_at;
	static char	rest[OPEN_MAX][BUFFER_SIZE + 1] = {{0}};

	if (fd < 0 || fd > OPEN_MAX || line == NULL || BUFFER_SIZE <= 0)
		return (STATUS_ERROR);
	if ((*line = ft_strdup("")) == NULL)
		return (STATUS_ERROR);
	if (rest[fd][0] == '\0')
		return (read_line(fd, line, rest[fd]));
	if (HAS_NEWLINE(rest[fd], split_at))
	{
		free(*line);
		if ((*line = (char*)malloc(sizeof(char) * (split_at + 1))) == NULL)
			return (STATUS_ERROR);
		ft_strncpy(*line, rest[fd], split_at);
		(*line)[split_at] = '\0';
		ft_strcpy(rest[fd], rest[fd] + split_at + 1);
		return (STATUS_LINE);
	}
	free(*line);
	if (!(*line = (char*)malloc(sizeof(char) * (ft_strlen(rest[fd]) + 1))))
		return (STATUS_ERROR);
	ft_strcpy(*line, rest[fd]);
	rest[fd][0] = '\0';
	return (read_line(fd, line, rest[fd]));
}
