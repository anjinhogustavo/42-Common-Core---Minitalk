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

void	receive_signals(int pid)
{
	while(SIGUSR2 && SIGUSR1)
	{
		// se meu sinal for 1
		if(pid, SIGUSR2)
		{
			// coonverto para string
		}
		// se meu sinal for 0
		if(pid, SIGUSR1)
		{
			// converto para string
		}
	}
}

int main(int ac, char **av)
{
	ft_printf("Welcome to my ganjinho server:");
}