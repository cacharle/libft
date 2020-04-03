/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_dlst.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles.cabergs@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/03 15:15:04 by charles           #+#    #+#             */
/*   Updated: 2020/04/03 15:44:32 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DLST_H
# define LIBFT_DLST_H

# include <stdlib.h>
# include "libft_def.h"

typedef struct		s_ftdlst
{
	struct s_ftdlst	*prev;
	struct s_ftdlst	*next;
	void			*data;
}					t_ftdlst;

t_ftdlst			*ft_dlstnew(void *data);
void				ft_dlstdestroy(t_ftdlst *dlst, t_ftdel_func del);
void				ft_dlstdelone(t_ftdlst *dlst, t_ftdel_func del);

#endif
