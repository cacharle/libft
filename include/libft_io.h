/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:35:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/11 09:57:42 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

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

char	ft_getchar(void);

# ifndef FT_GETFILE_BUFFER_SIZE
#  define FT_GETFILE_BUFFER_SIZE 64
# endif

char	*ft_getfile(int fd);

# ifndef FT_GETLINE_BUFFER_SIZE
#  define FT_GETLINE_BUFFER_SIZE 64
# endif

# define FT_LINE 1
# define FT_EOF 0
# define FT_ERROR -1

/*
** getline.c
*/

int		ft_getline(int fd, char **line);

#endif
