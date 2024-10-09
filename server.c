/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 14:08:36 by ganjinho          #+#    #+#             */
/*   Updated: 2024-09-16 14:08:36 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	convert_char(unsigned int *array)
{
	unsigned char	character;
	int				i;

	character = 0;
	i = 0;
	while (i < 8)
	{
		character |= (array[i] << (7 - i));
		i++;
	}
	ft_printf("%c", character);
}

void	receive_signals(int signal)
{
	static unsigned int	bit = 0;
	static unsigned int	array[8];

	if (bit < 8)
	{
		if (signal == SIGUSR1)
			array[bit] = 0;
		if (signal == SIGUSR2)
			array[bit] = 1;
		bit++;
	}
	if (bit == 8)
	{
		convert_char(array);
		bit = 0;
	}
}

int	main(int ac, char **av)
{
	ft_printf("Welcome to ganjinho server:");
	ft_printf("The server PID is: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, receive_signals);
		signal(SIGUSR2, receive_signals);
		pause();
	}
	return (0);
}
