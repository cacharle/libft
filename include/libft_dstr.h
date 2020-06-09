/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_dstr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 10:39:51 by charles           #+#    #+#             */
/*   Updated: 2020/06/09 17:35:47 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DSTR_H
# define LIBFT_DSTR_H

# include <stdlib.h>
# include "libft_def.h"
# include "libft_str.h"
# include "libft_mem.h"

/*
** \brief           Dynamic string struct
** \param str       Underlying null-terminated character array
** \param length    Number of character (not including the '\0')
** \param capacity  Maximum length - 1 of the current string
*/

typedef struct	s_ftdstr
{
	char		*str;
	size_t		length;
	size_t		capacity;
}				t_ftdstr;

t_ftdstr		*ft_dstrnew(char *from);
void			ft_dstrdestroy(t_ftdstr *dstr);
t_ftdstr		*ft_dstrgrow(t_ftdstr *dstr, size_t at_least);
t_ftdstr		*ft_dstrwrap(char *str);
char			*ft_dstrunwrap(t_ftdstr *dstr);
t_ftdstr		*ft_dstrinsert(t_ftdstr *dstr, char *inserted, size_t i);
void			ft_dstrerase(t_ftdstr *dstr, size_t start, size_t len);
t_ftdstr		*ft_dstrsubstitute(t_ftdstr *dstr, char *replacement,
									size_t start, size_t end);

#endif
