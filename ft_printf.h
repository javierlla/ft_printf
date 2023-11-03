/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jllarena <jllarena@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:54:07 by jllarena          #+#    #+#             */
/*   Updated: 2023/11/03 11:35:32 by jllarena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_printf_caract(int c);
int		ft_printf_char(char *str);
int		ft_printf_int(int n);
int		ft_printf_unsign(unsigned int num);
int		ft_printf_percent(void);
int		ft_printf_hex(unsigned int num, const char format);
int		ft_printf_ptr(unsigned long long ptr);

void	ft_putchar_fd(char c, int fd);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);

#endif