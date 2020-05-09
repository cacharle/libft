/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:45:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/04/03 06:32:37 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>
# include <limits.h>
# include <errno.h>

# ifdef __linux__
#  include <stdio.h>
#  define OPEN_MAX FOPEN_MAX
# endif

# include "libft_io.h"
# include "libft_mem.h"
# include "libft_str.h"
# include "libft_ctype.h"

#endif
