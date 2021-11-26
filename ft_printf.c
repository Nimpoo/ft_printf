/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:54 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/18 02:44:58 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)


{
	int		counter;
	int		count;
	va_list	args;

	counter = 0;
	count = 0;
	va_start(args, format);
	while (format[count] != '\0')
	{
		if (format[count] == '%' && ft_videur(count, (char *)format) == 1)
		{
			count++;
			counter += ft_check((char **)&format, args, count);
			count++;
		}
		else if (format[count] != '%')
		{
			ft_putchar(format[count]);
			counter++;
			count++;
		}
	}
	va_end(args);
	return (counter);
}
