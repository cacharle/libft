/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_dstr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 10:39:51 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:10:54 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DSTR_H
# define LIBFT_DSTR_H

# include <stdlib.h>
# include "libft_def.h"
# include "libft_str.h"
# include "libft_mem.h"

typedef struct	s_ftdstr
{
	char		*str;
	size_t		length;
	size_t		capacity;
}				t_ftdstr;

t_ftdstr		*ft_dstrnew(char *from);
void			ft_dstrdestroy(t_ftdstr *dstr);
t_ftdstr		*ft_dstrgrow(t_ftdstr *dstr, size_t at_least);
char			*ft_dstrunwrap(t_ftdstr *dstr);
t_ftdstr		*ft_dstrinsert(t_ftdstr *dstr, char *inserted, size_t i);
// t_ftdstr		*ft_dstrreplace(t_ftdstr *dstr, char *from, char *to);

#endif
