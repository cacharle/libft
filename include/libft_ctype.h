/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ctype.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:35:31 by cacharle          #+#    #+#             */
/*   Updated: 2020/02/28 12:08:52 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CTYPE_H
# define LIBFT_CTYPE_H

/*
** assertion
*/

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isspace(int c);
int	ft_isblank(int c);

/*
** conversion
*/

int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_todigit(int c);

#endif
