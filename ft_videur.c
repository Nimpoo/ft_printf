/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_videur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:53:21 by mayoub            #+#    #+#             */
/*   Updated: 2021/11/18 02:42:33 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_videur(int count, char *str)
{
	int		i;
	char	*conv;

	i = 0;
	conv = "cspdiuxX%";
	while (conv[i] != str[count] && conv[i])
		i++;
	if (conv[i] == str[count])
		return (1);
	else
		return (0);
}
