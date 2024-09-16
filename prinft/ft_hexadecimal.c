/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-14 15:34:34 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-14 15:34:34 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long nbr, char str)
{
	int		count;
	char	*hexa;

	count = 0;
	if (str == 'x')
		hexa = "0123456789abcdef";
	if (str == 'X')
		hexa = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		count += ft_hexadecimal((nbr / 16), str);
		count += ft_hexadecimal((nbr % 16), str);
	}
	else
		count += ft_putchar((*(hexa + nbr)));
	return (count);
}
