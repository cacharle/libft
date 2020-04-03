/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_def.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:56 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 07:04:57 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DEF_H
# define LIBFT_DEF_H

# include <stddef.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef unsigned char		t_ftbyte;
typedef int					t_ftbool;
typedef unsigned int		t_ftsize;

typedef char				t_ftchar;
typedef unsigned char		t_ftuchar;
typedef int					t_ftint;
typedef unsigned int		t_ftuint;
typedef long int			t_ftlong;
typedef unsigned long int	t_ftulong;

typedef void				(*t_ftdel_func)(void*);
typedef int					(*t_ftcompar_func)(const void*, const void*);

#endif
