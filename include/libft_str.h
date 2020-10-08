/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:39:22 by cacharle          #+#    #+#             */
/*   Updated: 2020/10/08 09:40:44 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_H
# define LIBFT_STR_H

# include <stddef.h>
# include <stdbool.h>
# include "libft_ctype.h"
# include "libft_util.h"

typedef enum
{
	FT_STRJOINF_FST,
	FT_STRJOINF_SND,
	FT_STRJOINF_ALL
}	t_ftstrjoinf_tag;

/*
** std
*/

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s1, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);

/*
** extra
*/

void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strsub(char const *s, size_t start, size_t len);
char	*ft_strsubf(char const *s, size_t start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin3(char const *s1, char const *s2, char const *s3);
char	*ft_strjoinf(char const *s1, char const *s2, t_ftstrjoinf_tag tag);
char	*ft_strjoinf_fst(char const *s1, char const *s2);
char	*ft_strjoinf_snd(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	**ft_splitf(char *s, char c);
int		ft_strcount(char *str, char c);
char	*ft_itoa(int n);
char	*ft_itoa_cpy(char *dst, int n);
int		ft_atoi_strict(const char *s);
long	ft_strtol(const char *s, char **endptr, int base);
int		ft_strcasecmp(const char *s1, const char *s2);
int		ft_strncasecmp(const char *s1, const char *s2, size_t n);
size_t	ft_strspn(const char *s, const char *charset);
size_t	ft_strcspn(const char *s, const char *charset);
char	*ft_strpbrk(const char *s, const char *charset);
char	*ft_strsep(char **stringp, const char *delim);
size_t	ft_strnlen(const char *s, size_t maxlen);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strtolower(char *s);
char	*ft_strtoupper(char *s);
char	*ft_strcat3(char *dest, const char *src1, const char *src2);

/*
** glob
*/

bool	ft_fnmatch(const char *pattern, const char *string);

/*
** NULL terminated string array
*/

char	*ft_strsjoin(char **strs, char *delim);
char	*ft_strsjoinf(char **strs, char *delim);

/*
** bloat ?
*/

/*
** char	*ft_strnew(size_t size);
** void	ft_strdel(char **as);
** void	ft_strclr(char *s);
*/

#endif
