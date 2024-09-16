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

void	send_signal(pid_t pid, char *word)
{
	int	bit;
	int	i;

	i = 0;
	while (word[i])
	{
		bit = 0;
		while (bit < 8)
		{
			// se minha palavra encriptada com bitwise for igual 0 bit envia pra sinal 1
			if (word[i] % 2 == 0)
				kill(pid, SIGUSR1);
			// se minha palavra encriptada com bitwise for igual 1 bit envia pra sinal 2
			else
				kill(pid, SIGUSR2);
			bit++;
			usleep(250); // Aguarda um curto período
			word[i] = word[i] / 2;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;
	//porque diferente de 3 ? ./a.out PID MENSAGEM
	if(ac != 3)
		ft_printf("ERROR!Number of Arguments not valid!\n");
	else
	{
		pid = ft_atoi(av[1]); // recebe o idprocess (PID = indica processo alvo no sistema)
		send_signal(pid, av[2]); //mensagem sendo enviada bit a bit
	}
}