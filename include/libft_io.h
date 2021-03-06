/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_io.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:35:43 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/12 20:36:36 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_IO_H
# define LIBFT_IO_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft.h"
# include "libft_def.h"

void			ft_putendl(char *s);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

char			ft_getchar(void);

# ifndef FT_GETFILE_BUFFER_SIZE
#  define FT_GETFILE_BUFFER_SIZE 64
# endif
# if FT_GETFILE_BUFFER_SIZE <= 0
#  error "FT_GETFILE_BUFFER_SIZE must be > 0"
# endif

typedef struct	s_ftmem
{
	void		*data;
	size_t		size;
}				t_ftmem;

int				ft_getfile(int fd, t_ftmem *mem);

# ifndef FT_GETLINE_BUFFER_SIZE
#  define FT_GETLINE_BUFFER_SIZE 64
# endif
# if FT_GETLINE_BUFFER_SIZE <= 0
#  error "FT_GETLINE_BUFFER_SIZE must be > 0"
# endif

# define FT_LINE 1
# define FT_EOF 0
# define FT_ERROR -1

/*
** getline.c
*/

int				ft_getline(int fd, char **line);

#endif
