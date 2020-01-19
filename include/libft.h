/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:45:02 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/19 08:20:37 by cacharle         ###   ########.fr       */
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

# include "get_next_line.h"
# include "ft_algo.h"

# ifdef __linux__
#  include <stdio.h>
#  define OPEN_MAX FOPEN_MAX
# endif

# define MIN(x, y) ((x) < (y) ? (x) : (y))
# define MAX(x, y) ((x) > (y) ? (x) : (y))

typedef unsigned char	t_byte;
typedef int				t_bool;

# define TRUE 1
# define FALSE 0

/*
** ctype
*/

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_todigit(int c);

/*
** io
*/

void				ft_putendl(char *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strndup(const char *s1, size_t n);
int					ft_printf(const char *format, ...);
int					ft_sprintf(char *str, const char *format, ...);
int					ft_snprintf(char *str, size_t size,
								const char *format, ...);
int					ft_asprintf(char **ret, const char *format, ...);
int					ft_dprintf(int fd, const char *format, ...);

int					ft_vprintf(const char *format, va_list ap);
int					ft_vsprintf(char *str, const char *format, va_list ap);
int					ft_vsnprintf(char *str, size_t size, const char *format,
								va_list ap);
int					ft_vasprintf(char **ret, const char *format, va_list ap);
int					ft_vdprintf(int fd, const char *format, va_list ap);

/*
** lst
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
								void (*del)(void *));
void				ft_lstpop_front(t_list **lst, void (*del)(void *));
t_list				*ft_lstreverse_ret(t_list *lst);
void				ft_lstreverse(t_list **lst);

/*
** mem
*/

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_calloc(size_t count, size_t size);
void				ft_memswap(void *a, void *b, size_t size);

/*
** str
*/

size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
								const char *needle, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_atoi(const char *nptr);

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);

char				*ft_strjoin_free(char const *s1, char const *s2,
										int free_nb);
char				*ft_strjoin_free_snd(char const *s1, char const *s2);
int					ft_strcount(char *str, char c);
char				*ft_itoa(int n);
int					ft_strict_atoi(const char *s);
long				ft_strtol(const char *s, char **endptr, int base);

#endif
