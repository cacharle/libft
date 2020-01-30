/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 09:47:14 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:07:47 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

void	ft_putendl(char *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

# ifndef FTNL_BUFFER_SIZE
#  define FTNL_BUFFER_SIZE 32
# endif

# define FTNL_STATUS_LINE 1
# define FTNL_STATUS_EOF 0
# define FTNL_STATUS_ERROR -1

/*
** get_next_line.c
*/

int		ft_next_line(int fd, char **line);

#endif
