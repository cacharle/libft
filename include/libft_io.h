/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:35:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/22 10:36:44 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include "libft.h"

/*
** output
*/

void	ft_putendl(char *s);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base(int n, char *base);
void	ft_putnbr_base_fd(int n, char *base, int fd);

/*
** input
*/

char	ft_getchar(void);
char	*ft_read_fd(int fd);
char	*ft_read_file(char *filename);

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
