/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:52:59 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:53:43 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 32
# endif

# define GNL_STATUS_LINE 1
# define GNL_STATUS_EOF 0
# define GNL_STATUS_ERROR -1

/*
** get_next_line.c
*/

int		get_next_line(int fd, char **line);

#endif
