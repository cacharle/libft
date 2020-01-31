/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:36:47 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/31 10:36:51 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_sprintf(char *str, const char *format, ...);
int	ft_snprintf(char *str, size_t size, const char *format, ...);
int	ft_asprintf(char **ret, const char *format, ...);
int	ft_dprintf(int fd, const char *format, ...);
int	ft_vprintf(const char *format, va_list ap);
int	ft_vsprintf(char *str, const char *format, va_list ap);
int	ft_vsnprintf(char *str, size_t size, const char *format, va_list ap);
int	ft_vasprintf(char **ret, const char *format, va_list ap);
int	ft_vdprintf(int fd, const char *format, va_list ap);

#endif
