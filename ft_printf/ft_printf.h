/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-20 17:41:30 by ganjinho          #+#    #+#             */
/*   Updated: 2024-05-20 17:41:30 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_usgnbr(unsigned int nb);
int	ft_putnbr(int nb);
int	ft_hexadecimal(unsigned long nbr, char str);
int	ft_pointeradd(unsigned long nbr);
int	ft_atoi(const char *str);

#endif
