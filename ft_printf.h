/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:57:40 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/18 02:17:43 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
int		ft_videur(int count, char *str);
int		ft_check(char **tab_arg, va_list args, int count);
int		ft_putchar_pf(int c);
int		ft_putstr_pf(char *str);
int		ft_putnbr_pf(unsigned long c, int d);
int		ft_putnbr(int n);
int		ft_printf(const char *format, ...);

#endif
