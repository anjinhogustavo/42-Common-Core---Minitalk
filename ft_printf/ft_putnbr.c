/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-20 18:14:17 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-20 18:14:17 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	mod;
	int	count;

	count = 0;
	if (nb == -2147483648)
		count += ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			count += ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			count += ft_putnbr(nb / 10);
		}
		mod = (nb % 10 + '0');
		count += ft_putchar(mod);
	}
	return (count);
}
