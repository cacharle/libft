/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:06:46 by cacharle          #+#    #+#             */
/*   Updated: 2019/11/13 09:29:23 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"

# define STATUS_ERROR -1

# define SPECIFIERS_STR "nfcspdiuxX%"
# define FLAGS_STR      "#0- +'"

# define IS_STANDALONE_FLAG(c) (ft_strchr(FLAGS_STR, c) != NULL)

# define FLAG_MINUS               (1 << 0)
# define FLAG_ZERO                (1 << 1)
# define FLAG_SIGNED              (1 << 2)
# define FLAG_SPACE               (1 << 3)
# define FLAG_ALTERNATE           (1 << 4)
# define FLAG_SHORT               (1 << 5)
# define FLAG_SHORT_SHORT         (1 << 6)
# define FLAG_LONG                (1 << 7)
# define FLAG_LONG_LONG           (1 << 8)
# define FLAG_WIDTH_WILDCARD      (1 << 9)
# define FLAG_PRECISION_WILDCARD  (1 << 10)
# define FLAG_WIDTH_OVERWRITE     (1 << 11)

# define ITOA_HEX_LOW(x) (ft_itoa_unsigned_base(x, "0123456789abcdef"))
# define ITOA_HEX_UP(x)  (ft_itoa_unsigned_base(x, "0123456789ABCDEF"))
# define ITOA_DEC(x)     (ft_itoa_base(x, "0123456789"))

typedef int						t_bool;
typedef short					t_flags;
typedef long long int			t_big_int;
typedef long long unsigned int	t_big_uint;

typedef struct
{
	int				precision;
	int				width;
	t_flags			flags;
	char			specifier;
	int				fmt_len;
	int				size;
	long long int	*written;
}					t_pformat;

typedef struct		s_flist
{
	struct s_flist	*next;
	t_pformat		*content;
}					t_flist;

typedef struct		s_printf_status
{
	va_list			ap;
	t_flist			*flist;
	const char		*format;
	char			*out;
	int				out_size;
}					t_printf_status;

/*
** ft_printf.c
*/

int					ft_printf(const char *format, ...);
const char			*add_conversion(t_printf_status *status,
									t_pformat *pformat);
const char			*add_between(t_printf_status *status);
int					destroy_status_error(t_printf_status *status);

/*
** parse.c
*/

int					parse(const char *format, t_flist **flist);
t_pformat			*parse_reduced(const char *fmt);

/*
** printer.c
*/

char				*convert(t_pformat *pformat, va_list ap);
char				*convert_specifier(va_list ap, t_pformat *pformat);
char				*handle_width(t_pformat *pformat, char *str);
char				*handle_precision(t_pformat *pformat, char *str);

/*
** utils.c
*/

char				*ft_itoa_base(long long int n, char *base);
char				*ft_itoa_unsigned_base(long long unsigned int n,
											char *base);
void				*ft_memjoin_free(void *dst, int dst_size, void *src,
										int src_size);

/*
** extract.c
*/

const char			*extract_flags(t_pformat *pformat, const char *fmt);
const char			*extract_width(t_pformat *pformat, const char *fmt);
const char			*extract_precision(t_pformat *pformat, const char *fmt);
const char			*extract_length_modifier(t_pformat *pformat,
												const char *fmt);

/*
** list.c
*/

t_flist				*list_new(t_pformat *content);
void				*list_destroy(t_flist **lst);
void				list_push_front(t_flist **lst, t_flist *new);
void				list_pop_front(t_flist **lst);
t_flist				*list_reverse(t_flist *lst);

/*
** convert_*.c
*/

char				*convert_char(va_list ap, t_pformat *pformat);
char				*convert_str(va_list ap, t_pformat *pformat);
char				*convert_ptr(va_list ap, t_pformat *pformat);
char				*convert_int(va_list ap, t_pformat *pformat);
char				*convert_uint(va_list ap, t_pformat *pformat);
char				*convert_hex(va_list ap, t_pformat *pformat);
char				*convert_percent(va_list ap, t_pformat *pformat);
char				*convert_written(va_list ap, t_pformat *pformat);
char				*convert_double(va_list ap, t_pformat *pformat);
char				*convert_none(va_list ap, t_pformat *pformat);

/*
** length_modifier.c
*/

t_big_uint			length_modifier_unsigned_int(
							va_list ap, t_pformat *pformat);
t_big_int			length_modifier_int(va_list ap, t_pformat *pformat);

#endif
