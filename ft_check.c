/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:24:09 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/18 02:22:45 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char **tab_arg, va_list args, int count)
{
	if (*(tab_arg[0] + count) == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	if (*(tab_arg[0] + count) == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	if (*(tab_arg[0] + count) == 'p')
	{
		ft_putstr_pf("0x");
		return (ft_putnbr_pf(va_arg(args, unsigned long), 0) + 2);
	}
	if (*(tab_arg[0] + count) == 'd' || *(tab_arg[0] + count) == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (*(tab_arg[0] + count) == 'u')
		return (ft_putnbr_pf(va_arg(args, unsigned int), 2));
	if (*(tab_arg[0] + count) == 'x')
		return (ft_putnbr_pf(va_arg(args, unsigned int), 0));
	if (*(tab_arg[0] + count) == 'X')
		return (ft_putnbr_pf(va_arg(args, unsigned int), 1));
	if (*(tab_arg[0] + count) == '%')
		return (ft_putchar_pf('%'));
	return (0);
}
