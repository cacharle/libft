/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 00:06:46 by cacharle          #+#    #+#             */
/*   Updated: 2020/05/17 15:34:45 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VASPRINTF_H
# define FT_VASPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft.h"
# include "libft_str.h"

# define STATUS_ERROR -1

# define SPECIFIERS_STR "nfcspdiuxX%"
# define FLAGS_STR      "#0- +'"

# define IS_STANDALONE_FLAG(c) (ft_strchr(FLAGS_STR, c) != NULL)

# define FLAG_MINUS               0b000000000001
# define FLAG_ZERO                0b000000000010
# define FLAG_SIGNED              0b000000000100
# define FLAG_SPACE               0b000000001000
# define FLAG_ALTERNATE           0b000000010000
# define FLAG_SHORT               0b000000100000
# define FLAG_SHORT_SHORT         0b000001000000
# define FLAG_LONG                0b000010000000
# define FLAG_LONG_LONG           0b000100000000
# define FLAG_WIDTH_WILDCARD      0b001000000000
# define FLAG_PRECISION_WILDCARD  0b010000000000
# define FLAG_WIDTH_OVERWRITE     0b100000000000

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
	t_pformat		*data;
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
** parse.c
*/

int					ftpf_parse(const char *format, t_flist **flist);

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
