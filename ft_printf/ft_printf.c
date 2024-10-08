/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-20 19:16:51 by ganjinho          #+#    #+#             */
/*   Updated: 2024/07/06 13:04:30 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(const char *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 's')
		count += ft_putstr(va_arg(args, char *));
	if (*str == 'c')
		count += ft_putchar(va_arg(args, int));
	if (*str == 'p')
		count += ft_pointeradd(va_arg(args, unsigned long));
	if (*str == 'd' || *str == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (*str == 'u')
		count += ft_usgnbr(va_arg(args, unsigned int));
	if (*str == 'x' || *str == 'X')
		count += ft_hexadecimal(va_arg(args, unsigned int), *str);
	if (*str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			count += ft_check_format(&str[i], args);
		}
		else if (str[i] == '%' && str[i + 1] == '\0')
		{
			return (-1);
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end (args);
	return (count);
}
