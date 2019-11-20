/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:52:59 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/03 22:43:18 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# define STATUS_LINE 1
# define STATUS_EOF 0
# define STATUS_ERROR -1

/*
** get_next_line.c
*/

int		get_next_line(int fd, char **line);
int		read_line(int fd, char **line, char *rest);
int		find_newline(char *str);
int		free_return(char **ptr, char **rest, int ret);

#endif
