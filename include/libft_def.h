/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_def.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:56 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/04 21:40:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** \file   libft_def.h
** \brief  Type and constant definition
*/

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

/*
** \brief    Standard delete function
** \param x  Resource to delete
*/

typedef void				(*t_ftdel_func)(void *x);

/*
** \brief     Standard comparison function
** \param x1  Resource 1
** \param x2  Resource 2
** \return    negative number if x1 < x2,
**            0 if x1 == x2,
**            positive number if x1 > x2
*/

typedef int					(*t_ftcompar_func)(const void *x1, const void *x2);

#endif
