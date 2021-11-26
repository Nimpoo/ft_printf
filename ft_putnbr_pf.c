/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:46:59 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/18 02:16:26 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(unsigned long n, int d)
{
	int				i;
	unsigned int	k;
	char			*base;
	char			c;

	i = 0;
	if (d == 0)
		base = "0123456789abcdef";
	if (d == 1)
		base = "0123456789ABCDEF";
	if (d == 2)
		base = "0123456789";
	k = ft_strlen(base);
	if (n >= k)
	{
		i += ft_putnbr_pf((n / k), d);
		i += ft_putnbr_pf((n % k), d);
	}
	if (n < k)
	{
		c = base[n];
		i += ft_putchar_pf(c);
	}
	return (i);
}
