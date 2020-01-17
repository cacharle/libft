/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:45:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/17 10:51:40 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <errno.h>

# include "ft_types.h"
# include "ft_ctype.h"
# include "ft_io.h"
# include "ft_mem.h"
# include "ft_str.h"

# ifdef FT_FEATURES_FT_LST
#  include "ft_lst.h"
# endif

# ifdef FT_FEATURES_FT_GET_NEXT_LINE
#  include "ft_get_next_line.h"
# endif

# ifdef FT_FEATURES_FT_PRINTF
#  include "ft_printf.h"
# endif

# ifdef __linux__
#  include <stdio.h>
#  define OPEN_MAX FOPEN_MAX
# endif

# define TRUE 1
# define FALSE 0

#endif
