/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ganjinho <ganjinho@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-16 14:08:06 by ganjinho          #+#    #+#             */
/*   Updated: 2024-09-16 14:08:06 by ganjinho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
int	g_received;
void	handler(int sig)
{
	if (sig == SIGUSR1)
		g_received = 1;
}
static void	send_signal(int pid, unsigned char c)
{
	int	bit;
	bit = 7;
	while (bit >= 0)
	{
		signal(SIGUSR1, handler);
		g_received = 0;
		if (c >> bit & 1)
		{
			if (kill(pid, SIGUSR2) == -1)
				exit(ft_printf("Failed to send signal to server %d\n", pid));
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				exit(ft_printf("Failed to send signal to server %d\n", pid));
		}
		bit--;
		while (g_received == 0)
			pause();
	}
}
int	main(int ac, char **av)
{
	int	i;
	int	server_pid;
	i = 0;
	if (ac != 3)
	{
		ft_printf("ERROR! The number of arguments is wrong.");
		return (1);
	}
	server_pid = ft_atoi(av[1]);
	if (server_pid <= 0)
		return (ft_printf("Incorrect PID\n"));
	while (av[2][i] != '\0')
	{
		send_signal(server_pid, av[2][i]);
		i++;
	}
	send_signal(server_pid, '\0');
	while (g_received == 0)
		pause();
	return (0);
}
